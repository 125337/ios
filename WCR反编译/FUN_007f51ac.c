// FUN_007f51ac @ 007f51ac

undefined * FUN_007f51ac(undefined *param_1)

{
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardCustomSectionOffset_026a2578);
  if ((long)local_28 < 0) {
    local_28 = (undefined *)0x0;
  }
  if ((long)local_18 < (long)local_28) {
    local_28 = local_18;
  }
  _objc_storeStrong(&local_20,0);
  return local_28;
}

