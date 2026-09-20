// FUN_0056dc20 @ 0056dc20

void FUN_0056dc20(ulong param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_50 [3];
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  byte local_19;
  undefined *local_18;
  
  FUN_0056db84();
  local_19 = 0;
  bVar1 = true;
  if ((param_1 & 1) != 0) {
    lVar2 = DAT_028cb460;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0);
    bVar1 = true;
    if ((lVar2 != 0) && (bVar1 = true, DAT_028cb450 != 0)) {
      puVar3 = &DAT_028cb448;
      _objc_loadWeakRetained();
      local_19 = 1;
      bVar1 = puVar3 == (undefined *)0x0;
      local_18 = puVar3;
    }
  }
  if ((local_19 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_18);
  }
  if (!bVar1) {
    puVar3 = PTR__OBJC_CLASS___UIMenuController_026ce770;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIMenuController_026ce770,PTR_s_sharedMenuController_026a0478);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_menuItems_026a51e0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
      if ((puVar3 == (undefined *)0x0) ||
         (puVar3 = local_38, FUN_0056dec0(), ((ulong)puVar3 & 1) != 0)) {
        local_2c = 1;
      }
      else {
        puVar3 = local_38;
        FUN_0056e274();
        _objc_retainAutoreleasedReturnValue();
        DAT_028cb54b = 1;
        DAT_028cb54c = 1;
        local_50[0] = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMenuItems__026a0080,puVar3);
        DAT_028cb54b = 0;
        _objc_storeStrong(local_50,0);
        local_2c = 0;
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

