// _WCRefineParseWalletBalanceNumber @ 00f124ec

long _WCRefineParseWalletBalanceNumber(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  double local_38;
  uint local_2c;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00f12258();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__);
    if ((uVar2 & 1) != 0) {
      local_38 = 0.0;
      puVar3 = PTR__OBJC_CLASS___NSScanner_026ce368;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_scanDouble__026abd28,&local_38);
      bVar1 = ((ulong)puVar3 & 1) != 0;
      if (bVar1) {
        local_18 = (long)(local_38 * 100.0);
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(&local_40,0);
      if (local_2c != 0) goto LAB_00f126a4;
    }
    puVar3 = PTR__OBJC_CLASS___NSScanner_026ce368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_scanUnsignedLongLong__026abd30,&local_50);
    if (((ulong)puVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = local_50;
    }
    local_2c = 1;
    _objc_storeStrong(&local_48,0);
  }
LAB_00f126a4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

