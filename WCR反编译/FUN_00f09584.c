// FUN_00f09584 @ 00f09584

void FUN_00f09584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  lVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if (lVar1 != 0) {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_38 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_normalizedRemotePath_026abb08);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_38 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_downloadRemotePath_toTemporaryPa_026abbc8,
             local_38,*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

