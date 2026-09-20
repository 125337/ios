// FUN_003e6960 @ 003e6960

byte FUN_003e6960(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_003e6c8c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    FUN_003e3ed8();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_framework);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_bundle),
         (uVar1 & 1) == 0)) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_dylib);
        if ((uVar1 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_libswift);
          if ((uVar1 & 1) == 0) {
            local_11 = 1;
          }
          else {
            local_11 = 0;
          }
        }
      }
      else {
        local_11 = 0;
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

