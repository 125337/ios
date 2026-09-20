// FUN_0198d3d8 @ 0198d3d8

void FUN_0198d3d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar2 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

