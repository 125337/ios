// FUN_00961580 @ 00961580

ulong FUN_00961580(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_40 = 0;
  }
  else {
    local_28 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_18 = local_40;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

