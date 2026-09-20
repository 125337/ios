// FUN_01e57eb8 @ 01e57eb8

ulong FUN_01e57eb8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  do {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if (uVar1 <= local_30) {
      local_18 = 0x7fffffffffffffff;
LAB_01e57ff8:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      return local_18;
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar3 & 1) != 0) {
      local_18 = local_30;
      goto LAB_01e57ff8;
    }
    local_30 = local_30 + 1;
  } while( true );
}

