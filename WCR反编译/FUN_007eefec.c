// FUN_007eefec @ 007eefec

void FUN_007eefec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_authorizationStatus_026a1770);
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_007ef21c;
    local_58 = &DAT_02580240;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_50 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    local_48 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_requestAuthorizationWithOptions__026a8550,7,&local_70);
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_authorizationStatus_026a1770);
    if (lVar1 == 2) {
      FUN_007ef3d0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

