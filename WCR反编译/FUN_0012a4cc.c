// FUN_0012a4cc @ 0012a4cc

void FUN_0012a4cc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  ulong local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "CContact";
  _objc_getClass();
  local_30 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_18 = (char *)0x0;
    local_40 = 1;
  }
  else {
    pcVar1 = local_30;
    _objc_alloc_init();
    local_48 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_20,&cf_m_nsUsrName);
      uVar3 = local_28;
      FUN_0010ee50();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if ((uVar3 != 0) &&
         (uVar3 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_20),
         (uVar3 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setValue_forKey__0269d300,local_50,&cf_m_nsNickName);
      }
      _objc_storeStrong(&local_50,0);
      pcVar1 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

