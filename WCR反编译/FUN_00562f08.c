// FUN_00562f08 @ 00562f08

void FUN_00562f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  undefined1 local_3d;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  local_29 = (byte)puVar2;
  FUN_0056db84();
  local_49 = 0;
  lVar3 = DAT_028cb460;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0);
  bVar1 = false;
  if ((lVar3 != 0) && (bVar1 = false, DAT_028cb450 != 0)) {
    puVar4 = &DAT_028cb448;
    _objc_loadWeakRetained();
    local_49 = 1;
    bVar1 = puVar4 != (undefined *)0x0;
    local_48 = puVar4;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  local_3d = bVar1;
  if ((((DAT_028cb54b & 1) == 0) && ((local_29 & 1) != 0)) && (bVar1)) {
    uVar5 = local_28;
    FUN_0056e274();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar5;
    (*DAT_028cb4d0)(local_18,local_20,uVar5);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  else {
    (*DAT_028cb4d0)(local_18,local_20,local_28);
    local_50 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

