// FUN_003d96b8 @ 003d96b8

void FUN_003d96b8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_21 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else if ((local_21 & 1) == 0) {
    FUN_003ddbe0(local_18);
    local_28 = 1;
  }
  else {
    local_30 = 0;
    local_31 = 0;
    uVar2 = local_20;
    FUN_003d857c(local_20,&local_30,&local_31);
    if ((uVar2 & 1) == 0) {
      local_30 = 0;
      local_31 = 0;
    }
    FUN_003ddccc(local_18,local_30,local_31 & 1);
    uVar2 = local_18;
    FUN_003612b8(local_18,&cf_m_nameLabel);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if (uVar2 == 0) {
      uVar3 = local_18;
      FUN_003b3da8(local_18,"m_nameLabel");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_18;
    FUN_003612b8(local_18,&cf_m_messageLabel);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if (uVar2 == 0) {
      uVar3 = local_18;
      FUN_003b3da8(local_18,"m_messageLabel");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_18;
    FUN_003612b8(local_18,&cf_m_timeLabel);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (uVar2 == 0) {
      uVar3 = local_18;
      FUN_003b3da8(local_18,"m_timeLabel");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    FUN_003c8194(local_18,local_40,local_48,local_50);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

