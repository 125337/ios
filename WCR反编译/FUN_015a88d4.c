// FUN_015a88d4 @ 015a88d4

void FUN_015a88d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_90;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
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
    if (local_28 == (cfstringStruct *)0x0) {
      local_90 = &cf_Tb1Y_;
    }
    else {
      local_90 = local_28;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_90);
    local_34 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_015a8a9c;
    local_50 = &DAT_02586e08;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_40 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_wcr_mixBackgroundForVoicePath_co_026b0b90,lVar1,&local_68);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

