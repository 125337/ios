// hookVoiceMessageCellView @ 01f55ae0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceAutoSpeed::hookVoiceMessageCellView(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  undefined **local_48;
  char *local_40;
  char *local_38;
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "VoiceMessageCellView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_hookVoiceClickEntriesInClass__026c9438,pcVar1);
    local_30 = PTR_s_onBeginPlayingMsg_autoPlayEnable_026a9d88;
    pcVar1 = local_28;
    _class_getInstanceMethod(local_28,PTR_s_onBeginPlayingMsg_autoPlayEnable_026a9d88);
    if (pcVar1 != (char *)0x0) {
      local_38 = pcVar1;
      _method_getImplementation();
      ppuVar2 = &local_78;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc0000000;
      local_6c = 0;
      local_68 = FUN_01f55bf0;
      local_60 = &DAT_0258cdb0;
      local_50 = local_30;
      local_58 = pcVar1;
      local_40 = pcVar1;
      _objc_retainBlock();
      ppuVar3 = ppuVar2;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
      local_48 = ppuVar3;
      _method_setImplementation(local_38,ppuVar3);
    }
  }
  return;
}

