// FUN_006bbf80 @ 006bbf80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_006bbf80(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  double local_2a8;
  double local_298;
  double local_290;
  uint local_1b4;
  ulong local_f8;
  ulong local_e8;
  double local_b0;
  double dStack_a8;
  double local_90;
  double dStack_88;
  ulong local_78;
  ulong local_68;
  ulong local_58;
  ulong local_40 [3];
  byte local_21;
  
  local_40[2] = 0;
  _objc_storeStrong(local_40 + 2,param_5);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_6);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_7);
  uVar6 = local_40[2];
  puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((((uVar6 & 1) == 0) ||
      (uVar6 = local_40[2],
      (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_isHidden_026ca768), (uVar6 & 1) != 0))
     || ((*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_alpha_026ca4d8),
        param_1 <= DAT_02323d38)) {
    local_21 = 0;
  }
  else {
    uVar6 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
    if ((uVar6 & 1) == 0) {
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      uVar6 = local_40[2];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_006bf180();
      local_1b4 = 1;
      if ((uVar7 & 1) == 0) {
        local_58 = local_40[2];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_titleForState__026a2208,0);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        uVar7 = local_58;
        FUN_006bf180();
        local_1b4 = 1;
        if ((uVar7 & 1) == 0) {
          local_68 = local_40[2];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_titleForState__026a2208,1);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          uVar7 = local_68;
          FUN_006bf180();
          local_1b4 = 1;
          if ((uVar7 & 1) == 0) {
            local_78 = local_40[2];
            (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_currentTitle_026a2200);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            uVar7 = local_78;
            FUN_006bf180();
            local_1b4 = (uint)uVar7;
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if ((local_1b4 & 1) == 0) {
        dStack_88 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
        local_90 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
        uVar6 = local_40[2];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar6 != 0) {
          uVar6 = local_40[2];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar4 = (uint)uVar7;
          _CGRectIsEmpty();
          bVar1 = (uVar4 & 1) != 0;
          if (bVar1) {
            local_f8 = local_40[2];
            (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_imageView_0269f230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_b0 = param_3;
            dStack_a8 = param_4;
          }
          else {
            local_e8 = local_40[2];
            (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_imageView_0269f230);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_b0 = param_3;
            dStack_a8 = param_4;
          }
          dStack_88 = dStack_a8;
          local_90 = local_b0;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_f8);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_e8);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        local_2a8 = local_90;
        local_290 = dStack_88;
        if ((80.0 <= local_90) && (80.0 <= dStack_88)) {
          if (local_90 <= dStack_88) {
            if (local_90 < 1.0) {
              local_2a8 = 1.0;
            }
            local_298 = dStack_88 / local_2a8;
          }
          else {
            if (dStack_88 < 1.0) {
              local_290 = 1.0;
            }
            local_298 = local_90 / local_290;
          }
          if (local_298 <= 1.25) {
            local_21 = 1;
            goto LAB_006bc9b0;
          }
        }
        uVar4 = (uint)local_40[0];
        FUN_006babd0();
        if ((uVar4 & 1) != 0) {
          uVar4 = (uint)local_40[1];
          FUN_006bf3e4();
          if ((uVar4 & 1) != 0) {
            local_21 = 1;
            goto LAB_006bc9b0;
          }
        }
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 0;
    }
  }
LAB_006bc9b0:
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return local_21 & 1;
}

