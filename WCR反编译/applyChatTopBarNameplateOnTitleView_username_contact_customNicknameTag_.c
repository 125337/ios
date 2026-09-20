// applyChatTopBarNameplateOnTitleView:username:contact:customNicknameTag: @ 010df908

/* Function Stack Size: 0x30 bytes */

void WCRefineNameplateHelper::
     applyChatTopBarNameplateOnTitleView_username_contact_customNicknameTag_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID local_c8;
  ID local_78;
  undefined1 local_69;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  long_long local_40;
  undefined8 local_38;
  undefined8 local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar5 = local_28;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((IVar5 & 1) == 0) {
    local_44 = 1;
  }
  else {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_chatTopBarHostForTitleView__026ae8b0,local_28);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_28;
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_58 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSceneEnabled__026a5d60,4);
    if ((IVar5 & 1) == 0) {
      if (local_58 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_58);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_removeNameplateFromHostView__026a5d88,local_28);
      if (local_50 != local_28) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeNameplateFromHostView__026a5d88,local_50);
      }
      local_44 = 1;
    }
    else {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_nicknameLabelIsVisible__026ae8b8,local_58);
      if ((IVar5 & 1) == 0) {
        if (local_58 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_58);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeNameplateFromHostView__026a5d88,local_28);
        if (local_50 != local_28) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_removeNameplateFromHostView__026a5d88,local_50);
        }
        local_44 = 1;
      }
      else {
        IVar5 = local_28;
        _objc_getAssociatedObject(local_28,DAT_0280e1b8);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 0;
        uVar2 = local_50 != local_28;
        bVar3 = false;
        local_60 = IVar5;
        if ((bool)uVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = IVar5 == local_28;
          local_69 = uVar2;
          local_68 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar5);
          uVar2 = local_69;
        }
        local_69 = uVar2;
        if (bVar3) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_removeNameplateFromHostView__026a5d88,local_28);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_applyNameplateBesideNicknameLabe_026a5d98,local_58,local_50,
                   local_30,local_38,4,1);
        if (local_50 != local_28) {
          IVar6 = local_50;
          _objc_getAssociatedObject(local_50,DAT_0280e1b8);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_28;
          uVar1 = DAT_0280e1b8;
          local_78 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          if (IVar6 == local_50) {
            local_c8 = local_78;
          }
          else {
            local_c8 = 0;
          }
          _objc_setAssociatedObject(IVar5,uVar1,local_c8,1);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_60,0);
        local_44 = 0;
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

