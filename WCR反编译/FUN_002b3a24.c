// FUN_002b3a24 @ 002b3a24

ulong FUN_002b3a24(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_28 = param_2;
  FUN_002ae1e8();
  _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  local_30 = uVar1;
  do {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (uVar1 <= local_48) {
      local_18 = 0x7fffffffffffffff;
LAB_002b3bb4:
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_20,0);
      return local_18;
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (uVar3 == uVar1) {
      local_18 = local_48;
      goto LAB_002b3bb4;
    }
    local_48 = local_48 + 1;
  } while( true );
}

