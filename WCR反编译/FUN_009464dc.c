// FUN_009464dc @ 009464dc

byte FUN_009464dc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = 0;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_28 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (byte)uVar3;
  }
  local_11 = local_30 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

