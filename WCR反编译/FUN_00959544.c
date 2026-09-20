// FUN_00959544 @ 00959544

long FUN_00959544(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  local_28 = 0;
  do {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    if ((long)uVar1 <= local_28) {
LAB_00959618:
      _objc_storeStrong(&local_18,0);
      return local_20;
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_009464dc();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      local_20 = local_28;
      goto LAB_00959618;
    }
    local_20 = local_28 + 1;
    local_28 = local_28 + 1;
  } while( true );
}

