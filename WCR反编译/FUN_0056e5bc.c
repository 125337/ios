// FUN_0056e5bc @ 0056e5bc

void FUN_0056e5bc(byte param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48 [3];
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  local_11 = param_1;
  FUN_0056db84();
  if ((((local_11 & 1) != 0) &&
      (lVar1 = DAT_028cb460,
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb460,PTR_s_length_0269cca0), lVar1 != 0)) &&
     (DAT_028cb450 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIMenuController_026ce770;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIMenuController_026ce770,PTR_s_sharedMenuController_026a0478);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_menuItems_026a51e0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      if ((puVar2 == (undefined *)0x0) ||
         (puVar2 = local_30, FUN_0056dec0(), ((ulong)puVar2 & 1) != 0)) {
        local_24 = 1;
      }
      else {
        puVar2 = local_30;
        FUN_0056e274();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_20;
        local_48[0] = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isMenuVisible_026a51f0);
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_setMenuVisible_animated__026a0088,0,0);
        }
        DAT_028cb54b = 1;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setMenuItems__026a0080,local_48[0]);
        DAT_028cb54b = 0;
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_setMenuVisible_animated__026a0088,1,0);
        }
        _objc_storeStrong(local_48,0);
        local_24 = 0;
      }
      _objc_storeStrong(&local_30,0);
    }
    _objc_storeStrong(&local_20,0);
  }
  return;
}

