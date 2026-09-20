// FUN_00451aac @ 00451aac

void FUN_00451aac(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_60;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_collectionView);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  local_20 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UICollectionView_026ce1f8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_60);
  return;
}

