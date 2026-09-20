// FUN_0001ab70 @ 0001ab70

void FUN_0001ab70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_40 [3];
  undefined *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_28 = puVar1;
  FUN_0001c6ac();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_40[0] = uVar2;
  FUN_0001cab0(uVar2,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  FUN_0001c90c(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = local_28;
  uVar2 = local_40[0];
  FUN_0001cab0(local_40[0],&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  FUN_0001c90c(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  puVar1 = local_28;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    FUN_0001c90c(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  puVar1 = local_28;
  uVar3 = local_20;
  FUN_0001cd30(local_20,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_0001c90c(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02578eb0);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

