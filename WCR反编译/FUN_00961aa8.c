// FUN_00961aa8 @ 00961aa8

undefined8 FUN_00961aa8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  double local_a8;
  double local_90;
  bool local_69;
  ulong local_68;
  bool local_51;
  ulong local_50;
  ulong local_30;
  ulong local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  FUN_009464dc();
  uVar2 = local_30;
  FUN_009464dc();
  if (((byte)uVar1 & 1) == ((byte)uVar2 & 1)) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_time)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = (uVar2 & 1) == 0;
    if (local_51) {
      local_90 = 0.0;
    }
    else {
      local_50 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = param_1;
    }
    local_51 = !local_51;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30;
    local_a8 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_time)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = (uVar2 & 1) == 0;
    if (local_69) {
      local_a8 = 0.0;
    }
    else {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_69 = !local_69;
    if (local_69) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_90 == local_a8) {
      local_18 = 0;
    }
    else if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      local_18 = 1;
      if (local_a8 < local_90) {
        local_18 = 0xffffffffffffffff;
      }
    }
    else {
      local_18 = 1;
      if (local_90 < local_a8) {
        local_18 = 0xffffffffffffffff;
      }
    }
  }
  else {
    local_18 = 1;
    if ((uVar1 & 1) != 0) {
      local_18 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

