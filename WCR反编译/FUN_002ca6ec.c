// FUN_002ca6ec @ 002ca6ec

undefined8
FUN_002ca6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
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
    uStack_38 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
    local_40 = *(undefined8 *)PTR__CGRectNull_025782e8;
    uStack_28 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
    local_30 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x10);
  }
  else {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar2 = local_48;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_50);
      local_40 = param_1;
      uStack_38 = param_2;
      local_30 = param_3;
      uStack_28 = param_4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_50);
      local_40 = param_1;
      uStack_38 = param_2;
      local_30 = param_3;
      uStack_28 = param_4;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

