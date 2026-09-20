// FUN_005e8530 @ 005e8530

void FUN_005e8530(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_f8;
  ulong local_98;
  ulong local_78;
  ulong local_70 [2];
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028cb898)(param_1,param_2);
  puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_isSceneEnabled__026a5d60,2);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_005e9378(0x4000000000000000);
    uVar2 = local_28;
    FUN_005e93cc(local_28,"m_nickNameLabel");
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar2;
    if (uVar2 == 0) {
      local_98 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_removeNameplateFromHostView__026a5d88,local_98);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_38,0);
  }
  else {
    uVar2 = local_28;
    FUN_005e93cc(local_28,"m_nickNameLabel");
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar2;
    if ((uVar2 == 0) &&
       (uVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_nickNameLabel_026a5da0),
       (uVar2 & 1) != 0)) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nickNameLabel_026a5da0);
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
    uVar2 = local_28;
    FUN_005e93cc(local_28,"m_contact");
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    if (uVar2 == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_60;
    FUN_005e94ec();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50[0];
    local_70[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar3;
    if (uVar3 == 0) {
      local_f8 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_f8;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_applyNameplateBesideNicknameLabe_026a5d98,
               local_50[0],local_78,local_70[0],local_60,2,1);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(local_70,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(local_50,0);
  }
  return;
}

