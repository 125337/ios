// FUN_01717cc0 @ 01717cc0

void FUN_01717cc0(undefined *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined *local_50;
  undefined *local_48 [3];
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_0171bcf0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,param_1);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_80 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    else {
      local_80 = local_48[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    bVar1 = true;
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  if (!bVar1) {
    local_18 = (undefined *)0x0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

