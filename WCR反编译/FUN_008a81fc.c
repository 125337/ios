// FUN_008a81fc @ 008a81fc

void FUN_008a81fc(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_18 + -99999999999;
  if (puVar1 != (undefined *)0x0 && 0x174876e7fe < (long)local_18) {
    puVar1 = (undefined *)0x174876e7ff;
    local_18 = (undefined *)0x174876e7ff;
  }
  FUN_008a89e4(puVar1,local_18);
  return;
}

