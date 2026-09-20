// FUN_01dd3a3c @ 01dd3a3c

void FUN_01dd3a3c(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  byte local_48;
  int local_44;
  long local_40;
  long local_38;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = param_1 + 0x20;
  local_38 = param_1;
  local_29 = param_4;
  _objc_loadWeakRetained();
  local_40 = lVar3;
  if ((lVar3 == 0) ||
     (lVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 = local_20, lVar3 = local_40, lVar4 == 0)) {
    local_44 = 1;
  }
  else {
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_01dd3c2c;
    local_68 = &DAT_025898e8;
    local_48 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_28;
    local_60 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_40;
    local_58 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_80);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

