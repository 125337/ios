// shouldOverrideBubbleInfoEdgeInsets: @ 00ebc19c

/* Function Stack Size: 0x18 bytes */

bool WCRefineBubbleCut::shouldOverrideBubbleInfoEdgeInsets_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  uint local_54;
  ulong local_40;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_40 = 0xffffffffffffffff;
    local_54 = 0;
    if (local_30 != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8);
      local_54 = (uint)uVar3;
    }
    if ((((local_54 & 1) == 0) ||
        (((local_40 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_type_0269e6f8),
          local_40 != 0xd && (local_40 != 0xe)) ||
         (uVar3 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_position_026ca7d0),
         (uVar3 & 1) == 0)))) ||
       (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_position_026ca7d0),
       uVar3 == 0)) {
      IVar5 = local_20;
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_resolvedAssetNameFromBubbleInfo__026ab4f8,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isChatBubbleAssetName__026a8c90);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar5 & 1) == 0) {
        if ((local_54 & 1) == 0) {
          local_11 = 0;
        }
        else {
          IVar5 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isCuttableBubbleInfoType__026ab500,local_40);
          local_11 = (byte)IVar5 & 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

