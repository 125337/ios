// FUN_00116ae8 @ 00116ae8

void FUN_00116ae8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_001172d8(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      FUN_00117c9c(0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        FUN_00117ed8(0);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          pcVar2 = local_28;
          FUN_001181e8(0,local_28,local_20);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          local_18 = local_20;
          pcVar1 = local_58;
          if (pcVar2 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = pcVar1;
          }
          local_38 = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          FUN_001178a8(local_28,local_20,local_50);
          pcVar1 = local_50;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          local_38 = 1;
        }
        _objc_storeStrong(&local_50,0);
      }
      else {
        FUN_001178a8(local_28,local_20,local_48);
        pcVar1 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_38 = 1;
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      FUN_001178a8(local_28,local_20,local_40);
      pcVar1 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

