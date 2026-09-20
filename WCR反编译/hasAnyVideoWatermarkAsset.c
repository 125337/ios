// hasAnyVideoWatermarkAsset @ 017f530c

/* Function Stack Size: 0x10 bytes */

bool WCRefineAssistFunctionViewController::hasAnyVideoWatermarkAsset(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasVideoWatermarkAssetForIndex__026b5728,1);
  local_24 = 1;
  if ((IVar1 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasVideoWatermarkAssetForIndex__026b5728,2);
    local_24 = 1;
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_hasVideoWatermarkAssetForIndex__026b5728,3);
      local_24 = (uint)param_1;
    }
  }
  return local_24 & 1;
}

