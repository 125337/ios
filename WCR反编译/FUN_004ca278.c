// FUN_004ca278 @ 004ca278

undefined8 FUN_004ca278(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_WCRefineMainFrameTopSearchPlan2O_026a40e8);
  if (((ulong)puVar1 & 1) == 0) {
    local_18 = 0x403e000000000000;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineMainFrameTopSearchPlan2O_026a40e8);
    local_18 = param_1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

