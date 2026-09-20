// imageUTIForData: @ 00f33930

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::imageUTIForData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_68;
  bool local_59;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    local_68 = local_30;
    _CGImageSourceCreateWithData(local_30,0);
    local_40 = local_68;
    if (local_68 == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      _CGImageSourceGetType();
      local_59 = local_68 == 0;
      local_48 = local_68;
      if (local_59) {
        local_68 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
        local_58 = local_68;
      }
      local_59 = !local_59;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_68;
      if (local_59) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      _CFRelease(local_40);
      IVar1 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
      local_34 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

