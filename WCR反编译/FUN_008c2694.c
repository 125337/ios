// FUN_008c2694 @ 008c2694

uint FUN_008c2694(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong local_48;
  uint local_3c;
  undefined4 local_38;
  char *local_28;
  ulong local_20;
  uint local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  uVar4 = local_20;
  local_28 = pcVar2;
  if ((long)pcVar2 < 1) {
    pcVar3 = &cf_m_uiVoiceTime;
    _NSSelectorFromString();
    FUN_008b7f4c(uVar4,pcVar3);
    local_3c = (uint)uVar4;
    if (local_3c == 0) {
      uVar4 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028ce016);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_unsignedIntValue_0269db10);
        local_3c = (uint)uVar4;
      }
      _objc_storeStrong(&local_48,0);
    }
    if (local_3c == 0) {
      uVar4 = local_20;
      FUN_008c2c0c();
      local_3c = (uint)uVar4;
    }
    if (60000 < local_3c) {
      local_3c = 60000;
    }
    local_14 = local_3c;
  }
  else {
    if (600 < (long)pcVar2) {
      local_28 = section_00000248.segname;
    }
    local_14 = (int)local_28 * 1000;
  }
  local_38 = 1;
  _objc_storeStrong(&local_20,0);
  return local_14;
}

