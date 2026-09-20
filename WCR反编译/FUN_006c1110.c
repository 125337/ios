// FUN_006c1110 @ 006c1110

void FUN_006c1110(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cc208)(local_18,local_20,local_28);
  }
  else {
    uVar3 = local_28;
    FUN_006c129c();
    if (((uVar3 & 1) == 0) || (uVar3 = local_18, FUN_006c2510(), (uVar3 & 1) == 0)) {
      (*DAT_028cc208)(local_18,local_20,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

