// FUN_00f2235c @ 00f2235c

byte FUN_00f2235c(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  bVar1 = true;
  if (uVar2 != 0) {
    lVar3 = DAT_028e2c78;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar4 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,DAT_028e2c78);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = param_1 - DAT_028e2ca8 < 90.0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

