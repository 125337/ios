// applyRemark:toContact: @ 0112c8e8

/* Function Stack Size: 0x20 bytes */

bool WCRefineQuickRemarkEditor::applyRemark_toContact_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_1c8;
  cfstringStruct *local_190;
  cfstringStruct *local_160;
  cfstringStruct *local_138;
  cfstringStruct *local_108;
  byte local_b9;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_canEditRemarkForContact__026af258,local_48);
  if ((IVar2 & 1) == 0) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    uVar3 = local_48;
    FUN_0112bf98(local_48,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      uVar4 = local_48;
      FUN_0112bf98(local_48,&cf_m_nsUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_58;
      local_58 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    pcVar5 = "MMServiceCenter";
    _objc_getClass();
    pcVar6 = "CContactMgr";
    local_60 = pcVar5;
    _objc_getClass();
    local_70 = (char *)0x0;
    local_68 = pcVar6;
    if ((local_60 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
      pcVar5 = local_60;
      FUN_0112c4ec(local_60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar5;
      if ((pcVar5 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar5 & 1) != 0)) {
        pcVar6 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getService__0269d170,local_68);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_70;
        local_70 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_78,0);
    }
    if (local_70 == (char *)0x0) {
      local_21 = 0;
    }
    else {
      bVar1 = false;
      pcVar7 = &
               cf_startModifyContactUserName_remark_isChangeRemark_arrPhone_isChangePhone_contactDesc_isChangecontactDesc_callbackBlock_
      ;
      _NSSelectorFromString();
      pcVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar7);
      if (((ulong)pcVar5 & 1) != 0) {
        if (local_40 == (cfstringStruct *)0x0) {
          local_108 = &::cf___;
        }
        else {
          local_108 = local_40;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar7,local_58,local_108,1,0,0,0,0);
        bVar1 = true;
      }
      if ((!bVar1) &&
         (pcVar5 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_70,PTR_s_respondsToSelector__026ca818,
                    PTR_s_startModifyContactUserName_remar_026a2ec8), ((ulong)pcVar5 & 1) != 0)) {
        if (local_40 == (cfstringStruct *)0x0) {
          local_138 = &::cf___;
        }
        else {
          local_138 = local_40;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_startModifyContactUserName_remar_026a2ec8,local_58,local_138);
        bVar1 = true;
      }
      pcVar7 = &cf_setRemarkWithoutEmojiChange_;
      _NSSelectorFromString();
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar7);
      if ((uVar3 & 1) != 0) {
        if (local_40 == (cfstringStruct *)0x0) {
          local_160 = &::cf___;
        }
        else {
          local_160 = local_40;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar7,local_160);
      }
      local_b9 = 0;
      pcVar7 = &cf_setContact_remark_isLocal_;
      _NSSelectorFromString();
      pcVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar7);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setContact_remark__026a2ed0);
        if (((ulong)pcVar5 & 1) != 0) {
          if (local_40 == (cfstringStruct *)0x0) {
            local_1c8 = &::cf___;
          }
          else {
            local_1c8 = local_40;
          }
          pcVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_setContact_remark__026a2ed0,local_48,local_1c8);
          local_b9 = (byte)pcVar5;
        }
      }
      else {
        if (local_40 == (cfstringStruct *)0x0) {
          local_190 = &::cf___;
        }
        else {
          local_190 = local_40;
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar7,local_48,local_190,bVar1);
        local_b9 = (byte)pcVar5;
      }
      local_21 = 1;
      if (!bVar1) {
        local_21 = local_b9;
      }
      local_21 = local_21 & 1;
    }
    local_4c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

