// FUN_008aa060 @ 008aa060

void FUN_008aa060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_64;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_64 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_008ab75c();
    local_64 = (uint)uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_64 & 1) == 0) {
    (*DAT_028cde40)(param_1,param_2);
  }
  else {
    FUN_008abd94(param_1);
  }
  return;
}

