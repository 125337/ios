// dateKeyFromCrashFileName: @ 00929404

/* Function Stack Size: 0x18 bytes */

ID WCRefineCrashMonitorViewController::dateKeyFromCrashFileName_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_60;
  undefined4 local_54;
  ulong local_50;
  SEL local_48;
  ID local_40;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  uVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_crash_);
  if (((uVar1 & 1) == 0) ||
     (uVar2 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__log),
     uVar1 = local_50, (uVar2 & 1) == 0)) {
    local_38 = 0;
    local_54 = 1;
  }
  else {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_30 = uVar2 - 10;
    local_28 = 6;
    local_20 = 6;
    local_18 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringWithRange__0269d138,6,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 < 6) {
      local_38 = 0;
    }
    else {
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,6);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
    }
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return local_38;
}

