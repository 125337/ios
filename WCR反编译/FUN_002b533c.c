// FUN_002b533c @ 002b533c

undefined8
FUN_002b533c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_28 = 0;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar2 != 0) {
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (bVar1) {
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      local_28 = param_1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      local_28 = param_1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

