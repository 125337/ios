// FUN_01dc9044 @ 01dc9044

void FUN_01dc9044(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  local_38 = 0;
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_30;
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_38;
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  lVar2 = local_30;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_30;
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  lVar2 = local_38;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_38;
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (((ulong)puVar4 & 1) != 0) {
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    bVar1 = lVar5 != 0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  lVar5 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar5;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    lVar5 = local_30;
    if (lVar2 == 0) {
      lVar5 = local_20;
      FUN_01dc9394(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar5;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar5;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

