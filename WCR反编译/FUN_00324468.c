// FUN_00324468 @ 00324468

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00324468(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_168;
  ulong local_120;
  bool local_a9;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  undefined8 local_90;
  byte local_81;
  ulong local_80;
  bool local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 != 0) {
    uVar3 = (uint)local_28;
    FUN_0031b590();
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      FUN_0030fc8c();
      if (((ulong)puVar4 & 1) == 0) {
        local_38 = 1;
      }
      else {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_50 = 0;
        local_48 = uVar5;
        for (local_58 = 0; uVar5 = local_48, local_48 != 0 && local_58 < 8; local_58 = local_58 + 1)
        {
          puVar4 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar5 & 1) != 0) {
            _objc_storeStrong(&local_50,local_48);
            break;
          }
          uVar6 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_48;
          local_48 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        if ((local_50 == 0) || (uVar5 = local_50, FUN_0031918c(), (uVar5 & 1) == 0)) {
          local_38 = 1;
        }
        else {
          local_120 = local_50;
          FUN_0030fd54();
          _objc_retainAutoreleasedReturnValue();
          local_71 = false;
          bVar1 = local_120 == 0;
          local_60 = local_120;
          if (bVar1) {
            local_120 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_indexPathForCell__0269e208,local_50);
            _objc_retainAutoreleasedReturnValue();
            local_70 = local_120;
          }
          local_71 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = local_120;
          if ((local_71 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_70);
          }
          uVar5 = local_60;
          if ((local_60 == 0) || (local_68 == 0)) {
            local_38 = 1;
          }
          else {
            uVar6 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_section_0269e988);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_numberOfRowsInSection__026a2008,uVar6)
            ;
            uVar6 = local_50;
            local_80 = uVar5;
            FUN_00314914(local_50,local_60,local_68,uVar5);
            local_81 = (byte)uVar6;
            FUN_00311104(local_40,local_28);
            local_90 = param_1;
            FUN_00320588(local_28,local_81 & 1);
            if ((local_81 & 1) != 0) {
              FUN_00320914(local_50);
              uVar5 = local_50;
              FUN_0031fdd0(local_50,local_60);
              _objc_retainAutoreleasedReturnValue();
              local_98 = uVar5;
              if (uVar5 == 0) {
                local_168 = 0;
              }
              else {
                local_168 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_indexPathForCell__0269e208,uVar5);
                _objc_retainAutoreleasedReturnValue();
                local_a8 = local_168;
              }
              local_a9 = uVar5 != 0;
              (*(code *)PTR__objc_retain_02578638)();
              local_a0 = local_168;
              if (local_a9) {
                (*(code *)PTR__objc_release_02578630)(local_a8);
              }
              if (local_a0 != 0) {
                uVar7 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_section_0269e988);
                uVar8 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_section_0269e988);
                uVar2 = local_60;
                uVar6 = local_98;
                uVar5 = local_a0;
                if (uVar7 == uVar8) {
                  FUN_00311104(local_40,local_98);
                  FUN_00315088(param_1,uVar6,uVar2,uVar5);
                }
              }
              _objc_storeStrong(&local_a0);
              _objc_storeStrong(&local_98,0);
            }
            local_38 = 0;
          }
          _objc_storeStrong(&local_68);
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
      goto LAB_00324ae4;
    }
  }
  local_38 = 1;
LAB_00324ae4:
  _objc_storeStrong(&local_28,0);
  return;
}

