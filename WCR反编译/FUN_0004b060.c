// FUN_0004b060 @ 0004b060

void FUN_0004b060(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_queue_t pdVar4;
  uint local_2c;
  
  if ((DAT_028c7b79 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = (uint)puVar3;
    local_2c = 1;
    if (((ulong)puVar3 & 1) != 0) {
      FUN_0004bf04();
      local_2c = uVar1 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)();
    if ((((local_2c & 1) == 0) && ((DAT_028c7b78 & 1) != 0)) &&
       (FUN_0004c074(), ((ulong)puVar2 & 1) != 0)) {
      DAT_028c7b7a = 0;
      DAT_028c7b79 = 1;
      pdVar4 = _dispatch_get_global_queue(-0x8000,0);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(pdVar4);
    }
  }
  return;
}

