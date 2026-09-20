// FUN_0080956c @ 0080956c

void FUN_0080956c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong local_28;
  ulong local_18;
  
  FUN_0080949c();
  DAT_028ccfb1 = (undefined1)param_2;
  FUN_008096e8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = DAT_028ccf70;
  DAT_028ccf70 = param_2;
  (*(code *)PTR__objc_release_02578630)();
  FUN_008098e8();
  DAT_026f46d8 = param_1;
  FUN_00809984();
  DAT_028ccfb2 = (undefined1)uVar2;
  FUN_00809a20();
  _objc_retainAutoreleasedReturnValue();
  local_28 = DAT_028ccf78;
  DAT_028ccf78 = uVar2;
  (*(code *)PTR__objc_release_02578630)();
  FUN_00809c20();
  DAT_026f46e0 = param_1;
  FUN_00809cbc();
  DAT_026f46e8 = (undefined1)local_28;
  FUN_00809d58();
  DAT_026f46f0 = param_1;
  FUN_00809df4();
  DAT_026f46f8 = param_1;
  FUN_00809e90();
  DAT_026f4700 = param_1;
  FUN_00809f2c();
  DAT_028ccfb8 = param_1;
  FUN_00809fc8();
  DAT_028ccfc0 = (undefined1)local_28;
  bVar1 = (local_28 & 1) == 0;
  if (bVar1) {
    local_28 = 0;
  }
  else {
    FUN_0080a064();
    _objc_retainAutoreleasedReturnValue();
    local_18 = local_28;
  }
  _objc_storeStrong(&DAT_028ccf80,local_28);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_18);
  }
  FUN_0080a62c();
  DAT_026f4708 = param_1;
  DAT_028ccfb0 = 1;
  return;
}

