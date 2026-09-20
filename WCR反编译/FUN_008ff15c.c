// FUN_008ff15c @ 008ff15c

void FUN_008ff15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long local_50;
  long local_48;
  uint local_40;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  FUN_008fadac(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_eNmo_1Y_);
    local_40 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (puVar4 + -1 == (undefined *)0x0) {
      FUN_008fb744(local_30,local_18);
      local_40 = 1;
    }
    else {
      lVar2 = local_18;
      FUN_008e5898(puVar4 + -1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar2;
      FUN_008fb12c();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      FUN_008fafdc();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      bVar1 = local_50 != 0;
      if (bVar1) {
        FUN_008fb5a8(local_30,local_50);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRJ_YS1Y_Rbc_Nu
                  );
      }
      local_40 = (uint)!bVar1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

