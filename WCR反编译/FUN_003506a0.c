// FUN_003506a0 @ 003506a0

bool FUN_003506a0(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_0034e7a8();
  bVar1 = false;
  if ((param_1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)puVar3 < 0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return bVar1;
}

