// FUN_007defa0 @ 007defa0

void FUN_007defa0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_90;
  bool local_41;
  undefined *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  long local_18;
  
  lVar1 = DAT_028cccf8;
  if ((DAT_028cccf8 == 0) || ((DAT_026f46cc & 1) != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_38[0] = (undefined *)0x0;
    if ((local_20 != (undefined *)0x0) &&
       (puVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       puVar2 != (undefined *)0x0)) {
      puVar3 = local_20;
      FUN_007df2f8(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38[0];
      local_38[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_38[0] == (undefined *)0x0) ||
       (puVar2 = local_38[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0),
       puVar2 == (undefined *)0x0)) {
      _objc_storeStrong(local_38,*(undefined8 *)PTR____NSDictionary0___02578288);
    }
    local_41 = local_38[0] == (undefined *)0x0;
    if (local_41) {
      local_90 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    else {
      local_90 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_copy_0269d150);
      local_40 = local_90;
    }
    local_41 = !local_41;
    _objc_storeStrong(&DAT_028cccf8,local_90);
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    lVar1 = DAT_028cccf8;
    DAT_026f46cc = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
    _objc_storeStrong(local_38);
    _objc_storeStrong(&local_20,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

