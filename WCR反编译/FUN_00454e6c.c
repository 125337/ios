// FUN_00454e6c @ 00454e6c

void FUN_00454e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_38;
  undefined8 local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    uVar2 = local_18;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_sectionInfoForPid__026a3d70);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_sectionInfoForPid__026a3d70,_WCRLocalEmoticonPid);
      _objc_retainAutoreleasedReturnValue();
      local_28 = (uint)(uVar2 == 0);
      local_38 = uVar2;
      _objc_storeStrong(&local_38,0);
      if (local_28 != 0) goto LAB_00455034;
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_preLoadEmoticonListForPid__026a3d78
              );
    if ((uVar2 & 1) == 0) {
      local_28 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_preLoadEmoticonListForPid__026a3d78,_WCRLocalEmoticonPid);
      local_28 = 0;
    }
  }
LAB_00455034:
  _objc_storeStrong(&local_18,0);
  return;
}

