// FUN_005717f4 @ 005717f4

void FUN_005717f4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_74;
  long local_50;
  uint local_48;
  byte local_41;
  undefined *local_40;
  undefined1 local_35;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_18;
  FUN_00571b7c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_20;
  local_28 = lVar3;
  FUN_00564a94();
  uVar2 = (uint)uVar4;
  if ((uVar4 & 1) == 0) {
    lVar3 = local_28;
    FUN_00571d94();
    uVar2 = (uint)lVar3;
  }
  FUN_0056db84();
  local_35 = (undefined1)uVar2;
  local_41 = 0;
  local_74 = 1;
  if ((uVar2 & 1) != 0) {
    puVar5 = &DAT_028cb448;
    _objc_loadWeakRetained();
    local_41 = 1;
    local_74 = 1;
    local_40 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      lVar3 = DAT_028cb460;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0);
      local_74 = 1;
      if ((lVar3 != 0) && (local_74 = 1, DAT_028cb450 != 0)) {
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        local_74 = 1;
        if (lVar3 != 0) {
          lVar3 = local_28;
          FUN_0056dec0();
          local_74 = (uint)lVar3;
        }
      }
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  lVar3 = local_28;
  bVar1 = (local_74 & 1) == 0;
  if (bVar1) {
    puVar5 = &DAT_028cb448;
    _objc_loadWeakRetained();
    FUN_005720f4();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    DAT_028cb559 = 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMenuItems__026a0080,local_50);
    DAT_028cb559 = 0;
    _objc_setAssociatedObject(local_18,&DAT_028cb558,local_50,1);
    _objc_storeStrong(&local_50,0);
  }
  local_48 = (uint)!bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

