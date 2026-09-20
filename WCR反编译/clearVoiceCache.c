// clearVoiceCache @ 01f67cb8

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::clearVoiceCache(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineVoiceCloneHelper_026cea40;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_clearVoiceCache_026c9688);
  puVar1 = PTR_WCRefineHelper_026ce000;
  NEON_ucvtf(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__nt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showWeToastDoneWithText__0269cee0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

