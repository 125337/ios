// FUN_015f2038 @ 015f2038

byte FUN_015f2038(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b0;
  ulong local_a0;
  ulong local_88;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_015fab58();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if ((uVar2 == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_015f24d8;
  }
  FUN_01603064();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  FUN_016031f0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_20),
     (uVar2 & 1) == 0)) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_88 = uVar2;
    if (uVar2 == 0) {
      FUN_016036c4();
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    local_51 = uVar2 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_48 == 0) {
LAB_015f23d8:
      uVar2 = local_28;
      FUN_01604198(local_28,local_48);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        FUN_016045ac();
        if ((uVar2 & 1) == 0) {
          FUN_016036c4();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_28;
          local_78 = uVar2;
          FUN_01604198(local_28,uVar2);
          bVar1 = (uVar3 & 1) != 0;
          if (bVar1) {
            FUN_0160440c(local_78);
          }
          local_2c = 1;
          local_11 = bVar1;
          _objc_storeStrong(&local_78,0);
        }
        else {
          FUN_01604b10();
          local_11 = 1;
          local_2c = 1;
        }
      }
      else {
        FUN_0160440c(local_48);
        local_11 = 1;
        local_2c = 1;
      }
    }
    else {
      uVar2 = local_48;
      FUN_01603920();
      if (((uVar2 & 1) == 0) || (uVar2 = local_48, FUN_01603b58(), (uVar2 & 1) == 0)) {
        FUN_01603fbc();
        uVar2 = local_48;
        FUN_01604008();
      }
      else {
        uVar2 = local_48;
        FUN_01603db8();
      }
      FUN_016036c4();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar2;
      if (uVar2 == 0) {
        local_a0 = local_48;
      }
      _objc_storeStrong(&local_48,local_a0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      local_b0 = uVar2;
      if (uVar2 == 0) {
        local_b0 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_b0;
      }
      local_69 = uVar2 == 0;
      FUN_016031f0();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b0;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (uVar2 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_20),
         (uVar2 & 1) == 0)) {
        local_2c = 0;
      }
      else {
        local_11 = 1;
        local_2c = 1;
      }
      _objc_storeStrong(&local_60,0);
      if (local_2c == 0) goto LAB_015f23d8;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_015f24d8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

