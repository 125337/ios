// FUN_000d6bc0 @ 000d6bc0

/* WARNING: Type propagation algorithm not settling */

void FUN_000d6bc0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_30 [3];
  ulong local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c83a8);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 + -1 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefine_openPluginSearchSetting_0269e958);
    }
    else {
      uVar1 = local_18;
      FUN_000ebecc(puVar3 + -1);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_g_b_u1Y_);
      }
    }
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

