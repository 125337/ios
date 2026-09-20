// FUN_00756824 @ 00756824

void FUN_00756824(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  uint local_198;
  uint local_12c;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60 [2];
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_41 = 0;
  local_12c = 1;
  if (local_28 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_12c = (uint)puVar2 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_12c & 1) == 0) {
    uVar3 = local_28;
    FUN_00757a3c();
    if ((uVar3 & 1) == 0) {
      local_50 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_username_026a2238);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_50;
        local_50 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar3 = local_50;
      FUN_007524a8();
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        local_48 = 1;
      }
      else {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_valueForKey__0269d128,&cf_descriptionLabel);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 0;
        puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_198 = 0;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          local_70 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_198 = (uint)uVar3 ^ 1;
        }
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        if ((local_198 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setText__026caa88,local_60[0]);
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextAlignment__026caa90,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setLineBreakMode__026ca988,4);
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_sizeToFit_0269ec08);
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          dVar6 = param_2;
          local_80 = uVar3;
          if (uVar3 != 0) {
            dVar6 = param_3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_bounds_026ca548);
            bVar1 = 0.0 < dVar6;
            param_3 = param_2;
            param_4 = param_1;
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
            dVar7 = dVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)
                      ((dVar7 - param_3) / 2.0,dVar6,param_3,param_4,local_68,
                       PTR_s_setFrame__026ca960);
          }
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_68,0);
        FUN_00758b10(local_28,local_50);
        FUN_0075701c(local_28);
        local_48 = 0;
      }
      _objc_storeStrong(local_60);
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_48 = 1;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

