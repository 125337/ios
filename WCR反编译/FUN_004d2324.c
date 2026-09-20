// FUN_004d2324 @ 004d2324

void FUN_004d2324(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_a8;
  char *local_58;
  char *local_50;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if ((local_20 == (char *)0x0) || (param_2 == 0)) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    pcVar1 = local_20;
    _object_getClass();
    _class_getInstanceVariable(pcVar1,local_28);
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      _ivar_getTypeEncoding();
      local_50 = pcVar1;
      if ((pcVar1 == (char *)0x0) || (*pcVar1 != '@')) {
        local_18 = (char *)0x0;
        local_2c = 1;
      }
      else {
        pcVar1 = local_20;
        _object_getIvar(0,local_20,local_38);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_58 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)pcVar1 & 1) == 0) {
          local_a8 = (char *)0x0;
        }
        else {
          local_a8 = local_58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_a8;
        local_2c = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

