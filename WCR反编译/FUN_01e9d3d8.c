// FUN_01e9d3d8 @ 01e9d3d8

void FUN_01e9d3d8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_26;
  byte local_25;
  undefined4 local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_null;
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,PTR_s_isValidJSONObject__026ac5b0,
               local_20);
    local_25 = (byte)puVar1;
    uVar2 = local_20;
    FUN_01e9d658();
    local_26 = (byte)uVar2;
    if (((local_25 & 1) == 0) && ((uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
    else {
      local_30 = 2;
      if ((local_25 & 1) == 0) {
        local_30 = 6;
      }
      local_38 = 0;
      local_48 = 0;
      puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_dataWithJSONObject_options_error_026a64a8,local_20,local_30,&local_48);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_38,local_48);
      local_40 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        pcVar3 = &cf_null;
        if ((local_26 & 1) == 0) {
          pcVar3 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      else {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_88 = &cf_null;
          if ((local_26 & 1) == 0) {
            local_88 = &cf___;
          }
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_88;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_24 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

