// FUN_008bdd8c @ 008bdd8c

undefined4 FUN_008bdd8c(undefined8 param_1)

{
  long lVar1;
  long local_78;
  long local_40;
  long local_28;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_008b5ddc(local_20,PTR_s_dataFmt_026a9b10);
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar1;
  if (lVar1 == 0) {
    local_40 = local_20;
    FUN_008ba2e0(local_20,&cf_dataFmt);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_40;
  }
  FUN_008b7d64();
  _objc_retainAutoreleasedReturnValue();
  local_28 = local_78;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeOfString_options__0269d118,&cf_silk,1);
  local_14 = 4;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

