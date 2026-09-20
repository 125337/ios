// FUN_006a8104 @ 006a8104

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006a8104(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *local_208;
  undefined *local_188;
  undefined *local_160;
  undefined *local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  undefined1 *local_78;
  double local_70;
  undefined1 *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    puVar3 = local_28;
    FUN_006a90c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_38 = puVar3;
    FUN_006a91f0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_40 = puVar2;
    FUN_006a938c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_48 = puVar3;
    FUN_006a9718();
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    local_188 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_188 = local_48;
      FUN_006a9718();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_188;
    }
    local_59 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_188;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_28;
    FUN_006a8bf8();
    if ((((ulong)puVar3 & 1) == 0) && (local_50 == (undefined *)0x0)) {
      FUN_006a9810(local_40);
      if ((local_38 != (undefined *)0x0) && (local_38 != local_40)) {
        FUN_006a9810(local_38);
      }
      if ((local_28 != local_40) && (local_28 != local_38)) {
        FUN_006a9810(local_28);
      }
      local_2c = 1;
    }
    else if (((DAT_028cbea2 & 1) == 0) ||
            ((local_48 == (undefined *)0x0 && (local_50 == (undefined *)0x0)))) {
      FUN_006a9810(local_40);
      if ((local_38 != (undefined *)0x0) && (local_38 != local_40)) {
        FUN_006a9810(local_38);
      }
      if ((local_28 != local_40) && (local_28 != local_38)) {
        FUN_006a9810(local_28);
      }
      local_2c = 1;
    }
    else {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_unreadDotSize_026a66b8);
      local_70 = (double)(long)puVar3;
      if (local_70 < 1.0) {
        local_70 = 1.0;
      }
      dVar8 = 15.0;
      if (15.0 < local_70) {
        local_70 = 15.0;
      }
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_unreadDotShape_026a66c0);
      local_78 = puVar4;
      if ((long)puVar4 < 1) {
        local_78 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      if (0xb < (long)local_78) {
        local_78 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 3);
      }
      if ((local_38 != (undefined *)0x0) && (local_38 != local_40)) {
        FUN_006a9810(local_38);
      }
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x24f716);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        dVar8 = 0.0;
        uVar6 = 0;
        dVar5 = local_70;
        dVar7 = local_70;
        FUN_006a9930();
        local_a0 = uVar6;
        local_98 = dVar8;
        local_90 = dVar5;
        local_88 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,dVar8,dVar5,dVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
        puVar3 = local_80;
        local_80 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_02324260);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setUserInteractionEnabled__026caad8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_80);
      }
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setUserInteractionEnabled__026caad8,0);
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      dVar5 = 1000.0;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_006a997c(local_28,local_48,local_40);
      dVar7 = 0.0;
      local_b8 = 4.0;
      local_c0 = 0.0;
      local_c8 = 0.0;
      puVar4 = local_68;
      local_b0 = dVar5;
      local_a8 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_unreadDotPositionMode_026a66c8);
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_unreadDotOffsetX_026a66d0);
        local_c0 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_unreadDotOffsetY_026a66d8);
        local_c8 = dVar7;
      }
      dVar7 = local_b0 + local_b8 + local_c0;
      dVar9 = (local_a8 - local_70 / 2.0) + local_c8;
      dVar8 = local_70;
      dVar5 = local_70;
      FUN_006a9930();
      puVar3 = local_80;
      local_e8 = dVar7;
      dStack_e0 = dVar9;
      local_d8 = dVar8;
      dStack_d0 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_frame_026ca640);
      local_108 = dVar7;
      local_100 = dVar9;
      local_f8 = dVar8;
      local_f0 = dVar5;
      _CGRectEqualToRect(dVar7,dVar9,dVar8,dVar5,local_e8,dStack_e0,local_d8,dStack_d0);
      if (((ulong)puVar3 & 1) == 0) {
        dStack_128 = dStack_e0;
        local_130 = local_e8;
        dStack_138 = dStack_d0;
        local_140 = local_d8;
        dStack_148 = dStack_e0;
        local_150 = local_e8;
        local_120 = local_140;
        dStack_118 = dStack_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,dStack_e0,local_d8,dStack_d0,local_80,PTR_s_setFrame__026ca960);
      }
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_traitCollection_026caba8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_unreadDotColorForTraitCollection_026a66e0);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar8 = local_70;
      puVar4 = local_78;
      puVar3 = local_80;
      bVar1 = local_158 == (undefined *)0x0;
      if (bVar1) {
        local_208 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_160 = local_208;
      }
      else {
        local_208 = local_158;
      }
      FUN_006a9d5c(dVar8,puVar3,puVar4,local_208);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 != puVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_80);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bringSubviewToFront__026ca550,local_80);
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_68,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

