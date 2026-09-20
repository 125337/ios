// FUN_001ac9f4 @ 001ac9f4

byte FUN_001ac9f4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint local_74;
  long local_50;
  long local_40;
  undefined *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hideContactsSearchBarEnabled_0269fe90);
  if ((((ulong)puVar3 & 1) == 0) &&
     (puVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contactsTopBarSearchEnabled_0269fea0),
     ((ulong)puVar3 & 1) == 0)) {
    bVar2 = false;
    bVar1 = false;
    lVar4 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c8a8c);
    _objc_retainAutoreleasedReturnValue();
    local_74 = 1;
    if (lVar4 == 0) {
      local_40 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028c8a89);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_74 = 1;
      if (local_40 == 0) {
        local_50 = local_20;
        _objc_getAssociatedObject(local_20,&DAT_028c8a88);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        lVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_74 = (uint)lVar5;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if ((local_74 & 1) == 0) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

