// FUN_0024ceb4 @ 0024ceb4

void FUN_0024ceb4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028c93a8)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (puVar1 = local_20, FUN_002592fc(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_40 = 1;
  }
  else {
    puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_selectedFilterGroupId_026a0fe8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupAllId);
    local_18 = local_30;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

