// FUN_01cf30a8 @ 01cf30a8

void FUN_01cf30a8(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProfileBgHTMLHeight__026c3928);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setProfileBgHTMLAutoRawHeight__026c3930);
  DAT_028e4700 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setProfileBgOffsetX__026c3980);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setProfileBgOffsetY__026c3970);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProfileBgScale__026c3990);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,local_18,PTR_s_setProfileBgAlpha__026c39a0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setProfileBgOffsetXNight__026c3988);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setProfileBgOffsetYNight__026c3978);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,local_18,PTR_s_setProfileBgScaleNight__026c3998);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,local_18,PTR_s_setProfileBgAlphaNight__026c39a8);
  _objc_storeStrong(&local_18,0);
  return;
}

