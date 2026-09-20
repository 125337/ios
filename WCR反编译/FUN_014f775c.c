// FUN_014f775c @ 014f775c

void FUN_014f775c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = param_3;
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_overnightNights_026aff08), uVar1 == 0)) {
    lVar3 = 1;
    local_2c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    local_38 = uVar1;
    for (local_40 = 0; uVar1 = local_40, uVar2 = local_18,
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_40 = local_40 + 1) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_overnightNights_026aff08);
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_overnightNights_026aff08);
      if (uVar1 < uVar2) {
LAB_014f7938:
        local_38 = local_40;
        lVar3 = 2;
        local_2c = 2;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_overnightNights_026aff08);
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_overnightNights_026aff08);
        lVar3 = uVar1 - uVar2;
        if (lVar3 == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_overnightCount_026aff10);
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_overnightCount_026aff10);
          lVar3 = uVar1 - uVar2;
          if (uVar2 <= uVar1 && lVar3 != 0) goto LAB_014f7938;
        }
        local_2c = 0;
      }
      _objc_storeStrong(lVar3,&local_48,0);
      if (local_2c != 0) break;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_insertObject_atIndex__0269eac0,local_20,local_38);
    while( true ) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      lVar3 = uVar1 - local_28;
      if (uVar1 < local_28 || lVar3 == 0) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeLastObject_0269e830);
    }
    local_2c = 0;
  }
  _objc_storeStrong(lVar3,&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

