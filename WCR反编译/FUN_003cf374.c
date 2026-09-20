// FUN_003cf374 @ 003cf374

byte FUN_003cf374(undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_f8;
  ulong local_a8;
  ulong local_a0;
  bool local_91;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  ulong *local_50;
  ulong *local_48;
  ulong *local_40;
  ulong *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    uVar4 = local_30;
    FUN_003cee1c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_30;
    local_60 = uVar4;
    FUN_003d0e78();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRGroupingSessionListViewController_026ce5d0;
    local_70 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRGroupingSessionListViewController_026ce5d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar5 & 1) == 0) || (uVar5 = local_60, FUN_003cf114(), uVar4 = local_70, (uVar5 & 1) == 0)
       ) {
      local_21 = 0;
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar4;
      uVar4 = local_30;
      FUN_00355cb8();
      _objc_retainAutoreleasedReturnValue();
      local_91 = false;
      local_80 = uVar4;
      if (uVar4 == 0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_indexPathForCell__0269e208,uVar4);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_f8;
      }
      local_91 = uVar4 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_f8;
      if ((local_91 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      local_a0 = 0;
      bVar2 = false;
      bVar1 = false;
      if (local_88 != 0) {
        uVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_section_0269e988);
        bVar1 = false;
        if (uVar4 == 0) {
          uVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_row_0269e210);
          bVar1 = false;
          if (-1 < (long)uVar4) {
            uVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_row_0269e210);
            local_a8 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_items_0269e4b0);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            uVar5 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = (long)uVar4 < (long)uVar5;
          }
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if (bVar1) {
        uVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_items_0269e4b0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_row_0269e210);
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_a0;
        local_a0 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar4 = local_60;
      if (local_38 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_38 = uVar4;
      }
      uVar4 = local_78;
      if (local_40 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_40 = uVar4;
      }
      uVar4 = local_68;
      if (local_48 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_48 = uVar4;
      }
      uVar4 = local_a0;
      if (local_50 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_50 = uVar4;
      }
      local_21 = 1;
      local_54 = 1;
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

