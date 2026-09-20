// FUN_00f6180c @ 00f6180c

void FUN_00f6180c(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CContact";
  _objc_getClass();
  local_28 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    pcVar1 = local_28;
    _objc_alloc_init();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_20,&cf_m_nsUsrName);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setValue_forKey__0269d300,local_20,&cf_m_nsAliasName);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setValue_forKey__0269d300,local_20,&cf_m_nsNickName);
      pcVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

