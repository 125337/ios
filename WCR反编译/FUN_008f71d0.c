// FUN_008f71d0 @ 008f71d0

ulong FUN_008f71d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataUsingEncoding__026a12e8,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_28 = uVar1;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_bytes_026a9630);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  FUN_008f7334(uVar3,uVar1,uVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return uVar3 & 0xffffffff;
}

