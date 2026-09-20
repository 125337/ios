// FUN_004cd664 @ 004cd664

undefined * FUN_004cd664(void)

{
  undefined *puVar1;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = (undefined *)0x0;
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_WCRefineMainFrameTopSearchTapGes_026a40f8);
  if (((ulong)puVar1 & 1) != 0) {
    local_20 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineMainFrameTopSearchTapGes_026a40f8);
  }
  if (((long)local_20 < 0) || (1 < (long)local_20)) {
    local_20 = (undefined *)0x0;
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

