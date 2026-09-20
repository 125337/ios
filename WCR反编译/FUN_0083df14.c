// FUN_0083df14 @ 0083df14

undefined8
FUN_0083df14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_shouldOverrideBubbleInfoEdgeInse_026a8ca8,local_38
            );
  if (((ulong)puVar1 & 1) == 0) {
    if (DAT_028cd268 == (code *)0x0) {
      uStack_28 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
      local_30 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
      uStack_18 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
      local_20 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
    }
    else {
      (*DAT_028cd268)(local_38,param_6);
      local_30 = param_1;
      uStack_28 = param_2;
      local_20 = param_3;
      uStack_18 = param_4;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_overrideEdgeInsetsForBubbleInfo__026a8cb0,
               local_38);
    local_30 = param_1;
    uStack_28 = param_2;
    local_20 = param_3;
    uStack_18 = param_4;
  }
  _objc_storeStrong(&local_38,0);
  return local_30;
}

