// FUN_015c4660 @ 015c4660

uint FUN_015c4660(double param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  uint local_44;
  long local_40;
  uint local_34;
  long local_30;
  undefined4 local_28;
  uint local_24;
  long local_20;
  uint local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_24 = param_3;
  if ((local_20 == 0) || (param_3 == 0)) {
    local_14 = 0;
    local_28 = 1;
    goto LAB_015c4824;
  }
  lVar1 = local_20;
  FUN_015c33ec();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  local_30 = lVar1;
  if (lVar1 == 0) {
LAB_015c477c:
    lVar1 = local_20;
    _objc_getAssociatedObject(puVar2,local_20,&DAT_028e3b2c);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    if (lVar1 == 0) {
      local_14 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_unsignedIntValue_0269db10);
      local_44 = (uint)lVar1;
      if (local_24 < local_44) {
        local_44 = local_24;
      }
      local_14 = local_44;
    }
    local_28 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_lastProgress_026b0d78);
    puVar2 = &UNK_02323000;
    if (param_1 <= DAT_02323ca8) goto LAB_015c477c;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastProgress_026b0d78);
    dVar3 = (double)NEON_ucvtf((ulong)local_24);
    local_34 = (uint)(long)(param_1 * dVar3);
    if (local_24 < local_34) {
      local_34 = local_24;
    }
    if (local_34 == 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_015c477c;
    }
    local_14 = local_34;
    local_28 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_015c4824:
  _objc_storeStrong(&local_20,0);
  return local_14;
}

