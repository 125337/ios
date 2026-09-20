// FUN_0023beec @ 0023beec

byte FUN_0023beec(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  FUN_0023bfbc();
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

