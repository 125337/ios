// FUN_00134e1c @ 00134e1c

double FUN_00134e1c(double param_1)

{
  undefined *puVar1;
  double dVar2;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatToolbarHeight_0269f368);
  FUN_00135dc0(&cf_chatToolbarHeight);
  dVar2 = param_1;
  FUN_00135d00();
  _objc_storeStrong(&local_18,0);
  return (double)(long)(param_1 * dVar2 * 10.0) / 10.0;
}

