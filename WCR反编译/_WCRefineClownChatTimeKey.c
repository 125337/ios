// _WCRefineClownChatTimeKey @ 00f16558

void _WCRefineClownChatTimeKey(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_58;
  ulong local_50;
  bool local_41;
  ulong local_40;
  ulong local_38;
  double local_30;
  undefined4 local_24;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_createTime_0269f088),
     (uVar2 & 1) == 0)) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_createTime_0269f088);
    uVar2 = local_20;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
    local_41 = false;
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      local_58 = 0;
    }
    else {
      local_58 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_58;
    }
    local_41 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_58;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    uVar2 = local_38;
    FUN_00f16778();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 == 0) || (local_30 <= 0.0)) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_____llu_chat_time);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
    }
    local_24 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

