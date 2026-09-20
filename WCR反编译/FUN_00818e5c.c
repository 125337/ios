// FUN_00818e5c @ 00818e5c

undefined8 FUN_00818e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_30;
  
  puVar1 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_shouldOverrideBubbleInfoEdgeInse_026a8ca8,param_2)
  ;
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028cd158)(param_2,param_3);
    local_30 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_overrideEdgeInsetsForBubbleInfo__026a8cb0,
               param_2);
    local_30 = param_1;
  }
  return local_30;
}

