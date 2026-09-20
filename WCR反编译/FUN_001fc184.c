// FUN_001fc184 @ 001fc184

long FUN_001fc184(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double local_80;
  double dStack_78;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar3 = local_30;
  if (local_30 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      uVar3 = local_38;
      dStack_78 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      local_80 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
      if (local_38 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          local_80 = param_2;
          dStack_78 = param_1;
        }
      }
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      uVar1 = (uint)uVar3;
      uVar3 = local_38 >> 4;
      FUN_001f9678();
      uVar5 = (ulong)uVar1;
      FUN_001f95dc();
      uVar6 = (ulong)uVar1;
      FUN_001fb590();
      local_28 = (((((((((uVar4 ^ 0x811c9dc5) * 0x1000193 ^ (long)(param_3 * 10.0 + 0.5)) *
                        0x1000193 ^ (long)(param_4 * 10.0 + 0.5)) * 0x1000193 ^
                      (long)(local_80 * 10.0 + 0.5)) * 0x1000193 ^ (long)(dStack_78 * 10.0 + 0.5)) *
                     0x1000193 ^ uVar3) * 0x1000193 ^ uVar5 & 1) * 0x1000193 ^ uVar6 & 1) *
                  0x1000193 ^ (ulong)uVar1 & 1) * 0x1000193;
      goto LAB_001fc56c;
    }
  }
  local_28 = 0;
LAB_001fc56c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

