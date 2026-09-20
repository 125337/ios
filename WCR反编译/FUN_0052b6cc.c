// FUN_0052b6cc @ 0052b6cc

byte FUN_0052b6cc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_0052ba8c;
  }
  uVar1 = local_20;
  FUN_0052bac4();
  if ((uVar1 & 1) != 0) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_0052ba8c;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
LAB_0052b8c8:
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_11 = 1;
      local_30 = 1;
    }
    else {
      puVar2 = PTR_WCRefineMomentsMonitor_026ce718;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_20);
      local_11 = (byte)puVar2 & 1;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_20);
    if (((ulong)puVar2 & 1) == 0) goto LAB_0052b8c8;
    local_11 = 0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_0052ba8c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

