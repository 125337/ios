// FUN_00868ad0 @ 00868ad0

void FUN_00868ad0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_50;
  cfstringStruct *local_48;
  char *local_40;
  undefined8 local_28;
  char *local_20;
  char *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028cd8c6);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = "AnyPromise";
    _objc_getClass();
    pcVar2 = &cf_promiseWithValue_;
    local_40 = pcVar1;
    _NSSelectorFromString();
    local_48 = pcVar2;
    if ((local_40 != (char *)0x0) &&
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar2),
       ((ulong)pcVar1 & 1) != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSError_026ce470,PTR_s_errorWithDomain_code_userInfo__026a1648,
                 &cf_WCRefine_CallRing,1,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
      _objc_storeStrong(&local_50,0);
      goto LAB_00868c68;
    }
  }
  pcVar1 = local_20;
  (*DAT_028cd508)(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
LAB_00868c68:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

