// hookHapticFeedback @ 01f54f5c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceAutoSpeed::hookHapticFeedback(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  undefined **local_98;
  char *local_90;
  char *local_88;
  undefined *local_80;
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
  
  pcVar1 = "UIImpactFeedbackGenerator";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_30 = PTR_s_impactOccurred_026ca6a0;
    local_28 = pcVar1;
    _class_getInstanceMethod(pcVar1,PTR_s_impactOccurred_026ca6a0);
    if (pcVar1 != (char *)0x0) {
      local_38 = pcVar1;
      _method_getImplementation();
      ppuVar2 = &local_78;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc0000000;
      local_6c = 0;
      local_68 = FUN_01f55104;
      local_60 = &DAT_0258cd30;
      local_50 = local_30;
      local_58 = pcVar1;
      local_40 = pcVar1;
      _objc_retainBlock();
      ppuVar3 = ppuVar2;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
      local_48 = ppuVar3;
      _method_setImplementation(local_38,ppuVar3);
      local_80 = PTR_s_impactOccurredWithIntensity__026c9410;
      pcVar1 = local_28;
      _class_getInstanceMethod(local_28,PTR_s_impactOccurredWithIntensity__026c9410);
      if (pcVar1 != (char *)0x0) {
        local_88 = pcVar1;
        _method_getImplementation();
        ppuVar3 = &local_c8;
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc0000000;
        local_bc = 0;
        local_b8 = FUN_01f55184;
        local_b0 = &DAT_0258cd70;
        local_a0 = local_80;
        local_a8 = pcVar1;
        local_90 = pcVar1;
        _objc_retainBlock();
        ppuVar2 = ppuVar3;
        _imp_implementationWithBlock();
        (*(code *)PTR__objc_release_02578630)(ppuVar3);
        local_98 = ppuVar2;
        _method_setImplementation(local_88,ppuVar2);
      }
    }
  }
  return;
}

