// FUN_003ce750 @ 003ce750

void FUN_003ce750(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if (lVar2 == 0) {
    local_30 = *(long *)PTR____NSArray0___02578280;
  }
  lVar3 = lVar1;
  FUN_003ce834(lVar1,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}

