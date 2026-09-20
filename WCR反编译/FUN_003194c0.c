// FUN_003194c0 @ 003194c0

void FUN_003194c0(long param_1)

{
  long lVar1;
  undefined8 local_50;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_20 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x28);
    }
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

