// FUN_00135d00 @ 00135d00

double FUN_00135d00(double param_1)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatToolbarScalePercent_0269f380);
  FUN_00135dc0(&cf_chatToolbarScalePercent);
  _objc_storeStrong(&local_18,0);
  return param_1 / 100.0;
}

