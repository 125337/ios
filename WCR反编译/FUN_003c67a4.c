// FUN_003c67a4 @ 003c67a4

void FUN_003c67a4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long local_40;
  long local_30;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca288 == local_18) {
    local_1c = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar6 = local_18;
    if (((ulong)puVar5 & 1) == 0) {
      local_1c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar6;
      _objc_getAssociatedObject(lVar6,&DAT_028ca140);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      bVar3 = false;
      if (lVar6 == 0) {
        local_30 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028ca141);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar3 = false;
        if (local_30 == 0) {
          local_40 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028ca142);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar3 = local_40 == 0;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_30);
      }
      (*(code *)PTR__objc_release_02578630)(lVar6);
      if (!bVar3) {
        FUN_003c6aa4(local_28);
      }
      local_1c = (uint)bVar3;
      _objc_storeStrong(&local_28,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

