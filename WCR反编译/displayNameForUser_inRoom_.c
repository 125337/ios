// displayNameForUser:inRoom: @ 010b112c

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageSyncRule::displayNameForUser_inRoom_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_30;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_44 = 1;
    goto LAB_010b154c;
  }
  pcVar1 = local_38;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     ((ulong)pcVar1 & 1) == 0)) {
LAB_010b1400:
    pcVar2 = local_40;
    FUN_010b0ff4();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar2;
    FUN_010b0a38(pcVar2,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar1 = local_88;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar3 = local_80;
      FUN_010b0a38(0,local_80,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      pcVar2 = local_40;
      pcVar1 = local_90;
      if (pcVar3 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_44 = 1;
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_44 = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  else {
    pcVar2 = local_50;
    FUN_010b0ff4();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_m_ChatRoomData;
    local_58 = pcVar2;
    _NSSelectorFromString();
    local_60 = pcVar1;
    if ((local_58 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar1),
       ((ulong)pcVar2 & 1) == 0)) {
LAB_010b13dc:
      local_44 = 0;
    }
    else {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf_getDisplayName_;
      local_68 = pcVar2;
      _NSSelectorFromString();
      local_70 = pcVar1;
      if ((local_68 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar1),
         ((ulong)pcVar2 & 1) == 0)) {
LAB_010b13b8:
        local_44 = 0;
      }
      else {
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_010aaf58();
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar2 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_40),
           pcVar1 = local_78, ((ulong)pcVar2 & 1) != 0)) {
          local_44 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          local_44 = 1;
        }
        _objc_storeStrong(&local_78,0);
        if (local_44 == 0) goto LAB_010b13b8;
      }
      _objc_storeStrong(&local_68,0);
      if (local_44 == 0) goto LAB_010b13dc;
    }
    _objc_storeStrong(&local_58,0);
    if (local_44 == 0) goto LAB_010b1400;
  }
  _objc_storeStrong(&local_50,0);
LAB_010b154c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

