// fitEmoticonContent:onOverlay:resetLayout: @ 010e236c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

void WCRefineNameplateHelper::fitEmoticonContent_onOverlay_resetLayout_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  long lVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uVar6;
  double in_d1;
  undefined8 uVar7;
  undefined8 uVar8;
  double in_d2;
  double dVar9;
  double in_d3;
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  double dStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  double local_c8;
  undefined8 local_c0;
  char local_a1;
  double local_a0;
  double dStack_98;
  ulong local_88 [5];
  double local_60;
  double dStack_58;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  if ((local_38 == 0) || (local_40 == 0)) {
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    uVar3 = local_40;
    dVar9 = in_d2;
    local_60 = in_d2;
    dStack_58 = in_d3;
    _objc_getAssociatedObject(local_40,DAT_0280e1d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_88[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      dStack_98 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
      local_a0 = *(double *)PTR__CGSizeZero_025782f8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_CGSizeValue_0269ec50);
      local_a0 = in_d2;
      dStack_98 = in_d1;
    }
    dVar5 = ABS(local_60 - local_a0);
    local_a1 = false;
    if (dVar5 < 0.5) {
      dVar5 = ABS(dStack_58 - dStack_98);
      local_a1 = dVar5 < 0.5;
    }
    uVar7 = 0x3fe0000000000000;
    if ((((((local_41 & 1) != 0) || (uVar7 = 0x3ff0000000000000, dVar5 = local_a0, local_a0 < 1.0))
         || (uVar7 = 0x3ff0000000000000, dVar5 = dStack_98, dStack_98 < 1.0)) ||
        (((bool)local_a1 != false || (uVar7 = 0x3ff0000000000000, dVar5 = local_60, local_60 < 1.0))
        )) || (uVar7 = 0x3ff0000000000000, dVar5 = dStack_58, dStack_58 < 1.0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAutoresizingMask__026ca878,0x12);
      IVar2 = local_28;
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_c8 = dVar5;
      local_c0 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,uVar7,dVar9,in_d3,*(undefined8 *)PTR__CGSizeZero_025782f8,
                 *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8),IVar2,
                 PTR_s_fitContentView_inBounds_imageSiz_026ae908,lVar1);
      uVar3 = local_40;
      uVar7 = DAT_0280e1d0;
      if ((1.0 <= local_60) && (1.0 <= dStack_58)) {
        puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,dStack_58,PTR__OBJC_CLASS___NSValue_026ce1f0,
                   PTR_s_valueWithCGSize__0269ec00);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar7,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAutoresizingMask__026ca878,0);
      _memcpy(auStack_f8,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar1 = local_38;
      _memcpy(auStack_128,auStack_f8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_128);
      uVar8 = 0;
      uVar6 = 0;
      dVar9 = local_a0;
      dVar5 = dStack_98;
      FUN_010e1d58();
      local_170 = uVar6;
      uStack_168 = uVar8;
      local_160 = dVar9;
      dStack_158 = dVar5;
      local_148 = uVar6;
      uStack_140 = uVar8;
      local_138 = dVar9;
      dStack_130 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBounds__026ca8a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_1a0 = uVar6;
      local_198 = uVar8;
      local_190 = dVar9;
      local_188 = dVar5;
      _CGRectGetMidX();
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_1c0 = uVar7;
      local_1b8 = uVar8;
      local_1b0 = dVar9;
      local_1a8 = dVar5;
      _CGRectGetMidY(uVar7,uVar8,dVar9,dVar5);
      FUN_010e2340();
      local_1d0 = uVar6;
      uStack_1c8 = uVar7;
      local_180 = uVar6;
      uStack_178 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,local_38,PTR_s_setCenter__026ca8c0);
      _CGAffineTransformMakeScale(local_60 / local_a0,dStack_58 / dStack_98);
      lVar1 = local_38;
      _memcpy(auStack_230,auStack_200,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_230);
      local_48 = 0;
    }
    _objc_storeStrong(local_88,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

