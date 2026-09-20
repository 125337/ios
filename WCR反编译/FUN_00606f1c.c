// FUN_00606f1c @ 00606f1c

void FUN_00606f1c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_48 [3];
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_m_chatRoomContact_0269e730);
  _objc_retainAutoreleasedReturnValue();
  local_30 = 0;
  local_28 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
    if ((param_1 & 1) != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  if (local_30 != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setString__0269ccf8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__JI);
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

