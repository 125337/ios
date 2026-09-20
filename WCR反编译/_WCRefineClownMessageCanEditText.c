// _WCRefineClownMessageCanEditText @ 00f15824

byte _WCRefineClownMessageCanEditText(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsTextMsg_026abd38);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsTextMsg_026abd38);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_00f15a20;
      }
    }
    uVar1 = local_20;
    FUN_00f17624();
    if ((int)uVar1 == 1) {
      local_11 = 1;
    }
    else if ((int)uVar1 == 0x31) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_20);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_referQuotedDisplayTextFromMessag_026abd40,
                   local_20);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = puVar3 != (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
LAB_00f15a20:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

