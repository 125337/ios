// FUN_005e7c68 @ 005e7c68

void FUN_005e7c68(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_98;
  ulong local_90;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68 [2];
  byte local_55;
  undefined4 local_54;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_3;
  local_28 = param_2;
  _WCRForcedChatNicknameEnabled();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_layoutForcedChatNicknameOnCell__026a5d80,
               local_28);
  }
  puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_isSceneEnabled__026a5d60,1);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_005e9378(0x4000000000000000);
    uVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
               uVar2);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_50[0] = 0;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50[0];
      local_50[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_50[0] == 0) {
      uVar3 = local_28;
      FUN_005e93cc(local_28,"viewModel");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50[0];
      local_50[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_isHeadPart_0269f0b0);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isHeadPart_0269f0b0),
       (uVar2 & 1) != 0)) {
      local_55 = 0;
      if (local_50[0] != 0) {
        uVar2 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_respondsToSelector__026ca818,
                   PTR_s_isShowChatRoomDisplayName_026a5d30);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50[0],PTR_s_valueForKey__0269d128,&cf_m_isShowChatRoomDisplayName);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_55 = (byte)uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        else {
          uVar2 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50[0],PTR_s_isShowChatRoomDisplayName_026a5d30);
          local_55 = (byte)uVar2;
        }
      }
      uVar2 = local_28;
      FUN_005e93cc(local_28,"m_chatRoomNameLabel");
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = uVar2;
      if ((uVar2 == 0) &&
         (uVar2 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getNameLabel_026a5d90),
         (uVar2 & 1) != 0)) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getNameLabel_026a5d90);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(local_68,local_70);
        }
        _objc_storeStrong(&local_70,0);
      }
      if (((((local_55 & 1) == 0) || (local_68[0] == 0)) ||
          (uVar2 = local_68[0],
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68[0],PTR_s_isDescendantOfView__026ca760,local_28), (uVar2 & 1) == 0)) ||
         ((uVar2 = local_68[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_isHidden_026ca768),
          (uVar2 & 1) != 0 ||
          ((*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_alpha_026ca4d8),
          param_1 < DAT_02323d38)))) {
        FUN_005e9378(0x4000000000000000);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
                   local_28);
        local_54 = 1;
      }
      else {
        local_78 = 0;
        local_80 = 0;
        if (local_50[0] != 0) {
          uVar3 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50[0],PTR_s_valueForKey__0269d128,&cf_m_contact);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_78;
          local_78 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_78 == 0) {
            uVar2 = local_50[0];
            _object_getClass();
            _class_getInstanceVariable(uVar2,"m_contact");
            local_90 = uVar2;
            if (uVar2 != 0) {
              uVar3 = local_50[0];
              _object_getIvar(local_50[0],uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_78;
              local_78 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
          }
          uVar3 = local_78;
          FUN_005e94ec();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_80;
          local_80 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,
                   PTR_s_applyNameplateBesideNicknameLabe_026a5d98,local_68[0],uVar2,local_80,
                   local_78,1,1);
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        local_54 = 0;
      }
      _objc_storeStrong(local_68,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
                 local_28);
      local_54 = 1;
    }
    _objc_storeStrong(local_50,0);
  }
  return;
}

