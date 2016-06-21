<CsoundSynthesizer>

<CsOptions>

-odac -d

</CsOptions>

<CsInstruments>


sr = 44100

ksmps = 32

nchnls = 2

0dbfs = 1


;schedule 1,0,10 ; play instrument 1 for 10 seconds

instr 1

aL,aR mp3in "mamalover.mp3" ; get sound from mp3

aL rezzy aL, line:k(100,p3,4000), 90 ; resonant filter, frequency changes from 100 to 4000 on the duration of instrument playing

aR rezzy aR, line:k(4000,p3,100), 90, 1 ; similar but filter in highpass mode in right channel

outs aL, aR

endin


</CsInstruments>

<CsScore>

i 1 0 10 ; for testing just for 5 seconds, otherwise may freeze the UI if not run in separate thread

</CsScore>

</CsoundSynthesizer>
<bsbPanel>
 <label>Widgets</label>
 <objectName/>
 <x>100</x>
 <y>100</y>
 <width>320</width>
 <height>240</height>
 <visible>true</visible>
 <uuid/>
 <bgcolor mode="nobackground">
  <r>255</r>
  <g>255</g>
  <b>255</b>
 </bgcolor>
</bsbPanel>
<bsbPresets>
</bsbPresets>
