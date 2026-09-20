// _WCRAvatarScaleFilterModeFromString @ 00939de8

undefined8 _WCRAvatarScaleFilterModeFromString(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00939c78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
      bVar1 = true;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        _WCRAvatarScaleFilterTokenSet();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar3 != 0;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (bVar1) {
        local_18 = 1;
      }
      else {
        local_18 = 0;
      }
    }
    else {
      local_18 = 2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

