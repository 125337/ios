// FUN_0008c210 @ 0008c210

undefined8
FUN_0008c210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  if ((local_48 == 0) || (local_50 == 0)) {
    uStack_38 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_40 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_28 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_30 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  }
  else if (local_48 == local_50) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    local_40 = param_1;
    uStack_38 = param_2;
    local_30 = param_3;
    uStack_28 = param_4;
  }
  else {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      local_40 = param_1;
      uStack_38 = param_2;
      local_30 = param_3;
      uStack_28 = param_4;
    }
    else {
      lVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_convertRect_toView__0269ded8,local_50);
      local_40 = param_1;
      uStack_38 = param_2;
      local_30 = param_3;
      uStack_28 = param_4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

