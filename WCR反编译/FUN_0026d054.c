// FUN_0026d054 @ 0026d054

void FUN_0026d054(long param_1)

{
  long lVar1;
  long lVar2;
  long local_90;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_00269fd4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_38 = 1;
  }
  else {
    FUN_0026a600();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    if (lVar1 == 0) {
      local_38 = 1;
    }
    else if (*(int *)(param_1 + 0x28) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_mutableCopy_0269d8a0);
      lVar2 = *(long *)(param_1 + 0x20);
      local_50 = lVar1;
      FUN_0026c610();
      _objc_retainAutoreleasedReturnValue();
      local_90 = lVar2;
      if (lVar2 == 0) {
        local_90 = *(long *)(param_1 + 0x20);
      }
      local_58 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,&cf_item);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,local_28);
      FUN_0026aa80(local_28,0);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      local_38 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectForKey__0269d700,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_6eeNN_1Y_);
      FUN_0026c8d0(local_48,0);
      local_38 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

