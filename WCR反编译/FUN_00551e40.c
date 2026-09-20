// FUN_00551e40 @ 00551e40

void FUN_00551e40(undefined8 param_1)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  if (DAT_028cb430 == (char *)0x0) {
    pcVar2 = "WCDataItem";
    _objc_getClass();
    DAT_028cb430 = pcVar2;
  }
  pcVar2 = DAT_028cb430;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  uVar1 = (uint)uVar3;
  if (((uVar3 & 1) == 0) || (FUN_00551df8(), (uVar1 & 1) == 0)) {
    lVar4 = 1;
    local_28 = 1;
  }
  else {
    FUN_005522d4();
    for (local_30 = 0; lVar4 = local_30 + -2, local_30 < 2; local_30 = local_30 + 1) {
      local_38 = local_30;
      local_40 = 0;
      local_48 = 0;
      uVar3 = local_18;
      FUN_00552444(local_18,local_30,&local_48);
      _objc_storeStrong(&local_40,local_48);
      if (((uVar3 & 1) == 0) ||
         (lVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         lVar4 == 0)) {
        local_28 = 4;
      }
      else {
        uVar3 = *(ulong *)(&DAT_028cb370 + local_30 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_40);
        if ((uVar3 & 1) == 0) {
          uVar3 = *(ulong *)(&DAT_028cb380 + local_30 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_40);
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(&DAT_028cb380 + local_30 * 8),PTR_s_addObject__0269d180,
                       local_40);
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(&DAT_028cb390 + local_30 * 8),PTR_s_addObject__0269d180,
                       local_18);
            FUN_00552798(local_38);
            local_28 = 0;
            goto LAB_005520b8;
          }
        }
        local_28 = 4;
      }
LAB_005520b8:
      _objc_storeStrong(&local_40,0);
    }
    local_28 = 0;
  }
  _objc_storeStrong(lVar4,&local_18,0);
  return;
}

