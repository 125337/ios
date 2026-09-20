// FUN_000ab4cc @ 000ab4cc

void FUN_000ab4cc(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint local_54;
  
  if (param_3 == 2) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = 0;
    if (((ulong)puVar2 & 1) != 0) {
      local_54 = 0;
      FUN_000b42c8();
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_54 & 1) != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (puVar2 == (undefined *)0x0) {
        FUN_000b4350(param_1,0,&cf_s);
        if ((param_1 & 1) == 0) {
          FUN_000b4a94(&cf_s);
        }
        FUN_000b4d78();
        return;
      }
      uVar3 = param_1;
      FUN_000b4350(param_1,1,&cf_s);
      if ((uVar3 & 1) != 0) {
        FUN_000b4d78();
        return;
      }
      uVar3 = 0;
      FUN_000b4a94();
      if ((uVar3 & 1) != 0) {
        FUN_000b4d78();
        return;
      }
    }
  }
  (*DAT_028c80a0)(param_1,param_2,param_3);
  return;
}

