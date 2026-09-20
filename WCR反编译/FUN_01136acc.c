// FUN_01136acc @ 01136acc

ulong FUN_01136acc(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_addedAt);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
  if ((uVar1 & 1) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_longLongValue_0269d5e0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_28;
}

