// shortId: @ 01bb08c0

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageRepositoryViewController::shortId_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  uVar2 = local_30;
  if (uVar1 < 0x17) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,0x12);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

