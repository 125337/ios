// FUN_0004b2ec @ 0004b2ec

void FUN_0004b2ec(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  uint local_2c;
  
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
    DAT_028c7c20 = 0;
    dVar4 = _dispatch_time(0,8000000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar4,puVar2,&PTR___NSConcreteGlobalBlock_02579770);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

