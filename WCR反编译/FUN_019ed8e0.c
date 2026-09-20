// FUN_019ed8e0 @ 019ed8e0

void FUN_019ed8e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_a0;
  uint local_78;
  bool local_71;
  undefined *local_70;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_41 = 0;
  local_78 = 1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = (uint)puVar2 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_78 & 1) == 0) {
    local_a0 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
    _CTFontManagerCreateFontDescriptorsFromURL();
    local_50 = local_a0;
    if (local_a0 == (undefined *)0x0) {
      local_28 = (undefined *)0x0;
      local_48 = 1;
    }
    else {
      local_18 = local_a0;
      _objc_autoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (local_a0 == (undefined *)0x0) {
        local_28 = (undefined *)0x0;
      }
      else {
        _CTFontCreateWithFontDescriptor(local_38,local_a0,0);
        local_71 = local_a0 == (undefined *)0x0;
        if (local_71) {
          local_a0 = (undefined *)0x0;
        }
        else {
          local_20 = local_a0;
          _objc_autoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_a0;
        }
        local_71 = !local_71;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_a0;
        if (local_71) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
      }
      local_48 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    local_28 = (undefined *)0x0;
    local_48 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

