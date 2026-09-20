// FUN_003f5668 @ 003f5668

byte FUN_003f5668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte local_15c;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  long local_50 [3];
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_30;
  local_38 = lVar2;
  FUN_003f1f7c();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = lVar3;
  if ((local_38 == 0) || (lVar3 == 0)) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    FUN_003f8e9c(local_30,local_38);
    lVar2 = local_50[0];
    local_68 = param_1;
    uStack_60 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_bounds_026ca548);
    local_a8 = param_2;
    local_a0 = param_1;
    local_98 = param_3;
    local_90 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_38);
    uVar1 = (uint)lVar2;
    uStack_b8 = uStack_60;
    local_c0 = local_68;
    local_88 = param_2;
    local_80 = param_1;
    local_78 = param_3;
    local_70 = param_4;
    _CGRectContainsPoint(param_2,param_1,param_3,param_4,local_68,uStack_60);
    if ((uVar1 & 1) == 0) {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,uStack_60,local_38,PTR_s_hitTest_withEvent__026ca670,0);
      _objc_retainAutoreleasedReturnValue();
      local_15c = 0;
      local_c8 = lVar2;
      if (lVar2 != 0) {
        FUN_003f8fe0(lVar2,local_38);
        local_15c = (byte)lVar2 ^ 1;
      }
      local_21 = local_15c & 1;
      local_54 = 1;
      _objc_storeStrong(&local_c8,0);
    }
    else {
      local_21 = 0;
      local_54 = 1;
    }
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

