// FUN_003c8194 @ 003c8194

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003c8194(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double local_2c8;
  double local_2c0;
  double local_2b0;
  double local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_290;
  double local_270;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  cfstringStruct *local_58;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_7);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_4;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  local_90 = 0x4074000000000000;
  uVar8 = 0x4074000000000000;
  local_270 = param_1;
  if (param_1 < 320.0) {
    local_270 = 320.0;
  }
  local_98 = local_270;
  local_60 = local_270;
  local_a0 = 73.0;
  local_a8 = 16.0;
  local_b0 = 64.0;
  dVar6 = 8.0;
  local_b8 = 8.0;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeGroupingInlineRightDisplayMo_026a3010);
  pcVar3 = local_58;
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar4 = local_58;
  if (((ulong)pcVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar4;
    local_38 = &cf_NSFont;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    local_290 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      dVar6 = 13.0;
      local_290 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_290;
    }
    local_30 = local_290;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_e1 = pcVar4 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_2a0 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_sizeWithAttributes__026cab08,local_d8);
    local_f8 = dVar6;
    local_f0 = uVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_100 = 0x404b000000000000;
    local_110 = 0x4057000000000000;
    local_118 = (double)(long)local_f8 + 8.0;
    local_2a8 = local_118;
    if (92.0 < local_118) {
      local_2a8 = 92.0;
    }
    local_120 = local_2a8;
    local_108 = local_2a8;
    if (local_2a8 <= 54.0) {
      local_2b0 = 54.0;
    }
    else {
      local_2b0 = local_2a8;
    }
    local_128 = local_2b0;
    local_b0 = local_2b0;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  uVar5 = local_48;
  local_130 = 0;
  dVar6 = (local_60 - local_a8) - local_b0;
  local_2c0 = local_a0 + 80.0;
  if (local_2c0 < dVar6 - local_b8) {
    local_2c0 = dVar6 - local_b8;
  }
  local_2c8 = local_2c0 - local_a0;
  if (local_2c8 <= 80.0) {
    local_2c8 = 80.0;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar5 & 1) != 0) {
    uVar8 = 0x4026000000000000;
    uVar10 = 0x4038000000000000;
    dVar7 = local_a0;
    dVar9 = local_2c8;
    FUN_00360240();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,uVar8,dVar9,uVar10,local_48,PTR_s_setFrame__026ca960);
    FUN_003c8b78(local_48,1);
  }
  uVar5 = local_50;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar5 & 1) != 0) {
    uVar8 = 0x4041800000000000;
    uVar10 = 0x4034000000000000;
    dVar7 = local_a0;
    FUN_00360240();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,uVar8,local_2c8,uVar10,local_50,PTR_s_setFrame__026ca960);
    FUN_003c8b78(local_50,0);
  }
  pcVar3 = local_58;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar3 & 1) != 0) {
    uVar8 = 0x4026000000000000;
    uVar10 = 0x4034000000000000;
    dVar7 = local_b0;
    FUN_00360240();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar6,uVar8,dVar7,uVar10,local_58,PTR_s_setFrame__026ca960);
    FUN_003c8b78(local_58,0);
    pcVar3 = local_58;
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextAlignment__026caa90,2);
    }
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

