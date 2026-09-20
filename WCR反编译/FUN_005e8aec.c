// FUN_005e8aec @ 005e8aec

void FUN_005e8aec(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_160;
  ulong local_c0;
  ulong local_90 [4];
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_isSceneEnabled__026a5d60,3);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_005e9378(0x4000000000000000);
    local_38 = 0;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_nickLabel_026a5da8);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nickLabel_026a5da8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar2;
    if (uVar2 == 0) {
      local_c0 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_removeNameplateFromHostView__026a5d88,local_c0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_50[0] = 0;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_nickLabel_026a5da8);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nickLabel_026a5da8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(local_50,local_58);
      }
      _objc_storeStrong(&local_58,0);
    }
    if (local_50[0] == 0) {
      uVar3 = local_28;
      FUN_005e93cc(local_28,"m_nickLabel");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50[0];
      local_50[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_60 = 0;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_dataItem_026a4670);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_dataItem_026a4670);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_60 == 0) {
      uVar3 = local_28;
      FUN_005e93cc(local_28,"m_dataItem");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_68 = 0;
    local_70 = 0;
    if (local_60 != 0) {
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_68;
      local_68 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_68 == 0) {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_m_contact);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_68;
        local_68 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar3 = local_68;
      FUN_005e94ec();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_70;
      local_70 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_username);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_70;
        local_70 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    uVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_160 = uVar2;
    if (uVar2 == 0) {
      local_160 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90[0] = local_160;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_applyNameplateBesideNicknameLabe_026a5d98,
               local_50[0],local_90[0],local_70,local_68,3,1);
    _objc_storeStrong(local_90);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(local_50,0);
  }
  return;
}

