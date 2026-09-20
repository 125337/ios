// FUN_005618c4 @ 005618c4

byte FUN_005618c4(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined *local_20;
  byte local_11;
  
  puVar3 = &local_38;
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar3,param_4);
  puVar2 = local_30;
  FUN_00566204();
  if (puVar2 == puVar3) {
    FUN_0056db84(0);
    bVar1 = false;
    local_11 = false;
    if (((ulong)puVar3 & 1) != 0) {
      puVar5 = local_20;
      FUN_0056e868();
      local_11 = true;
      if (((ulong)puVar5 & 1) == 0) {
        local_58 = &DAT_028cb448;
        _objc_loadWeakRetained();
        bVar1 = true;
        local_11 = false;
        if (local_58 == local_20) {
          lVar4 = DAT_028cb460;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0);
          local_11 = false;
          if (lVar4 != 0) {
            local_11 = DAT_028cb450 != 0;
          }
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else {
    puVar5 = local_20;
    (*DAT_028cb490)(local_20,local_28,local_30,local_38);
    local_11 = (byte)puVar5;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

