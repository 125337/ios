// FUN_0034d324 @ 0034d324

void FUN_0034d324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_1c8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined1 auStack_148 [24];
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  byte local_3d;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  if ((local_28 == (undefined *)0x0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    local_3d = 0;
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x7f198);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHomeAvatarStripView_026ce538;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeAvatarStripView_026ce538,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_3d = 1;
      puVar3 = PTR_WCRefineHomeAvatarStripView_026ce538;
      _objc_alloc();
      param_1 = *(undefined8 *)PTR__CGRectZero_025782f0;
      param_2 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
      param_3 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
      param_4 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar2 = local_48;
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTag__026caa80,DAT_02324018);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_48);
    }
    FUN_0034f844(local_30);
    local_50 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = local_50;
    local_90 = param_1;
    local_88 = param_2;
    local_80 = param_3;
    local_78 = param_4;
    FUN_003467d0();
    puVar2 = local_48;
    local_70 = uVar5;
    uStack_68 = uVar6;
    local_60 = param_3;
    uStack_58 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    bVar1 = (byte)puVar2;
    local_b8 = uVar5;
    local_b0 = uVar6;
    local_a8 = param_3;
    local_a0 = uVar7;
    _CGRectEqualToRect(uVar5,uVar6,param_3,uVar7,local_70,uStack_68,local_60,uStack_58);
    local_91 = (bVar1 ^ 1) & 1;
    if (local_91 != 0) {
      uStack_d8 = uStack_68;
      local_e0 = local_70;
      uStack_c8 = uStack_58;
      local_d0 = local_60;
      uStack_f8 = uStack_68;
      local_100 = local_70;
      uStack_e8 = uStack_58;
      local_f0 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,uStack_68,local_60,uStack_58,local_48,PTR_s_setFrame__026ca960);
    }
    uVar4 = local_38;
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) == 0) {
      local_1c8 = 0;
    }
    else {
      local_1c8 = local_38;
    }
    _objc_initWeak(auStack_108,local_1c8);
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_0035322c;
    local_118 = &DAT_0257c558;
    _objc_copyWeak(auStack_110,auStack_108);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOnTapUsername__026a24e8,&local_130);
    local_168 = PTR___NSConcreteStackBlock_02578660;
    local_160 = 0xc2000000;
    local_15c = 0;
    local_158 = FUN_003539b8;
    local_150 = &DAT_0257c588;
    _objc_copyWeak(auStack_148,auStack_108);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setOnLongPressUsername__026a24f0,&local_168);
    local_190 = PTR___NSConcreteStackBlock_02578660;
    local_188 = 0xc2000000;
    local_184 = 0;
    local_180 = FUN_003544c4;
    local_178 = &DAT_0257be28;
    _objc_copyWeak(auStack_170,auStack_108);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setOnLongPressBlankArea__026a24f8,&local_190);
    if ((local_3d & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_reloadContentWithReason_forceReb_026a24e0,&cf_configure_create,1);
    }
    if (((local_3d & 1) != 0) || ((local_91 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
    }
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

