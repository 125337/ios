// FUN_004209dc @ 004209dc

void FUN_004209dc(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_70;
  char *local_50 [3];
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  if ((((ulong)puVar1 & 1) == 0) || (FUN_00405240(), ((ulong)puVar1 & 1) != 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    local_20 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_18 = (char *)0x0;
        local_2c = 1;
      }
      else {
        pcVar2 = "CContactMgr";
        _objc_getClass();
        local_38 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_18 = (char *)0x0;
          local_2c = 1;
        }
        else {
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          local_50[0] = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,local_38);
          if (((ulong)pcVar3 & 1) == 0) {
            local_70 = (char *)0x0;
          }
          else {
            local_70 = local_50[0];
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_70;
          local_2c = 1;
          _objc_storeStrong(local_50,0);
        }
      }
      _objc_storeStrong(&local_28,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

