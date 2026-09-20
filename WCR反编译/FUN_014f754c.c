// FUN_014f754c @ 014f754c

void FUN_014f754c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_40;
  ulong local_38;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_20 == 0) ||
     (lVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_latestCreateTime_026aff00),
     (int)lVar3 == 0)) {
    lVar3 = 1;
  }
  else {
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    for (local_40 = 0; uVar1 = local_18,
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0), local_40 < uVar1;
        local_40 = local_40 + 1) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_latestCreateTime_026aff00);
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uint)uVar2 < (uint)lVar3) {
        local_38 = local_40;
        break;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_insertObject_atIndex__0269eac0,local_20,local_38);
    while( true ) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      lVar3 = uVar1 - param_3;
      if (uVar1 < param_3 || lVar3 == 0) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeLastObject_0269e830);
    }
  }
  _objc_storeStrong(lVar3,&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

