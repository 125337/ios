// FUN_003defdc @ 003defdc

void FUN_003defdc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = lVar1;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = (char *)0x0;
    local_3c = 1;
  }
  else {
    pcVar3 = "CContact";
    _objc_getClass();
    local_48 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_3c = 1;
    }
    else {
      _objc_alloc_init();
      local_50 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        FUN_00367110(pcVar3,&cf_m_nsUsrName,local_30);
        FUN_00367110(local_50,&cf_m_nsNickName,local_38);
        FUN_00367110(local_50,&cf_m_nsRemark,local_38);
        pcVar3 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_3c = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

