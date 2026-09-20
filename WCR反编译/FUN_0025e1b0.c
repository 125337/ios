// FUN_0025e1b0 @ 0025e1b0

uint FUN_0025e1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48 [3];
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_00261a28();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = 0;
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_wrapMsg);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_48[0];
  local_48[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  FUN_00261b40(local_48[0]);
  uVar3 = local_18;
  (*DAT_028c9400)(local_18,local_20,local_28);
  FUN_00261b40(local_30);
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (uint)uVar3 & 1;
}

