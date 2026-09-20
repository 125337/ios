// hookBaseMsgContentViewController @ 01f67fa0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceKeepKeyboard::hookBaseMsgContentViewController(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  char *local_88;
  undefined **local_80;
  char *local_78;
  char *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  char *local_48;
  undefined **local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "BaseMsgContentViewController";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _class_getInstanceMethod(pcVar1,PTR_s_mmTableView_touchesBegan_withEve_026c9768);
    local_30 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      _method_getImplementation();
      ppuVar2 = &local_68;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc0000000;
      local_5c = 0;
      local_58 = FUN_01f68128;
      local_50 = &DAT_0258cea0;
      local_48 = pcVar1;
      local_38 = pcVar1;
      _objc_retainBlock();
      ppuVar3 = ppuVar2;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
      local_40 = ppuVar3;
      _method_setImplementation(local_30,ppuVar3);
    }
    pcVar1 = local_28;
    _class_getInstanceMethod(local_28,PTR_s_hideInputToolView_026c9778);
    if (pcVar1 != (char *)0x0) {
      local_70 = pcVar1;
      _method_getImplementation();
      ppuVar3 = &local_a8;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc0000000;
      local_9c = 0;
      local_98 = FUN_01f68414;
      local_90 = &DAT_0257c6e8;
      local_88 = pcVar1;
      local_78 = pcVar1;
      _objc_retainBlock();
      ppuVar2 = ppuVar3;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
      local_80 = ppuVar2;
      _method_setImplementation(local_70,ppuVar2);
    }
  }
  return;
}

