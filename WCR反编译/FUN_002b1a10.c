// FUN_002b1a10 @ 002b1a10

void FUN_002b1a10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  cfstringStruct *local_38;
  undefined1 *local_30 [3];
  undefined8 local_18;
  
  uVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf_eRc;
  puVar4 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0)
  ;
  if (((ulong)puVar4 & 1) != 0) {
    local_a8 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30[0],PTR_s_floatingTabBarExtraButtonPositio_0269e4c8);
    if ((long)local_a8 < 1) {
      local_a8 = (undefined1 *)0x0;
    }
    if ((long)local_a8 < 3) {
      local_b0 = local_a8;
    }
    else {
      local_b0 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    }
    if (local_b0 == (undefined1 *)0x0) {
      local_b8 = &cf_RcE__;
    }
    else {
      local_b8 = &cf_RcE__N;
      if (local_b0 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_b8 = &cf_RcE_S;
      }
    }
    _objc_storeStrong(&local_38,local_b8);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

