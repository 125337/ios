// FUN_001a2350 @ 001a2350

void FUN_001a2350(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_178;
  ulong local_168;
  ulong local_148;
  uint local_d4;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  byte local_49;
  undefined *local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_state_026cab20);
  if (uVar1 == 1) {
    local_49 = 0;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d4 = 1;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d4 = (uint)puVar3 ^ 1;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_d4 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = 0;
      local_68 = 0;
      local_58 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar1;
      while (uVar1 = local_70, local_70 != 0) {
        if (local_60 == 0) {
          puVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar1 & 1) != 0) {
            _objc_storeStrong(&local_60,local_70);
          }
        }
        uVar1 = local_70;
        puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          _objc_storeStrong(&local_68,local_70);
          break;
        }
        uVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_70;
        local_70 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_40 = 2;
      _objc_storeStrong(&local_70,0);
      if ((local_60 == 0) || (uVar1 = local_60, FUN_001a2b04(), (uVar1 & 1) == 0)) {
        local_40 = 1;
      }
      else {
        local_81 = 0;
        if ((local_60 == 0) || (local_68 == 0)) {
          local_148 = 0;
        }
        else {
          local_148 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_indexPathForCell__0269e208,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_148;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_148;
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        uVar1 = local_28;
        FUN_00192a00(local_28,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_168 = uVar1;
        if (uVar1 == 0) {
          local_168 = local_78;
        }
        uVar4 = local_28;
        local_90 = uVar1;
        FUN_001a2d58(local_28,local_168);
        if ((uVar4 & 1) == 0) {
          local_40 = 1;
        }
        else {
          if (local_90 == 0) {
            local_178 = local_78;
          }
          else {
            local_178 = local_90;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_section_0269e988);
          uVar1 = local_28;
          local_98 = local_178;
          FUN_001961a4(local_28,local_178);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            local_40 = 1;
          }
          else {
            FUN_001a301c(local_28);
            if ((local_68 != 0) && (local_78 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_78,0);
            }
            FUN_001a31e8(local_28,local_60,local_a0);
            local_40 = 0;
          }
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_40 = 1;
    }
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

