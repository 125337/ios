// FUN_009cca68 @ 009cca68

void FUN_009cca68(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_deepseek);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_kimi);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_openrouter)
      ;
      if ((uVar1 & 1) == 0) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__key;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__users_me_balance;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__user_balance;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

