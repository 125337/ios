// FUN_002d8828 @ 002d8828

void FUN_002d8828(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38 [3];
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_20 = puVar1;
  FUN_002acca8(local_18,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_18;
  local_38[0] = lVar2;
  FUN_0029ded4(local_18,0x24f74b);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  if ((local_38[0] == 0) || (local_38[0] == local_18)) {
    lVar2 = local_18;
    FUN_0029ded4(0,local_18,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_18;
    local_48 = lVar2;
    FUN_0029ded4(local_18,0x24f74a);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    if (local_48 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_48);
    }
    if (local_50 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_50);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_38[0]);
  }
  puVar1 = local_20;
  lVar2 = local_18;
  FUN_002ae960(local_18,&cf_MMTabBarItemView);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (local_40 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_40);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

