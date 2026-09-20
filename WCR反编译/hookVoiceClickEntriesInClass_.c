// hookVoiceClickEntriesInClass: @ 01f55214

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceAutoSpeed::hookVoiceClickEntriesInClass_(ID param_1,SEL param_2,CLASS param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  CLASS CVar3;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  CLASS local_158;
  undefined *local_150;
  undefined **local_148;
  CLASS local_140;
  CLASS local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  CLASS local_108;
  undefined *local_100;
  undefined **local_f8;
  CLASS local_f0;
  CLASS local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  CLASS local_b8;
  undefined *local_b0;
  undefined **local_a8;
  CLASS local_a0;
  CLASS local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  CLASS local_68;
  undefined *local_60;
  undefined **local_58;
  CLASS local_50;
  CLASS local_48;
  undefined *local_40;
  CLASS local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = PTR_s_onClick_026c9418;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _class_getInstanceMethod(param_3,PTR_s_onClick_026c9418);
  local_48 = param_3;
  if (param_3 != 0) {
    _method_getImplementation();
    ppuVar1 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc0000000;
    local_7c = 0;
    local_78 = FUN_01f55510;
    local_70 = &DAT_0258cd30;
    local_60 = local_40;
    local_68 = param_3;
    local_50 = param_3;
    _objc_retainBlock();
    ppuVar2 = ppuVar1;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    local_58 = ppuVar2;
    _method_setImplementation(local_48,ppuVar2);
  }
  local_90 = PTR_s_onClick__026c9420;
  CVar3 = local_38;
  _class_getInstanceMethod(local_38,PTR_s_onClick__026c9420);
  local_98 = CVar3;
  if (CVar3 != 0) {
    _method_getImplementation();
    ppuVar1 = &local_d8;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc0000000;
    local_cc = 0;
    local_c8 = FUN_01f558f0;
    local_c0 = &DAT_02583cd0;
    local_b0 = local_90;
    local_b8 = CVar3;
    local_a0 = CVar3;
    _objc_retainBlock();
    ppuVar2 = ppuVar1;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    local_a8 = ppuVar2;
    _method_setImplementation(local_98,ppuVar2);
  }
  local_e0 = PTR_s_responseUserClick_026c9428;
  CVar3 = local_38;
  _class_getInstanceMethod(local_38,PTR_s_responseUserClick_026c9428);
  local_e8 = CVar3;
  if (CVar3 != 0) {
    _method_getImplementation();
    ppuVar2 = &local_128;
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc0000000;
    local_11c = 0;
    local_118 = FUN_01f55984;
    local_110 = &DAT_0258cd50;
    local_100 = local_e0;
    local_108 = CVar3;
    local_f0 = CVar3;
    _objc_retainBlock();
    ppuVar1 = ppuVar2;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    local_f8 = ppuVar1;
    _method_setImplementation(local_e8,ppuVar1);
  }
  local_130 = PTR_s_responseUserClick__026c9430;
  CVar3 = local_38;
  _class_getInstanceMethod(local_38,PTR_s_responseUserClick__026c9430);
  if (CVar3 != 0) {
    local_138 = CVar3;
    _method_getImplementation();
    ppuVar2 = &local_178;
    local_178 = PTR___NSConcreteStackBlock_02578660;
    local_170 = 0xc0000000;
    local_16c = 0;
    local_168 = FUN_01f55a24;
    local_160 = &DAT_0258cd90;
    local_150 = local_130;
    local_158 = CVar3;
    local_140 = CVar3;
    _objc_retainBlock();
    ppuVar1 = ppuVar2;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    local_148 = ppuVar1;
    _method_setImplementation(local_138,ppuVar1);
  }
  return;
}

