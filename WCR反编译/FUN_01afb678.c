// FUN_01afb678 @ 01afb678

ulong FUN_01afb678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastMsgTime_026be718);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastMsgTime_026be718);
  if (uVar1 == uVar2) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_compare__0269cd10);
    local_18 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastMsgTime_026be718);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastMsgTime_026be718);
    local_18 = 1;
    if (uVar2 < uVar1) {
      local_18 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

