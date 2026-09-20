// FUN_003c9dc0 @ 003c9dc0

void FUN_003c9dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  double dVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double local_1b8;
  ulong local_150 [4];
  cfstringStruct *local_130;
  double local_128;
  double local_120;
  cfstringStruct *local_118;
  undefined8 local_110;
  long lStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  double local_e0;
  double dStack_d8;
  undefined8 local_d0;
  long local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  long lStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      local_1b8 = 0.0;
      local_40 = 0;
      FUN_003cae34(&local_40,0);
      FUN_003caf7c();
      local_48 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_70 = local_1b8;
      local_68 = param_2;
      local_60 = param_3;
      local_58 = param_4;
      _CGRectGetHeight(local_1b8,param_2);
      uVar6 = 0x3ff0000000000000;
      if (local_1b8 <= 1.0) {
        FUN_003cb0c8();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        local_90 = local_1b8;
        local_88 = uVar6;
        local_80 = param_3;
        local_78 = param_4;
        _CGRectGetHeight(local_1b8,uVar6,param_3,param_4);
      }
      local_50 = local_1b8;
      lVar7 = (long)((local_1b8 - local_48) * 0.5);
      uVar6 = local_40;
      dVar5 = local_48;
      dVar8 = local_48;
      FUN_00360240();
      uVar3 = local_30;
      local_b0 = uVar6;
      lStack_a8 = lVar7;
      local_a0 = dVar5;
      dStack_98 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      local_d0 = uVar6;
      local_c8 = lVar7;
      local_c0 = dVar5;
      local_b8 = dVar8;
      _CGRectEqualToRect(uVar6,lVar7,dVar5,dVar8,local_b0,lStack_a8,local_a0,dStack_98);
      if ((uVar3 & 1) == 0) {
        lStack_e8 = lStack_a8;
        local_f0 = local_b0;
        dStack_d8 = dStack_98;
        local_e0 = local_a0;
        lStack_108 = lStack_a8;
        local_110 = local_b0;
        dStack_f8 = dStack_98;
        local_100 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,lStack_a8,local_a0,dStack_98,local_30,PTR_s_setFrame__026ca960);
      }
      pcVar4 = &cf_setImageSize_;
      _NSSelectorFromString();
      uVar2 = local_30;
      local_118 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4);
      uVar3 = local_30;
      pcVar4 = local_118;
      if ((uVar2 & 1) != 0) {
        dVar5 = local_48;
        dVar8 = local_48;
        FUN_003ae5d4();
        local_128 = dVar5;
        local_120 = dVar8;
        (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar8,uVar3,pcVar4);
      }
      uVar3 = local_30;
      uVar2 = local_30;
      FUN_003ca4e8();
      _objc_retainAutoreleasedReturnValue();
      FUN_003cb1f8(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar4 = &cf_updateUnreadCountView;
      _NSSelectorFromString();
      uVar3 = local_28;
      local_130 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_130);
      }
      uVar3 = local_28;
      FUN_003cb864();
      _objc_retainAutoreleasedReturnValue();
      local_150[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,lStack_a8,local_a0,dStack_98,uVar3,PTR_s_setFrame__026ca960);
      uVar3 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028ca296);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_setImage__026ca978);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,local_150[0],PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_bringSubviewToFront__026ca550,local_150[0]);
      FUN_003ca3d4(local_30,1);
      _objc_storeStrong(local_150,0);
      local_34 = 0;
      goto LAB_003ca2b8;
    }
  }
  local_34 = 1;
LAB_003ca2b8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

