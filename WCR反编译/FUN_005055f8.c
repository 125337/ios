// FUN_005055f8 @ 005055f8

byte FUN_005055f8(void)

{
  undefined *puVar1;
  undefined1 local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_11 = (byte)puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    FUN_005056c8();
    local_11 = local_11 & 1;
  }
  return local_11;
}

