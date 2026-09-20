// FUN_014e8810 @ 014e8810

void FUN_014e8810(undefined8 param_1,undefined8 param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_90;
  ulong local_80;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_30;
  byte local_29;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_29 = param_4;
  local_28 = param_3;
  if ((local_20 == 0) || (param_3 == 0)) {
    lVar3 = 1;
    local_30 = 1;
  }
  else {
    local_80 = local_20;
    if ((param_4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_totalCount_026a3130);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visitCount_026afed8);
    }
    local_38 = local_80;
    if (local_80 == 0) {
      lVar3 = 1;
      local_30 = 1;
    }
    else {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      local_40 = uVar1;
      for (local_48 = 0; uVar1 = local_48, uVar2 = local_18,
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0), uVar1 < uVar2;
          local_48 = local_48 + 1) {
        local_90 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_90;
        if ((local_29 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_totalCount_026a3130);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_visitCount_026afed8);
        }
        lVar3 = local_38 - local_90;
        if (local_38 < local_90 || lVar3 == 0) {
          local_30 = 0;
        }
        else {
          local_40 = local_48;
          lVar3 = 2;
          local_30 = 2;
        }
        _objc_storeStrong(lVar3,&local_50,0);
        if (local_30 != 0) break;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_insertObject_atIndex__0269eac0,local_20,local_40);
      while( true ) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
        lVar3 = uVar1 - local_28;
        if (uVar1 < local_28 || lVar3 == 0) break;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeLastObject_0269e830);
      }
      local_30 = 0;
    }
  }
  _objc_storeStrong(lVar3,&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

