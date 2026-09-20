// FUN_0052e9a4 @ 0052e9a4

cfstringStruct * FUN_0052e9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  uint local_50;
  uint local_3c;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_28;
  local_38 = param_1;
  FUN_0052e30c();
  local_3c = (uint)pcVar1;
  pcVar1 = local_30;
  FUN_0052e30c();
  local_50 = (uint)pcVar1;
  if (local_3c < local_50) {
    local_18 = (cfstringStruct *)0xffffffffffffffff;
    local_54 = 1;
  }
  else if (local_3c < local_50 || local_3c - local_50 == 0) {
    pcVar1 = local_28;
    FUN_0052b368(local_3c - local_50);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    FUN_0052b368();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_c0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_compare__0269cd10,local_68);
    local_54 = 1;
    local_18 = pcVar1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_18 = (cfstringStruct *)0x1;
    local_54 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

