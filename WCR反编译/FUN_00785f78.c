// FUN_00785f78 @ 00785f78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00785f78(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_230;
  double local_220;
  double local_218;
  ulong local_100;
  ulong local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  ulong local_68;
  undefined4 local_5c;
  ulong local_58;
  ulong local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  if (local_50 == 0) {
    local_41 = false;
    local_5c = 1;
    goto LAB_007865cc;
  }
  uVar2 = local_50;
  FUN_00784bac();
  _objc_retainAutoreleasedReturnValue();
  local_40 = &cf_head;
  local_38 = &cf_avatar;
  local_30 = &cf_contactimage;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_00784ccc();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    local_218 = param_4;
    if (param_3 < param_4) {
      local_218 = param_3;
    }
    local_d0 = local_218;
    local_b8 = local_218;
    local_220 = param_3;
    if (param_3 < param_4) {
      local_220 = param_4;
    }
    local_f0 = local_220;
    local_d8 = local_220;
    local_e8 = param_4;
    local_e0 = param_3;
    local_c8 = param_4;
    local_c0 = param_3;
    local_b0 = param_1;
    local_a8 = param_2;
    local_a0 = param_3;
    dStack_98 = param_4;
    local_90 = param_3;
    dStack_88 = param_4;
    if ((24.0 <= local_218) && (local_220 <= 72.0)) {
      dVar4 = ABS(param_3 - param_4);
      uVar7 = 0x4020000000000000;
      if (dVar4 <= 8.0) {
        bVar1 = local_58 == 0;
        if (bVar1) {
          local_230 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_100 = local_230;
        }
        else {
          local_230 = local_58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = local_230;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_100);
        }
        uVar2 = local_50;
        if (local_f8 == 0) {
          local_41 = false;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_convertRect_toView__0269ded8,local_f8);
          puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          dVar5 = param_1;
          uVar8 = param_2;
          uVar9 = uVar7;
          dVar6 = dVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          _CGRectGetWidth(dVar5,uVar8,uVar9,dVar6);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          dVar6 = dVar4;
          _CGRectGetMinX(dVar4,uVar7,param_2,param_1);
          local_41 = true;
          if (72.0 <= dVar6) {
            _CGRectGetMaxX(dVar4,uVar7,param_2,param_1);
            local_41 = dVar5 - 72.0 < dVar4;
          }
        }
        local_5c = 1;
        _objc_storeStrong(&local_f8,0);
        goto LAB_007865ac;
      }
    }
    local_41 = false;
    local_5c = 1;
  }
  else {
    local_41 = true;
    local_5c = 1;
  }
LAB_007865ac:
  _objc_storeStrong(&local_68,0);
LAB_007865cc:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_41 & 1;
}

