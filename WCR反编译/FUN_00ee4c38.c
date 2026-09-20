// FUN_00ee4c38 @ 00ee4c38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee4c38(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double local_2f8;
  double local_2f0;
  undefined *local_2e0;
  undefined *local_118;
  double local_100;
  double local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  if (local_40 == (undefined *)0x0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    _CGRectGetMaxX();
    puVar1 = local_40;
    local_78 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_bounds_026ca548);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    local_88 = param_1;
    if (param_1 <= 0.0) {
      local_88 = local_70;
      _CGRectGetHeight(local_70,local_68,local_60,local_58);
      local_88 = local_88 + 24.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEnabled__026ca938,1);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_40,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setClipsToBounds__026ca8c8,1);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
    (*(code *)PTR__objc_release_02578630)();
    FUN_00ee6178();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar9 = 0x4010000000000000;
    uVar5 = 0x4010000000000000;
    uVar10 = 0x4024000000000000;
    uVar7 = 0x4024000000000000;
    FUN_00ee612c();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar7,uVar9,uVar10,local_40,PTR_s_setContentEdgeInsets__0269ebd0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAdjustsImageWhenHighlighted__026a1b00,0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAdjustsImageWhenDisabled__026ab8f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentHorizontalAlignment__0269f228);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentVerticalAlignment__026ab900,0);
    puVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundImage_forState__026a0028,0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundImage_forState__026a0028,0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundImage_forState__026a0028,0,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundImage_forState__026a0028,0,2);
    local_100 = *(double *)PTR__CGSizeZero_025782f8;
    lVar3 = local_48;
    dVar6 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    lVar8 = local_48;
    puVar1 = (undefined *)0x0;
    if (lVar3 != 0) {
      local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        dVar6 = 15.0;
        local_118 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        local_2e0 = local_118;
      }
      local_30 = local_2e0;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_sizeWithAttributes__026cab08);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)();
      local_100 = dVar6;
    }
    local_2f0 = (double)(long)local_100 + 20.0;
    if (80.0 <= local_2f0) {
      local_2f0 = 80.0;
    }
    if (local_2f0 <= 46.0) {
      local_2f8 = 46.0;
    }
    else {
      local_2f8 = local_2f0;
    }
    _CGRectIsEmpty(local_70,local_68,local_60,local_58);
    if ((((ulong)puVar1 & 1) != 0) || (local_78 <= 0.0)) {
      uVar9 = 0x403c000000000000;
      uVar7 = 0;
      uVar5 = 0;
      FUN_00ee3968();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar7,local_2f8,uVar9,local_40,PTR_s_setBounds__026ca8a0);
    }
    else {
      dVar6 = local_78 - local_2f8;
      lVar8 = (long)((local_88 - 28.0) * 0.5);
      uVar5 = 0x403c000000000000;
      FUN_00ee3968();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar6,lVar8,local_2f8,uVar5,local_40,PTR_s_setFrame__026ca960);
    }
    _objc_storeStrong(&local_80,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

