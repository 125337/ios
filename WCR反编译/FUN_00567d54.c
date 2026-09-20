// FUN_00567d54 @ 00567d54

byte FUN_00567d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_148;
  ulong local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == 0) {
    local_21 = 0;
    local_3c = 1;
    goto LAB_00568218;
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00567410();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    local_21 = 1;
    local_3c = 1;
    goto LAB_00568218;
  }
  if (local_38 == 0) {
    local_21 = 0;
    local_3c = 1;
    goto LAB_00568218;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_locationInView__026ca798,local_38);
  uVar1 = local_38;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_1;
  uStack_58 = param_2;
  FUN_00566f58(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    local_21 = 1;
    local_3c = 1;
    goto LAB_00568218;
  }
  uStack_88 = uStack_58;
  local_90 = local_60;
  uVar1 = local_38;
  uVar3 = local_60;
  uVar4 = uStack_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hitTest_withEvent__026ca670,0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = uVar1;
  FUN_00567410();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar1;
    if (uVar1 == 0) {
      local_a0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_148 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_148;
    if (uVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_98 == 0) {
LAB_005681cc:
      local_21 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_locationInView__026ca798,local_98);
      uVar1 = local_98;
      FUN_00566f58(uVar3,uVar4);
      if ((uVar1 & 1) == 0) {
        uVar2 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,uVar4,local_98,PTR_s_hitTest_withEvent__026ca670,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_78;
        local_78 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_78;
        FUN_00567410();
        if ((uVar1 & 1) == 0) goto LAB_005681cc;
        local_21 = 1;
      }
      else {
        local_21 = 1;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_98,0);
  }
  else {
    local_21 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_78,0);
LAB_00568218:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

