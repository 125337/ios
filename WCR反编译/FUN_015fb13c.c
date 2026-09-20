// FUN_015fb13c @ 015fb13c

void FUN_015fb13c(undefined8 param_1,byte param_2,int *param_3,undefined1 *param_4)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_98 [2];
  char *local_88 [4];
  cfstringStruct *local_68;
  char *local_60;
  char *local_58;
  undefined4 local_4c;
  byte local_45;
  int local_44;
  undefined1 *local_40;
  int *local_38;
  byte local_29;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_44 = 0;
  local_45 = 0;
  lVar1 = local_28;
  local_40 = param_4;
  local_38 = param_3;
  local_29 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_38 != (int *)0x0) {
      *local_38 = 0;
    }
    if (local_40 != (undefined1 *)0x0) {
      *local_40 = 0;
    }
    local_4c = 1;
  }
  else {
    pcVar2 = DAT_028e3c00;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3c00,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if ((pcVar2 == (char *)0x0) && (DAT_028e3c00 == (char *)0x0)) {
      pcVar2 = "MMNewSessionMgr";
      _objc_getClass();
      FUN_015f9a60();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_GetSessionByUserName_;
      local_60 = pcVar2;
      _NSSelectorFromString();
      local_68 = pcVar3;
      if ((local_60 != (char *)0x0) &&
         (pcVar2 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar3),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68,local_28);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_60,0);
    }
    if (local_58 != (char *)0x0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_uUnReadCount)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_88[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_88[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_unsignedIntValue_0269db10);
        local_44 = (int)pcVar2;
      }
      _objc_storeStrong(local_88,0);
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_valueForKey__0269d128,&cf_m_bShowUnReadAsRedDot);
      _objc_retainAutoreleasedReturnValue();
      local_98[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_98[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_boolValue_026ca540);
        local_45 = (byte)pcVar2;
      }
      _objc_storeStrong(local_98,0);
    }
    if ((local_44 == 0) && (DAT_028e3c00 == (char *)0x0)) {
      lVar1 = local_28;
      FUN_01605604();
      local_44 = (int)lVar1;
    }
    if (((local_44 != 0) && ((local_45 & 1) == 0)) && ((local_29 & 1) != 0)) {
      local_45 = 1;
    }
    if (local_38 != (int *)0x0) {
      *local_38 = local_44;
    }
    if (local_40 != (undefined1 *)0x0) {
      *local_40 = (local_45 & 1) != 0 && local_44 != 0;
    }
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

