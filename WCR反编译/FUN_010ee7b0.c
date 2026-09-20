// FUN_010ee7b0 @ 010ee7b0

byte FUN_010ee7b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return local_11;
}

