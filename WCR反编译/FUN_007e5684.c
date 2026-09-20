// FUN_007e5684 @ 007e5684

void FUN_007e5684(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  char *local_90;
  char *local_88;
  cfstringStruct *local_80;
  int local_74;
  char *local_70;
  char *local_68;
  cfstringStruct *local_60;
  char *local_58;
  char *local_50 [3];
  char *local_38;
  char *local_30;
  char *local_28;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_getService__0269d170;
  pcVar3 = "CContactMgr";
  local_50[0] = pcVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar1,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_getContactByName_;
  local_58 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = local_58;
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_performSelector_withObject__026ca7c0,local_60,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (char *)0x0) {
LAB_007e5af4:
      local_74 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsRemark);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0), pcVar3 = local_70,
         pcVar2 == (char *)0x0)) {
        pcVar4 = &cf_getContactDisplayName;
        _NSSelectorFromString(0);
        pcVar2 = local_68;
        local_80 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_performSelector__026ca7b8,local_80);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar2;
          if ((pcVar2 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0), pcVar3 = local_88
             , pcVar2 == (char *)0x0)) {
            uVar5 = 0;
            local_74 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar3;
            uVar5 = 1;
            local_74 = 1;
          }
          _objc_storeStrong(uVar5,&local_88,0);
          if (local_74 != 0) goto LAB_007e5ac8;
        }
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,&cf_m_nsNickName)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar2;
        if ((pcVar2 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0), pcVar3 = local_90,
           pcVar2 == (char *)0x0)) {
          uVar5 = 0;
          local_74 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
          uVar5 = 1;
          local_74 = 1;
        }
        _objc_storeStrong(uVar5,&local_90,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_74 = 1;
      }
LAB_007e5ac8:
      _objc_storeStrong(&local_70,0);
      if (local_74 == 0) goto LAB_007e5af4;
    }
    _objc_storeStrong(&local_68,0);
    if (local_74 != 0) goto LAB_007e5b50;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar2;
  local_74 = 1;
LAB_007e5b50:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

