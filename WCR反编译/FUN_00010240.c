// FUN_00010240 @ 00010240

void FUN_00010240(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_d0;
  ulong local_50;
  ulong local_40;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsToUsr_0269d090);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (uVar3 & 1) == 0;
      local_d0 = local_20;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_d0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsToUsr_0269d090);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_d0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_d0;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsToUsr_0269d090);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

