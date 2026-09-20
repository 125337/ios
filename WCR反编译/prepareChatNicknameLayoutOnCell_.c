// prepareChatNicknameLayoutOnCell: @ 010e9c98

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateHelper::prepareChatNicknameLayoutOnCell_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong local_88;
  ulong local_70;
  ulong local_60;
  byte local_55;
  undefined1 local_54;
  byte local_53;
  byte local_52;
  bool local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ID local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_2c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_viewModelOfCell__026ae9d0,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    local_51 = false;
    local_40 = uVar2;
    if (uVar2 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = local_28;
      _object_getIvar(local_28,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_70;
    }
    local_51 = uVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_shouldForceShowChatNicknameForVi_026a5d68,local_38);
    local_52 = (byte)IVar3;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_viewModelIsSender__026ae9d8,local_38);
    local_53 = (byte)IVar3;
    IVar3 = local_38;
    FUN_010e91e8();
    local_54 = (undefined1)IVar3;
    if ((((local_52 & 1) == 0) && ((IVar3 & 1) == 0)) || ((local_53 & 1) == 0)) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_senderNicknameLockedOnView__026ae9e0,local_48);
      local_55 = (byte)IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_unlockSenderNicknameOnView__026ae9e8,local_48);
      uVar2 = local_48;
      if ((local_55 & 1) != 0) {
        puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) == 0) {
          local_88 = 0;
        }
        else {
          local_88 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_88;
        _objc_storeStrong(&local_60,0);
      }
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

