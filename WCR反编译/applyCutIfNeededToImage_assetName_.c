// applyCutIfNeededToImage:assetName: @ 00ebbab0

/* Function Stack Size: 0x20 bytes */

ID WCRefineBubbleCut::applyCutIfNeededToImage_assetName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_30;
  if (DAT_028e29d0 < 1) {
    if ((local_30 == 0) ||
       (IVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_isChatBubbleAssetName__026a8c90,local_38), (IVar2 & 1) == 0)) {
      IVar2 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar2;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar1 = local_20;
      IVar2 = local_30;
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_capInsetsForAssetName__026ab4d0,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_clampedInsets_forImageSize__026ab4d8);
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,local_30,PTR_s_resizableImageWithCapInsets_resi_0269f400,
                   1);
        _objc_retainAutoreleasedReturnValue();
        local_18 = IVar2;
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

