// FUN_00435640 @ 00435640

void FUN_00435640(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_30;
  FUN_00438174();
  if ((uVar1 & 1) == 0) {
    puVar2 = local_20;
    (*DAT_028ca928)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

