// FUN_0088f3dc @ 0088f3dc

byte FUN_0088f3dc(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_54;
  undefined8 local_40;
  undefined8 local_30;
  
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = false;
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_54 = 1;
  if (((ulong)puVar6 & 1) == 0) {
    local_30 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    puVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar3 = (uint)puVar6;
    local_54 = 1;
    if (((ulong)puVar6 & 1) == 0) {
      FUN_0089b9b4();
      uVar4 = 1;
      local_54 = 1;
      if ((uVar3 & 1) == 0) {
        FUN_0089bb90();
        local_54 = 1;
        if ((uVar4 & 1) == 0) {
          local_40 = PTR__OBJC_CLASS___NSProcessInfo_026ce4d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSProcessInfo_026ce4d0,PTR_s_processInfo_026a1a38);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          puVar6 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_54 = (byte)puVar6;
        }
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  return local_54 & 1;
}

