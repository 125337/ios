// FUN_00fb7e54 @ 00fb7e54

void FUN_00fb7e54(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c8;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
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
    pcVar1 = (cfstringStruct *)pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_38 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_40 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_2c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = &cf___;
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160)
        ;
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar4;
          FUN_00fbe464();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_48;
          local_48 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          _objc_storeStrong(&local_50,0);
        }
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          pcVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          FUN_00fbe464();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_48;
          local_48 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_c8 = local_28;
        }
        else {
          local_c8 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_c8;
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

