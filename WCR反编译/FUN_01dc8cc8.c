// FUN_01dc8cc8 @ 01dc8cc8

void FUN_01dc8cc8(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_68;
  ulong local_38;
  undefined *local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_21 = param_2;
  if (local_20 == 0) {
    local_18 = 0;
    local_28 = 1;
  }
  else {
    if ((param_2 & 1) == 0) {
      local_68 = PTR_s_m_contact_026a0b68;
    }
    else {
      local_68 = PTR_s_m_chatRoomContact_0269e730;
    }
    local_30 = local_68;
    local_38 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_68);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_38 == 0) {
      pcVar1 = &cf_m_chatRoomContact;
      if ((local_21 & 1) == 0) {
        pcVar1 = &cf_m_contact;
      }
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_28 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

