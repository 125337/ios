// _WCRSideloadShareFixResolvedGroupID @ 0150a47c

void _WCRSideloadShareFixResolvedGroupID(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  _WCRSideloadShareFixIsGroupRemapExtensionProcess();
  if (((ulong)param_1 & 1) != 0) {
    _WCRSideloadShareFixMarkerGroupID();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    goto LAB_0150a674;
  }
  _WCRSideloadShareFixApplicationGroupIDs();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    puVar1 = (undefined *)0x0;
    if (puVar2 == (undefined *)0x0) {
LAB_0150a5b4:
      _WCRSideloadShareFixMarkerGroupID();
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
LAB_0150a634:
        local_18 = (undefined *)0x0;
      }
      else {
        puVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsObject__0269cbb8,local_38);
        local_18 = local_38;
        if (((ulong)puVar1 & 1) == 0) goto LAB_0150a634;
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsObject__0269cbb8,local_30);
      puVar2 = local_30;
      if (((ulong)puVar1 & 1) == 0) goto LAB_0150a5b4;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
LAB_0150a674:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

