// FUN_005714e8 @ 005714e8

void FUN_005714e8(undefined8 param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  uint local_6c;
  long local_50;
  uint local_48;
  byte local_41;
  undefined *local_40;
  long local_38;
  byte local_2d;
  long *local_20;
  long local_18;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  FUN_00564f08();
  _objc_retainAutoreleasedReturnValue();
  local_20 = plVar2;
  FUN_00564a94();
  local_2d = (byte)plVar2;
  FUN_0056db84();
  lVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_menuItems_026a51e0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_6c = 1;
  local_38 = lVar3;
  if ((local_2d & 1) != 0) {
    puVar4 = &DAT_028cb448;
    _objc_loadWeakRetained();
    local_41 = 1;
    local_6c = 1;
    local_40 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      lVar3 = DAT_028cb460;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0);
      local_6c = 1;
      if ((lVar3 != 0) && (local_6c = 1, DAT_028cb450 != 0)) {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
        local_6c = 1;
        if (lVar3 != 0) {
          lVar3 = local_38;
          FUN_0056dec0();
          local_6c = (uint)lVar3;
        }
      }
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  bVar1 = (local_6c & 1) == 0;
  if (bVar1) {
    lVar3 = local_38;
    FUN_0056e274();
    _objc_retainAutoreleasedReturnValue();
    DAT_028cb54b = 1;
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMenuItems__026a0080,lVar3);
    DAT_028cb54b = 0;
    _objc_storeStrong(&local_50,0);
  }
  local_48 = (uint)!bVar1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

