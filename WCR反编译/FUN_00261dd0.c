// FUN_00261dd0 @ 00261dd0

void FUN_00261dd0(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ulong local_38;
  byte local_2e;
  byte local_2d;
  byte local_1d;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_1d = (byte)puVar3;
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
    local_2d = (byte)puVar2;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_2e = (byte)puVar3;
    if ((((local_1d & 1) == 0) && ((local_2d & 1) == 0)) && (((ulong)puVar3 & 1) == 0)) {
      local_1c = 1;
    }
    else {
      uVar4 = local_18;
      FUN_002620fc();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = "WebviewJSEventHandler_saveImage";
      local_38 = uVar4;
      _objc_getClass();
      if ((pcVar5 == (char *)0x0) ||
         (uVar4 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,pcVar5),
         (uVar4 & 1) == 0)) {
        local_1c = 1;
      }
      else {
        cVar1 = (local_1d & 1) != 0;
        if ((bool)cVar1) {
          FUN_00262388(local_18,&cf_mR0Rh_);
        }
        if ((local_2d & 1) != 0) {
          cVar1 = cVar1 + '\x01';
          FUN_00262388(local_18,&cf_mRh_N_);
        }
        if ((local_2e & 1) != 0) {
          FUN_00262388(local_18,&cf__O_Nh_S,cVar1);
        }
        local_1c = 0;
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

