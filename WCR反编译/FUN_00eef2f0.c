// FUN_00eef2f0 @ 00eef2f0

ulong FUN_00eef2f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_00eeec64();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_20,0);
  return uVar1 & 0xffffffff;
}

