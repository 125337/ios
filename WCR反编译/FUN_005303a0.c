// FUN_005303a0 @ 005303a0

void FUN_005303a0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_50;
  uint local_44;
  long local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_00531a98();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  if (lVar2 != 0) {
    FUN_00531f90(lVar2,&cf_m_nsNickName);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00530928();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar3 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    lVar2 = local_40[0];
    bVar1 = lVar3 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar2;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(bVar1,local_40,0);
    if (local_44 != 0) goto LAB_005306a0;
  }
  lVar2 = local_20;
  FUN_00531f90(local_20,&cf_nickname);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_00530928();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  lVar2 = local_50;
  if (lVar3 == 0) {
    lVar2 = local_20;
    FUN_0052b368(0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00530928();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
  }
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_005306a0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

