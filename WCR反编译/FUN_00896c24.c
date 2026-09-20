// FUN_00896c24 @ 00896c24

undefined * FUN_00896c24(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  (*DAT_028cdbd8)(param_1,param_2);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  bVar1 = (byte)puVar3;
  puVar3 = (undefined *)((ulong)puVar2 & 0xffffffff);
  local_28 = param_1;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    bVar1 = (byte)puVar2;
    local_28 = param_1;
    if (0 < (long)puVar3) {
      local_28 = puVar3;
    }
  }
  FUN_008a265c(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_008a2670();
  if (((((ulong)puVar2 & 1) != 0) && ((bVar1 & 1) == 0)) && ((long)local_28 < (long)puVar3)) {
    local_28 = puVar3;
  }
  return local_28;
}

