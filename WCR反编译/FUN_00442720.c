// FUN_00442720 @ 00442720

ulong FUN_00442720(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar2 & 1) != 0) && (uVar3 = local_20, FUN_004504e8(), (uVar3 & 1) != 0)) {
    uVar3 = local_20;
    FUN_00455950();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_50[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      uVar3 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_count_0269cfe0);
      local_18 = uVar3;
    }
    _objc_storeStrong(local_50,0);
    if (bVar1) goto LAB_004428d8;
  }
  uVar3 = local_20;
  (*DAT_028caa40)(local_20,local_28,local_30,local_38);
  local_18 = uVar3;
LAB_004428d8:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

