// hookWCAudioModuleMgr @ 01f9fbf0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePlayBypass::hookWCAudioModuleMgr(ID param_1,SEL param_2)

{
  char *pcVar1;
  
  pcVar1 = "WCAudioModuleMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_hookInstanceMethod_inClass__026c9d18,
               PTR_s_canSetActiveWithScene_groupName__026c9d10,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_hookClassMethod_inClass__026c9d28,
               PTR_s_audioModule_canMixWithAudioList__026c9d20,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_hookClassMethod_inClass__026c9d28,
               PTR_s_audioList_canMixWithAudioModule__026c9d30,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_hookInstanceMethod_inClass__026c9d18,
               PTR_s_isAudioModuleInterrupt__026c9d38,pcVar1);
  }
  return;
}

