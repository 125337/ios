// FUN_00fb78a0 @ 00fb78a0

void FUN_00fb78a0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_150;
  cfstringStruct *local_80 [2];
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60 [4];
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &cf___;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRealChatUsr_0269d190);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_m_nsRealChatUsr);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00fbe464();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        local_60[0] = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_60[0];
        puVar4 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60[0],PTR_s_rangeOfString__0269d838,&cf__chatroom);
        local_70 = pcVar1;
        local_68 = puVar4;
        if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
          _objc_storeStrong(0,&local_40,local_60[0]);
        }
        _objc_storeStrong(local_60,0);
      }
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_80[0] = &cf___;
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsContent_0269d0a0);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_80[0];
        local_80[0] = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar1 = local_80[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_rangeOfString__0269d838,&cf__);
      if ((pcVar1 != (cfstringStruct *)0x7fffffffffffffff) && (pcVar1 != (cfstringStruct *)0x0)) {
        pcVar2 = local_80[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_substringToIndex__0269d6c0,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00fbe464();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_40;
        local_40 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(local_80,0);
    }
    if (local_40 == (cfstringStruct *)0x0) {
      local_150 = &cf___;
    }
    else {
      local_150 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_150;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

