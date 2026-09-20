// FUN_007432f0 @ 007432f0

void FUN_007432f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026f45e0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    lVar2 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f45d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    (*DAT_028cc6f8)(local_18,local_20,local_28);
  }
  else {
    FUN_00759928(lVar1,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

