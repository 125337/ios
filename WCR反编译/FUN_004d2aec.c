// FUN_004d2aec @ 004d2aec

void FUN_004d2aec(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_88;
  char *local_28;
  char *local_18;
  
  local_18 = (char *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != (char *)0x0) {
    local_28 = local_18;
    _object_getClass();
    _class_getInstanceVariable(local_28,"packToSend");
    if (local_28 == (char *)0x0) {
      local_28 = local_18;
      _object_getClass();
      _class_getInstanceVariable(local_28,"_packToSend");
    }
    if (local_28 != (char *)0x0) {
      local_88 = local_28;
      _ivar_getTypeEncoding();
      pcVar1 = local_18;
      if (local_88 == (char *)0x0) {
        local_88 = "";
      }
      if ((*local_88 == 'B') || (*local_88 == 'c')) {
        _ivar_getOffset();
        pcVar1[(long)local_28] = param_2 & 1;
        goto LAB_004d2cf4;
      }
    }
    pcVar1 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_2 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_packToSend);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
LAB_004d2cf4:
  _objc_storeStrong(&local_18,0);
  return;
}

