// FUN_0069e8dc @ 0069e8dc

byte FUN_0069e8dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  ulong uVar6;
  ulong local_40;
  cfstringStruct *local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = local_20;
      FUN_0069c4b4();
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        FUN_0069ebb4();
        if ((uVar3 & 1) == 0) {
          uVar3 = local_20;
          FUN_0069c020(local_20,&cf_cellConfig);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = &cf_clickTarget;
          local_30 = uVar3;
          _NSSelectorFromString();
          uVar3 = local_30;
          local_38 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4);
          if ((uVar3 & 1) == 0) {
            local_11 = 0;
            local_24 = 1;
          }
          else {
            uVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = "MoreViewController";
            local_40 = uVar3;
            _objc_getClass();
            if ((pcVar5 == (char *)0x0) ||
               (uVar3 = local_40,
               (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,pcVar5),
               (uVar3 & 1) == 0)) {
              local_11 = 0;
            }
            else {
              uVar3 = local_20;
              FUN_0069c608();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar3;
              FUN_0069c980();
              local_11 = (byte)uVar6 & 1;
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
            local_24 = 1;
            _objc_storeStrong(&local_40,0);
          }
          _objc_storeStrong(&local_30,0);
        }
        else {
          local_11 = 1;
          local_24 = 1;
        }
      }
      else {
        local_11 = 0;
        local_24 = 1;
      }
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

