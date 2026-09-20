// FUN_016b4524 @ 016b4524

void FUN_016b4524(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == (cfstringStruct *)0x0) {
    local_50 = &cf__;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  local_18 = &DAT_028e3eb0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025880b0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if ((DAT_028e3d78 != 0) &&
     (uVar1 = DAT_028e3d78,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3d78,PTR_s_isEqualToString__0269ccc8,local_30),
     (uVar1 & 1) == 0)) {
    FUN_0169a8d8();
  }
  _objc_storeStrong(&DAT_028e3d78,local_30);
  uVar2 = DAT_028e3d70;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3d70,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

