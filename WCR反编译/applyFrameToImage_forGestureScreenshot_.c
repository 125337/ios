// applyFrameToImage:forGestureScreenshot: @ 00712254

/* Function Stack Size: 0x1c bytes */

ID WCRefineScreenshotFrameProcessor::applyFrameToImage_forGestureScreenshot_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined *local_40;
  undefined4 local_38;
  byte local_31;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  if (local_30 == 0) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotFrameEnabled_026a1ef0);
    IVar2 = local_30;
    local_4d = SUB81(puVar1,0);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar2;
      local_38 = 1;
    }
    else {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotFrameGestureEnabled_026a1ef8);
      IVar2 = local_30;
      local_4e = SUB81(puVar1,0);
      if (((local_31 & 1) == 0) || (((ulong)puVar1 & 1) != 0)) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sharedProcessor_026a6d98);
        _objc_retainAutoreleasedReturnValue();
        local_58 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isDoubleModeTemplate_026a7658);
        if ((IVar2 & 1) == 0) {
          IVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_applyFrameToImage__026a76b8,local_30)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar2;
        }
        else {
          IVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_applyFrameToImageConsideringDoub_026a7748,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar2;
        }
        local_38 = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar2;
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

