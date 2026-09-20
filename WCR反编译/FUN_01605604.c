// FUN_01605604 @ 01605604

undefined4 FUN_01605604(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *local_68;
  char *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  char *local_30;
  uint local_24;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_14 = 0;
    local_24 = 1;
    goto LAB_016058f8;
  }
  pcVar3 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_015f9a60();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_14 = 0;
    local_24 = 1;
  }
  else {
    pcVar4 = &cf_GetUnReadCount_;
    _NSSelectorFromString();
    pcVar3 = local_30;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar4 = &cf_GetSessionByUserName_;
      _NSSelectorFromString();
      pcVar3 = local_30;
      local_58 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_58,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_valueForKey__0269d128,&cf_m_uUnReadCount)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
        bVar1 = ((ulong)pcVar3 & 1) != 0;
        if (bVar1) {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_unsignedIntValue_0269db10);
          local_14 = SUB84(pcVar3,0);
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        if (local_24 != 0) goto LAB_016058e8;
      }
      local_14 = 0;
      local_24 = 1;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38,local_20);
      local_14 = SUB84(pcVar3,0);
      local_24 = 1;
    }
  }
LAB_016058e8:
  _objc_storeStrong(&local_30,0);
LAB_016058f8:
  _objc_storeStrong(&local_20,0);
  return local_14;
}

