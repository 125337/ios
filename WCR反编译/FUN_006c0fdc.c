// FUN_006c0fdc @ 006c0fdc

void FUN_006c0fdc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cc200)(param_1,param_2);
  }
  else {
    uVar3 = param_1;
    FUN_006c13bc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar3 == 0) {
      (*DAT_028cc200)(param_1,param_2);
    }
    else {
      uVar3 = param_1;
      FUN_006c14cc();
      if ((uVar3 & 1) == 0) {
        (*DAT_028cc200)(param_1,param_2);
      }
    }
  }
  return;
}

