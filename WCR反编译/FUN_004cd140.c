// FUN_004cd140 @ 004cd140

undefined * FUN_004cd140(void)

{
  undefined *puVar1;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_abTestMainFrameOfficialTopSearch_026a40f0);
  if (((ulong)puVar1 & 1) == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_abTestMainFrameOfficialTopSearch_026a40f0);
    FUN_004cd1f4();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

