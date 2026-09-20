// FUN_00fc77a8 @ 00fc77a8

void FUN_00fc77a8(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  char *local_108;
  undefined *local_100;
  undefined **local_f8;
  char *local_f0;
  char *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  char *local_b8;
  char *local_b0;
  undefined **local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  char *local_68;
  char *local_60;
  undefined **local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar1 = "MMPageSheetAdapter";
  local_30 = param_1;
  local_28 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = "pageSheetWillClose:";
    local_38 = pcVar1;
    _sel_registerName();
    pcVar1 = local_38;
    local_40 = pcVar2;
    _class_getInstanceMethod(local_38,pcVar2);
    local_48 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      _method_getImplementation();
      ppuVar3 = &local_88;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc0000000;
      local_7c = 0;
      local_78 = FUN_00fc7a18;
      local_70 = &DAT_02583cd0;
      local_60 = local_40;
      local_68 = pcVar1;
      local_50 = pcVar1;
      _objc_retainBlock();
      ppuVar4 = ppuVar3;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
      local_58 = ppuVar4;
      _method_setImplementation(local_48,ppuVar4);
    }
    pcVar1 = "pageSheetWillCloseWithType:";
    _sel_registerName();
    pcVar2 = local_38;
    local_90 = pcVar1;
    _class_getInstanceMethod(local_38,pcVar1);
    local_98 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      _method_getImplementation();
      ppuVar4 = &local_d8;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc0000000;
      local_cc = 0;
      local_c8 = FUN_00fc7b30;
      local_c0 = &DAT_02583cf0;
      local_b0 = local_90;
      local_b8 = pcVar2;
      local_a0 = pcVar2;
      _objc_retainBlock();
      ppuVar3 = ppuVar4;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      local_a8 = ppuVar3;
      _method_setImplementation(local_98,ppuVar3);
    }
    local_e0 = PTR_s_dismissWithAnimated__0269e420;
    pcVar1 = local_38;
    _class_getInstanceMethod(local_38,PTR_s_dismissWithAnimated__0269e420);
    if (pcVar1 != (char *)0x0) {
      local_e8 = pcVar1;
      _method_getImplementation();
      ppuVar4 = &local_128;
      local_128 = PTR___NSConcreteStackBlock_02578660;
      local_120 = 0xc0000000;
      local_11c = 0;
      local_118 = FUN_00fc7ba8;
      local_110 = &DAT_02583cd0;
      local_100 = local_e0;
      local_108 = pcVar1;
      local_f0 = pcVar1;
      _objc_retainBlock();
      ppuVar3 = ppuVar4;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      local_f8 = ppuVar3;
      _method_setImplementation(local_e8,ppuVar3);
    }
  }
  return;
}

