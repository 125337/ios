// FUN_0161cbc4 @ 0161cbc4

void FUN_0161cbc4(undefined8 param_1,int *param_2,undefined1 *param_3)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_b8;
  char *local_b0 [2];
  cfstringStruct *local_a0;
  char *local_90 [2];
  char *local_80 [4];
  cfstringStruct *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_44;
  byte local_3d;
  int local_3c;
  undefined1 *local_38;
  int *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_3c = 0;
  local_3d = 0;
  lVar1 = local_28;
  local_38 = param_3;
  local_30 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_30 != (int *)0x0) {
      *local_30 = 0;
    }
    if (local_38 != (undefined1 *)0x0) {
      *local_38 = 0;
    }
    local_44 = 1;
  }
  else {
    pcVar2 = "MMNewSessionMgr";
    _objc_getClass();
    FUN_01631148();
    _objc_retainAutoreleasedReturnValue();
    local_58 = (char *)0x0;
    pcVar3 = &cf_GetSessionByUserName_;
    local_50 = pcVar2;
    _NSSelectorFromString();
    local_60 = pcVar3;
    if ((local_50 != (char *)0x0) &&
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_60,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_58 != (char *)0x0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_uUnReadCount)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_80[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_80[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_unsignedIntValue_0269db10);
        local_3c = (int)pcVar2;
      }
      _objc_storeStrong(local_80,0);
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_valueForKey__0269d128,&cf_m_bShowUnReadAsRedDot);
      _objc_retainAutoreleasedReturnValue();
      local_90[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_90[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_boolValue_026ca540);
        local_3d = (byte)pcVar2;
      }
      _objc_storeStrong(local_90,0);
    }
    if (local_3c == 0) {
      pcVar3 = &cf_GetUnReadCount_;
      _NSSelectorFromString();
      local_a0 = pcVar3;
      if ((local_50 != (char *)0x0) &&
         (pcVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_a0,local_28);
        local_3c = (int)pcVar2;
      }
    }
    local_b0[0] = (char *)0x0;
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_01631148();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_b8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((lVar1 != 0) &&
       (pcVar2 = local_b8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_b0[0];
      local_b0[0] = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (((local_3c != 0) && ((local_3d & 1) == 0)) &&
       (pcVar2 = local_b0[0], FUN_0163132c(), ((ulong)pcVar2 & 1) != 0)) {
      local_3d = 1;
    }
    if (local_30 != (int *)0x0) {
      *local_30 = local_3c;
    }
    if (local_38 != (undefined1 *)0x0) {
      *local_38 = (local_3d & 1) != 0 && local_3c != 0;
    }
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(local_b0,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

