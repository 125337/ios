// FUN_01563f9c @ 01563f9c

void FUN_01563f9c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  byte local_a1;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  if (local_20 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    local_40 = param_1;
    local_38 = param_2;
    local_30 = param_3;
    local_28 = param_4;
    _CGRectGetWidth();
    if (0.0 < param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
      local_60 = param_1;
      local_58 = param_2;
      local_50 = param_3;
      local_48 = param_4;
      _CGRectGetHeight();
      if (0.0 < param_1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
        puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        local_a0 = param_1;
        local_98 = param_2;
        local_90 = param_3;
        uStack_88 = param_4;
        local_80 = param_3;
        uStack_78 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar3 = local_80;
        uVar4 = uStack_78;
        _UIGraphicsBeginImageContextWithOptions(1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        lVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
        local_c8 = uVar3;
        local_c0 = uVar4;
        local_b8 = param_3;
        local_b0 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,uVar4,param_3,param_4,lVar2,PTR_s_drawViewHierarchyInRect_afterScr_0269e2f8
                   ,0);
        local_a1 = (byte)lVar2;
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = lVar2;
        _UIGraphicsEndImageContext();
        local_18 = local_d0;
        if ((local_a1 & 1) == 0) {
          local_18 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
        }
        local_64 = 1;
        _objc_storeStrong(&local_d0,0);
        goto LAB_015641c8;
      }
    }
  }
  local_18 = 0;
  local_64 = 1;
LAB_015641c8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

