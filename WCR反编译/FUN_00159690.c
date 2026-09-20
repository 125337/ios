// FUN_00159690 @ 00159690

byte FUN_00159690(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong local_d8;
  ulong local_b8;
  ulong local_98;
  long local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_50;
  ulong local_48;
  undefined1 local_39;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_38 = param_2;
  local_30 = param_1;
  (*DAT_028c8840)(param_1,param_2);
  local_39 = (undefined1)param_1;
  if ((param_1 & 1) != 0) {
    local_21 = 1;
    goto LAB_00159ac0;
  }
  FUN_0015ab30();
  uVar1 = local_30;
  if ((param_1 & 1) == 0) {
    local_21 = 0;
    goto LAB_00159ac0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  local_69 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
  if ((uVar1 & 1) == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_b8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  local_81 = 0;
  if (local_50 == 0) {
LAB_00159890:
    local_d8 = 0;
  }
  else {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_chatContact_0269f7a8);
    if ((uVar1 & 1) == 0) goto LAB_00159890;
    local_d8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatContact_0269f7a8);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_d8;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_90 = 0;
  if (local_78 != 0) {
    uVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_98 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        _objc_storeStrong(&local_90,local_98);
      }
      _objc_storeStrong(&local_98,0);
    }
  }
  lVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  local_21 = lVar3 != 0;
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_00159ac0:
  return local_21 & 1;
}

