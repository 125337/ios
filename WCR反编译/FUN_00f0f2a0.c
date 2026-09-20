// FUN_00f0f2a0 @ 00f0f2a0

void FUN_00f0f2a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_30 == 0) && ((local_20 == 0xcf || (local_20 == 200)))) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_parseWebDAVBackupItems__026abc98,local_28);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)PTR____NSArray0___02578280;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_describeHTTPError_status_body__026abba0,local_30,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

