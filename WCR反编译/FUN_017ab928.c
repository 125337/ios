// FUN_017ab928 @ 017ab928

undefined8 FUN_017ab928(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar5 = local_18;
  pcVar1 = DAT_028e4168;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(uVar5,param_2,param_3,param_4);
    uVar2 = local_18;
    local_18 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(uVar5,param_2,param_3,1);
    uVar2 = local_18;
    local_18 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar5 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return uVar5;
}

