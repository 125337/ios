// FUN_003cffec @ 003cffec

byte FUN_003cffec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_21 = 0;
    local_4c = 1;
    goto LAB_003d0558;
  }
  uVar2 = local_30;
  FUN_003cee1c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_58 = uVar2;
  FUN_003d0e78();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRGroupingSessionListViewController_026ce5d0;
  local_68 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGroupingSessionListViewController_026ce5d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    uVar2 = local_30;
    FUN_003d0598(local_30,&local_98,&local_a0,&local_a8,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_70,local_98);
    _objc_storeStrong(&local_78,local_a0);
    _objc_storeStrong(&local_80,local_a8);
    _objc_storeStrong(&local_88,local_b0);
    local_90 = uVar2;
    if ((local_88 == 0) || (uVar2 = local_58, FUN_003cf114(), (uVar2 & 1) == 0)) {
      uVar2 = local_90;
      FUN_003bed8c();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_80;
      local_b8 = uVar2;
      FUN_0039d4e0(local_80,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_c0 = lVar4;
      FUN_003cf114();
      if (((uVar2 & 1) == 0) || (local_c0 == 0)) {
        FUN_003cf114();
        local_21 = 0;
      }
      else {
        uVar2 = local_58;
        FUN_003cf8bc();
        if (((uVar2 & 1) == 0) ||
           ((uVar2 = local_30, FUN_003cf928(), (uVar2 & 1) == 0 &&
            (uVar2 = local_58, FUN_003cf9fc(), (uVar2 & 1) == 0)))) {
          uVar2 = local_90;
          FUN_003d10c4(local_90,local_78,local_c0,local_58);
          local_21 = (byte)uVar2 & 1;
        }
        else {
          local_21 = 0;
        }
      }
      local_4c = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
    }
    else {
      uVar2 = local_58;
      FUN_003cf8bc();
      if (((uVar2 & 1) == 0) ||
         ((uVar2 = local_30, FUN_003cf928(), (uVar2 & 1) == 0 &&
          (uVar2 = local_58, FUN_003cf9fc(), (uVar2 & 1) == 0)))) {
        FUN_003d1618(local_90,local_78);
        uVar2 = local_58;
        FUN_003cf9fc();
        if ((uVar2 & 1) == 0) {
          uVar2 = local_58;
          FUN_003d0fc4();
          if ((uVar2 & 1) == 0) {
            uVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf__g);
            lVar4 = uVar2 + 0x8000000000000001;
            if (lVar4 == 0) {
              uVar2 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf__);
              lVar4 = uVar2 + 0x8000000000000001;
              if (lVar4 == 0) {
                local_21 = 0;
                local_4c = 1;
                goto LAB_003d04e8;
              }
            }
            FUN_003a4f00(lVar4,local_90,local_88);
            local_21 = 1;
            local_4c = 1;
          }
          else {
            FUN_003a4d08(local_90,local_88);
            local_21 = 1;
            local_4c = 1;
          }
        }
        else {
          FUN_003a4aac(local_90,local_88);
          local_21 = 1;
          local_4c = 1;
        }
      }
      else {
        local_21 = 0;
        local_4c = 1;
      }
    }
LAB_003d04e8:
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  else {
    local_21 = 0;
    local_4c = 1;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
LAB_003d0558:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

