// FUN_00f06db0 @ 00f06db0

void FUN_00f06db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *local_b0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_30;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  lVar5 = local_30;
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_b0 = &cf_O;
      }
      else {
        local_b0 = local_38;
      }
      (**(code **)(lVar5 + 0x10))(lVar5,0,local_b0);
    }
    local_44 = 1;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_00f07014;
    local_78 = &DAT_02582438;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_58 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_30;
    local_50 = *(undefined8 *)(param_1 + 0x38);
    local_70 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_openListEnsureParentsWithToken_c_026abb98,lVar5,&local_90);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

