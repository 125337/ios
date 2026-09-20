// FUN_00771368 @ 00771368

void FUN_00771368(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  int local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gw_u7b;
    local_30 = 1;
    goto LAB_00771784;
  }
  pcVar3 = "MMServiceCenter";
  _objc_getClass();
  local_38 = (cfstringStruct *)pcVar3;
  if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gw_u7b;
    local_30 = 1;
    goto LAB_00771784;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_getService__0269d170;
  local_40 = (cfstringStruct *)pcVar3;
  if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gw_u7b;
    local_30 = 1;
  }
  else {
    pcVar4 = "CContactMgr";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_performSelector_withObject__026ca7c0,puVar1,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_48 = (cfstringStruct *)pcVar3;
    if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__gw_u7b;
      local_30 = 1;
    }
    else {
      pcVar2 = &cf_getContactByName_;
      _NSSelectorFromString();
      pcVar5 = local_48;
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
LAB_007716e8:
          local_30 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsNickName)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar2;
          if ((pcVar2 == (cfstringStruct *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0), pcVar5 = local_60
             , pcVar2 == (cfstringStruct *)0x0)) {
            uVar6 = 0;
            local_30 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = pcVar5;
            uVar6 = 1;
            local_30 = 1;
          }
          _objc_storeStrong(uVar6,&local_60,0);
          if (local_30 == 0) goto LAB_007716e8;
        }
        _objc_storeStrong(&local_58,0);
        if (local_30 != 0) goto LAB_00771744;
      }
      pcVar2 = local_20;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_30 = 1;
    }
LAB_00771744:
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_00771784:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

