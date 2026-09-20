// FUN_008bd290 @ 008bd290

void FUN_008bd290(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long local_48 [3];
  ulong local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = lVar3;
  for (local_30 = 0; local_28 != 0 && local_30 < 5; local_30 = local_30 + 1) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsObject__0269cbb8,local_28);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_28);
    }
    lVar3 = local_28;
    FUN_008b5ddc(local_28,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar3;
    if ((lVar3 == 0) || (lVar3 - local_28 == 0)) {
      bVar1 = true;
    }
    else {
      _objc_storeStrong(lVar3 - local_28,&local_28,lVar3);
      bVar1 = false;
    }
    _objc_storeStrong(local_48,0);
    if (bVar1) break;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

