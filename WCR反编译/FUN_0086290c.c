// FUN_0086290c @ 0086290c

void FUN_0086290c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
  local_28 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_28 != 0) {
    FUN_00862b44(local_28);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_00853ba8(local_28);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
  _objc_storeStrong(&local_28,0);
  return;
}

