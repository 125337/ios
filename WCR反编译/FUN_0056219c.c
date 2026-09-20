// FUN_0056219c @ 0056219c

byte FUN_0056219c(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_58;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined *local_20;
  byte local_11;
  
  puVar4 = &local_38;
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar4,param_4);
  puVar2 = local_30;
  FUN_00566204();
  if (puVar2 == puVar4) {
    FUN_0056db84(0);
    bVar1 = false;
    bVar3 = false;
    if (((ulong)puVar4 & 1) != 0) {
      local_58 = &DAT_028cb448;
      _objc_loadWeakRetained();
      bVar1 = true;
      bVar3 = false;
      if (local_58 == local_20) {
        lVar5 = DAT_028cb460;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0);
        bVar3 = false;
        if (lVar5 != 0) {
          bVar3 = DAT_028cb450 != 0;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else {
    puVar6 = local_20;
    (*DAT_028cb4a0)(local_20,local_28,local_30,local_38);
    bVar3 = (byte)puVar6;
  }
  local_11 = bVar3 & 1;
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

