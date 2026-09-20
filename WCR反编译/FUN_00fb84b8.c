// FUN_00fb84b8 @ 00fb84b8

void FUN_00fb84b8(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "CContactMgr";
    _objc_getClass("CContactMgr");
    pcVar4 = (cfstringStruct *)pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_38 == (cfstringStruct *)0x0) ||
       (pcVar4 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar4 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_2c = 1;
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_2c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = &cf___;
        pcVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsAliasName);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_48;
        local_48 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar4 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar4;
        local_2c = 1;
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

