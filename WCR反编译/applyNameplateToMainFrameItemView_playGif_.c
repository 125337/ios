// applyNameplateToMainFrameItemView:playGif: @ 010e669c

/* Function Stack Size: 0x1c bytes */

void WCRefineNameplateHelper::applyNameplateToMainFrameItemView_playGif_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  ulong local_118;
  uint local_104;
  ulong local_f8;
  ulong local_e0;
  bool local_a9;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  ulong local_68;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  local_39 = (byte)param_4;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_40 = 1;
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    local_48 = uVar3;
    if (uVar3 == 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      _class_getInstanceVariable();
      local_48 = uVar3;
    }
    local_59 = false;
    bVar1 = local_48 == 0;
    if (bVar1) {
      local_e0 = 0;
    }
    else {
      local_e0 = local_38;
      _object_getIvar(local_38,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_e0;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_e0;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar3;
    if (uVar3 == 0) {
      local_f8 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_f8;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_38;
    _WCRNameplateHostIsSessionPicker();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_38;
      _WCRNameplateHostIsGroupingEntry();
      local_69 = (byte)uVar3;
      local_79 = 0;
      local_104 = 0;
      if ((uVar3 & 1) != 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_104 = (uint)puVar2 ^ 1;
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_104 & 1) == 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isSceneEnabled__026a5d60,0);
        if ((IVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_50);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_removeNameplateFromHostView__026a5d88,local_68);
          local_40 = 1;
        }
        else if (local_50 == 0) {
          local_40 = 1;
        }
        else {
          local_88 = 0;
          local_90 = 0;
          if ((local_69 & 1) == 0) {
            uVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
            _class_getInstanceVariable();
            local_98 = uVar3;
            if (uVar3 == 0) {
              local_118 = 0;
            }
            else {
              local_118 = local_38;
              _object_getIvar(local_38,uVar3);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = local_118;
            }
            local_a9 = uVar3 != 0;
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = local_118;
            if (local_a9) {
              (*(code *)PTR__objc_release_02578630)(local_a8);
            }
            uVar5 = local_a0;
            FUN_010e6d54();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_88;
            local_88 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if (local_a0 != 0) {
              uVar5 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_valueForKey__0269d128,&cf_m_contact);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_90;
              local_90 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
            uVar3 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
            if (uVar3 == 0) {
              uVar5 = local_90;
              FUN_010e6288();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_88;
              local_88 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
            _objc_storeStrong(&local_a0,0);
          }
          else {
            uVar5 = local_38;
            _WCRNameplateUsernameForGroupingItemView();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_88;
            local_88 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_applyNameplateBesideNicknameLabe_026a5d98,local_50,local_68,
                     local_88,local_90,0,local_39 & 1);
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
          local_40 = 0;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_removeNameplateFromHostView__026a5d88,local_68);
        local_40 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_removeNameplateFromHostView__026a5d88,local_68);
      local_40 = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

