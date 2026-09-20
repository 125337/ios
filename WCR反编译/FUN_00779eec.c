// FUN_00779eec @ 00779eec

void FUN_00779eec(undefined8 param_1)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  uint local_24;
  undefined *local_20;
  undefined *local_18;
  
  dVar1 = DAT_02323c88;
  local_20 = (undefined *)0x0;
  dVar4 = DAT_02323c88;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
    goto LAB_0077a0e4;
  }
  puVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  FUN_0077a100(puVar3);
  puVar3 = local_30;
  if (dVar4 <= dVar1) {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_38 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithCGColor__0269e058,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      FUN_0077a100(puVar3);
      puVar3 = local_40;
      if (dVar1 < dVar4) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar3;
      }
      local_24 = (uint)(dVar1 < dVar4);
      _objc_storeStrong(&local_40,0);
      if (local_24 != 0) goto LAB_0077a0d4;
    }
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_24 = 1;
  }
LAB_0077a0d4:
  _objc_storeStrong(&local_30,0);
LAB_0077a0e4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

