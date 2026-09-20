// FUN_00946c88 @ 00946c88

void FUN_00946c88(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_68;
  bool local_41;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_file);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_message);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_e_g;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_41 = (uVar2 & 1) == 0;
        if (local_41) {
          local_68 = 0;
        }
        else {
          local_40 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
          _objc_retainAutoreleasedReturnValue();
          local_68 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        local_41 = !local_41;
        if (local_41) {
          (*(code *)PTR__objc_release_02578630)(local_40);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_68 == 0x22) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__;
        }
        else if (local_68 == 0x2b) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__;
        }
        else if (local_68 == 0x2f) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_h_;
        }
        else if (local_68 == 0x31) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_eN;
        }
        else if (local_68 == 0x3e) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_mo_;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_eN;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_VGr;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

