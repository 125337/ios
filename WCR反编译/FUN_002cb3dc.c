// FUN_002cb3dc @ 002cb3dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_002cb3dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double local_118;
  double local_110;
  
  dVar2 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  dVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_002adba4(dVar3,0,0x4049000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_110 = dVar2;
  if (param_1 < dVar2) {
    local_110 = param_1;
  }
  local_118 = (dVar2 * dVar3) / 100.0;
  if (local_110 / 2.0 < local_118) {
    local_118 = local_110 / 2.0;
  }
  return local_118;
}

