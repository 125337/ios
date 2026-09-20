// FUN_0073a058 @ 0073a058

bool FUN_0073a058(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_11;
  
  _WCRSideloadShareFixIsGroupRemapExtensionProcess();
  if ((param_1 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (bool)((byte)puVar3 & 1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    FUN_0073a94c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = uVar1 != 0;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return local_11;
}

