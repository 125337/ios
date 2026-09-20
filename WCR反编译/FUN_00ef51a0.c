// FUN_00ef51a0 @ 00ef51a0

byte FUN_00ef51a0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_58;
  bool local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00eff88c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getContactForReport_026ab9a8);
    local_39 = (uVar2 & 1) == 0;
    if (local_39) {
      local_58 = 0;
    }
    else {
      local_58 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getContactForReport_026ab9a8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_58;
    }
    local_39 = !local_39;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_58;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isChatroom_0269e248);
      local_11 = (byte)uVar2 & 1;
    }
    _objc_storeStrong(&local_30,0);
    if (bVar1) goto LAB_00ef5374;
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeOfString__0269d838,&cf__chatroom);
  local_11 = uVar2 != 0x7fffffffffffffff;
LAB_00ef5374:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

