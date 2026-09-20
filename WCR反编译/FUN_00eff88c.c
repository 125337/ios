// FUN_00eff88c @ 00eff88c

void FUN_00eff88c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_60;
  bool local_41;
  ulong local_40;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUsername_0269d2b8);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatUsername_0269d2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
       uVar1 = local_28, uVar3 == 0)) {
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_28,0);
    if (local_2c != 0) goto LAB_00effacc;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getContactForReport_026ab9a8);
  local_41 = (uVar1 & 1) == 0;
  if (local_41) {
    local_60 = 0;
  }
  else {
    local_60 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getContactForReport_026ab9a8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  local_41 = !local_41;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  if (local_41) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar1 = local_38;
  FUN_00eee4f4(local_38,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_00effacc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

