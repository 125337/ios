// FUN_006c0dc0 @ 006c0dc0

void FUN_006c0dc0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    (*DAT_028cc1f8)(local_18,local_20,local_28);
  }
  else {
    uVar4 = local_28;
    FUN_006c129c();
    bVar1 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_18;
      FUN_006c13bc();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    if ((!bVar1) || (uVar4 = local_18, FUN_006c14cc(), (uVar4 & 1) == 0)) {
      (*DAT_028cc1f8)(local_18,local_20,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

