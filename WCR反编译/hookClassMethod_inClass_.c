// hookClassMethod:inClass: @ 01fa00f8

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePlayBypass::hookClassMethod_inClass_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  CLASS local_58;
  undefined *local_50;
  undefined **local_48;
  CLASS local_40;
  CLASS local_38;
  CLASS local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = param_4;
  local_28 = (undefined *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _class_getClassMethod(param_4,param_3);
  if ((param_4 != 0) &&
     ((local_28 == PTR_s_audioModule_canMixWithAudioList__026c9d20 ||
      (local_28 == PTR_s_audioList_canMixWithAudioModule__026c9d30)))) {
    local_38 = param_4;
    _method_getImplementation(0);
    ppuVar1 = &local_78;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc0000000;
    local_6c = 0;
    local_68 = FUN_01fa01fc;
    local_60 = &DAT_0258d128;
    local_50 = local_28;
    local_58 = param_4;
    local_40 = param_4;
    _objc_retainBlock();
    ppuVar2 = ppuVar1;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    local_48 = ppuVar2;
    _method_setImplementation(local_38,ppuVar2);
  }
  return;
}

