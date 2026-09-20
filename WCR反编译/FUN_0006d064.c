// FUN_0006d064 @ 0006d064

byte FUN_0006d064(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,ulong *param_6)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar1 = local_30;
  local_38 = param_6;
  FUN_00071900();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (local_38 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_38 = uVar1;
  }
  if ((local_40 == 0) || (local_30 == 0)) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_m_rightButton_0269dec0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_rightButton_0269dec0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_58;
      local_58 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_m_rightLabel_0269dec8);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_rightLabel_0269dec8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_60;
      local_60 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_m_rightViewPrefixIcon_0269ded0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_rightViewPrefixIcon_0269ded0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_68;
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_30;
    FUN_00071b68(local_30,local_58);
    if ((((uVar1 & 1) == 0) && (uVar1 = local_30, FUN_00071b68(local_30,local_60), (uVar1 & 1) == 0)
        ) && (uVar2 = local_30, FUN_00071b68(local_30,local_68), uVar1 = local_30, (uVar2 & 1) == 0)
       ) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_40);
      dVar3 = param_4;
      uVar4 = param_3;
      uVar5 = param_2;
      dVar6 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      _CGRectGetWidth(dVar3,uVar4,uVar5,dVar6);
      if ((dVar3 <= 0.0) ||
         (_CGRectGetMidX(param_1,param_2,param_3,param_4), param_1 <= dVar3 * DAT_02323c98)) {
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
    local_50 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

