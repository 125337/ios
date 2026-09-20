// FUN_00f7aa60 @ 00f7aa60

byte FUN_00f7aa60(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (((local_28 == &DAT_0000270f) || (local_28 == (undefined *)0xfffffffffffffffe)) ||
     (local_28 + 3 == (undefined *)0x0)) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00f73814(local_28 + 3);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_timeout);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_no_start),
       (uVar1 & 1) == 0)) {
      uVar1 = local_20;
      FUN_00f7d474();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_30;
      FUN_00f73814();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_containsString__0269d0b0,&cf_networkingerror);
      if ((((uVar1 & 1) == 0) &&
          (uVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_Q__O),
          (uVar1 & 1) == 0)) &&
         ((uVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_Q___8_),
          (uVar1 & 1) == 0 &&
          (uVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_network)
          , (uVar1 & 1) == 0)))) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

