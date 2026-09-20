// FUN_003bb180 @ 003bb180

byte FUN_003bb180(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  cfstringStruct *local_230;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_170;
  cfstringStruct *local_140;
  ulong local_108;
  byte local_c9;
  ulong local_70;
  char *local_68;
  byte local_59;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  cfstringStruct *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_59 = 0;
  local_108 = uVar2;
  if (uVar2 == 0) {
    local_108 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_108;
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_108;
  }
  local_59 = uVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_108;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  pcVar3 = "CContactMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_68 = pcVar3;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  local_70 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (((uVar4 == 0) || (local_68 == (char *)0x0)) || (local_70 == 0)) {
    local_21 = 0;
  }
  else {
    bVar1 = false;
    pcVar5 = &
             cf_startModifyContactUserName_remark_isChangeRemark_arrPhone_isChangePhone_contactDesc_isChangecontactDesc_callbackBlock_
    ;
    _NSSelectorFromString();
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar5);
    if (((ulong)pcVar3 & 1) != 0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_140 = &cf___;
      }
      else {
        local_140 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar5,local_40,local_140,1,0,0,0,0);
      bVar1 = true;
    }
    if ((!bVar1) &&
       (pcVar3 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68,PTR_s_respondsToSelector__026ca818,
                  PTR_s_startModifyContactUserName_remar_026a2ec8), ((ulong)pcVar3 & 1) != 0)) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_170 = &cf___;
      }
      else {
        local_170 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_startModifyContactUserName_remar_026a2ec8,local_40,local_170);
      bVar1 = true;
    }
    if (!bVar1) {
      pcVar3 = "CContactOPLog";
      _objc_getClass();
      pcVar5 = &
               cf_start_ModifyContactUserName_remark_isChangeRemark_arrPhone_isChangePhone_contactDesc_isChangecontactDesc_callbackBlock_
      ;
      _NSSelectorFromString();
      if ((pcVar3 != (char *)0x0) &&
         (pcVar6 = pcVar3,
         (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar5),
         ((ulong)pcVar6 & 1) != 0)) {
        if (local_38 == (cfstringStruct *)0x0) {
          local_1a0 = &cf___;
        }
        else {
          local_1a0 = local_38;
        }
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar5,local_40,local_1a0,1,0,0,0,0);
        bVar1 = true;
      }
    }
    pcVar5 = &cf_setRemarkWithoutEmojiChange_;
    _NSSelectorFromString();
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar5);
    if ((uVar2 & 1) != 0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_1c8 = &cf___;
      }
      else {
        local_1c8 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar5,local_1c8);
    }
    local_c9 = 0;
    pcVar5 = &cf_setContact_remark_isLocal_;
    _NSSelectorFromString();
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar5);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setContact_remark__026a2ed0);
      if (((ulong)pcVar3 & 1) != 0) {
        if (local_38 == (cfstringStruct *)0x0) {
          local_230 = &cf___;
        }
        else {
          local_230 = local_38;
        }
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setContact_remark__026a2ed0,local_70,local_230);
        local_c9 = (byte)pcVar3;
      }
    }
    else {
      if (local_38 == (cfstringStruct *)0x0) {
        local_1f8 = &cf___;
      }
      else {
        local_1f8 = local_38;
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar5,local_70,local_1f8,bVar1);
      local_c9 = (byte)pcVar3;
    }
    local_21 = 1;
    if (!bVar1) {
      local_21 = local_c9;
    }
    local_21 = local_21 & 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

