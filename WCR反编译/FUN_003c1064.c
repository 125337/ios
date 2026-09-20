// FUN_003c1064 @ 003c1064

ulong FUN_003c1064(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  FUN_00396798(local_28,&cf_m_uLastTime);
  local_38 = 0;
  do {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if ((long)uVar2 <= (long)local_38) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
      local_18 = uVar1;
LAB_003c11a0:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      return local_18;
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00396798();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (uVar3 <= uVar1) {
      local_18 = local_38;
      goto LAB_003c11a0;
    }
    local_38 = local_38 + 1;
  } while( true );
}

