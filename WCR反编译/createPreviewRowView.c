// createPreviewRowView @ 0183dc90

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::createPreviewRowView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double in_d2;
  undefined *local_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  double local_1a8;
  undefined8 uStack_1a0;
  ID local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  undefined8 local_178;
  undefined *local_170;
  long local_168;
  double local_160;
  undefined *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined *local_128;
  double local_120;
  undefined8 uStack_118;
  double local_108;
  undefined8 uStack_100;
  ID local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_78;
  double local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  uVar1 = DAT_02339b60;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar9 = DAT_02339b60;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = in_d2;
  local_78 = uVar9;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_58 = in_d2;
  if (in_d2 <= 0.0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = dVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  local_a0 = 0x405b800000000000;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar8 = 0;
  uVar5 = 0;
  dVar6 = local_58;
  uVar9 = local_a0;
  FUN_0183e5b8();
  local_c8 = uVar5;
  local_c0 = uVar8;
  local_b0 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar8,dVar6,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isPageAvatarSpecialKey_026b6618);
  if ((IVar2 & 1) == 0) {
    local_38 = &cf_J_Yu;
    local_30 = &cf_J_YRh;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_160 = local_58 / 2.0;
    local_158 = puVar3;
    for (local_168 = 0; puVar3 = local_a8, local_168 < 2; local_168 = local_168 + 1) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      dVar7 = local_160 * (double)local_168;
      uVar5 = 0;
      dVar6 = local_160;
      uVar9 = local_a0;
      FUN_0183e5b8();
      local_190 = dVar7;
      local_188 = uVar5;
      local_180 = dVar6;
      local_178 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar7,uVar5,dVar6,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
      IVar2 = local_48;
      local_170 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_createPreviewCanvasForType__026b6660,local_168);
      _objc_retainAutoreleasedReturnValue();
      dVar6 = local_160 / 2.0;
      uVar9 = 0x4045000000000000;
      local_198 = IVar2;
      FUN_0183e604();
      local_1c0 = dVar6;
      uStack_1b8 = uVar9;
      local_1a8 = dVar6;
      uStack_1a0 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(dVar6,uVar9,local_198,PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addSubview__026ca4c0,local_198);
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      uVar5 = 0;
      uVar9 = 0x4053800000000000;
      uVar8 = 0x4034000000000000;
      dVar6 = local_160;
      FUN_0183e5b8();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar9,dVar6,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTextAlignment__026caa90,1);
      puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectAtIndexedSubscript__0269cc78,local_168);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addSubview__026ca4c0,local_1c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addSubview__026ca4c0,local_170);
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_170,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar3;
    local_14c = 1;
    _objc_storeStrong(&local_158,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar8 = 0;
    uVar5 = 0;
    dVar6 = local_58;
    uVar9 = local_a0;
    FUN_0183e5b8();
    local_f0 = uVar5;
    local_e8 = uVar8;
    local_d8 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar8,dVar6,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
    IVar2 = local_48;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_createPreviewCanvasForType__026b6660);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = local_58 / 2.0;
    uVar9 = 0x4045000000000000;
    local_f8 = IVar2;
    FUN_0183e604();
    local_120 = dVar6;
    uStack_118 = uVar9;
    local_108 = dVar6;
    uStack_100 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(dVar6,uVar9,local_f8,PTR_s_setCenter__026ca8c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addSubview__026ca4c0,local_f8);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar5 = 0;
    uVar9 = 0x4053800000000000;
    uVar8 = 0x4034000000000000;
    FUN_0183e5b8();
    local_148 = uVar5;
    local_140 = uVar9;
    local_130 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar9,local_58,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_128 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTextAlignment__026caa90,1);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setText__026caa88,&cf_ub4YP);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addSubview__026ca4c0,local_128);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addSubview__026ca4c0,local_d0);
    puVar3 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar3;
    local_14c = 1;
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

