// FUN_00400c3c @ 00400c3c

bool FUN_00400c3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_14;
  
  local_14 = DAT_026e0358;
  if (DAT_026e0358 < 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_003fe214(puVar2);
    FUN_00400b64();
    local_14 = (int)puVar2;
  }
  return local_14 == 1;
}

