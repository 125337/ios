// FUN_014f7b78 @ 014f7b78

void FUN_014f7b78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_40;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_20 == 0) || (param_3 == 0)) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selfCount_026afd98),
     uVar1 == 0)) {
    lVar4 = 1;
  }
  else {
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    for (local_40 = 0; uVar1 = local_18,
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0), local_40 < uVar1;
        local_40 = local_40 + 1) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selfCount_026afd98);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (uVar3 < uVar1) {
        local_38 = local_40;
        break;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_insertObject_atIndex__0269eac0,local_20,local_38);
    while( true ) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      lVar4 = uVar1 - param_3;
      if (uVar1 < param_3 || lVar4 == 0) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeLastObject_0269e830);
    }
  }
  _objc_storeStrong(lVar4,&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

