// FUN_00276a20 @ 00276a20

void FUN_00276a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *local_a8;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  cfstringStruct *local_48 [3];
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar1 = local_20;
  if (lVar2 == 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_a8 = &cf_N_1Y_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = local_a8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    FUN_00276c80(0,local_48[0],0);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,local_48[0]);
    local_4c = 1;
    _objc_storeStrong(local_48,0);
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00277308;
    local_60 = &DAT_0257b208;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar4;
    FUN_00276dc8(lVar1,&local_78);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

