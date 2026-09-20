// FUN_0010a2c0 @ 0010a2c0

void FUN_0010a2c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_40 [3];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  FUN_00108c2c(local_18,&cf_cellConfig);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  FUN_00108c2c(uVar2,&cf_leftConfig);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_setTitleColor__0269ee18;
  local_40[0] = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setTitleColor__0269ee18);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar1,local_20);
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

