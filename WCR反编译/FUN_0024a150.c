// FUN_0024a150 @ 0024a150

void FUN_0024a150(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_398;
  double local_2e0;
  cfstringStruct *local_2a8;
  ulong local_208;
  double local_128;
  ulong local_110;
  ulong local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  bool local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  ulong local_98;
  ulong local_90 [2];
  ulong local_80 [2];
  ulong local_70;
  undefined4 local_68;
  bool local_61;
  ulong local_60;
  ulong local_58 [4];
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_6;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_bottomBar_026a0ef8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_38 = param_5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_61 = false;
  bVar1 = local_38 == 0;
  if (bVar1) {
    local_208 = 0;
  }
  else {
    local_208 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_208;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_208;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar2 & 1) == 0) {
    if (local_58[0] != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setHidden__026ca970,1);
    }
    local_68 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefine_ensureGroupMoveButton_026a0e00);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_58[0];
    local_58[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_58[0] == 0) {
      local_68 = 1;
    }
    else {
      local_70 = 0;
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manageStatus_026a0f00);
      local_70 = uVar4;
      if (uVar4 == 5) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setHidden__026ca970,1);
        local_68 = 1;
      }
      else {
        local_80[0] = 0;
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancelMoveButton_026a0f08);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_80[0];
        local_80[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if ((local_80[0] == 0) ||
           (uVar4 = local_80[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_isHidden_026ca768),
           (uVar4 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setHidden__026ca970,0);
          local_90[0] = 0;
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dataLogic_026a0f10);
          _objc_retainAutoreleasedReturnValue();
          local_98 = uVar4;
          if ((uVar4 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_md5ListForMarkItems_026a0f18
                        ), (uVar4 & 1) != 0)) {
            uVar3 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_md5ListForMarkItems_026a0f18);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_90[0];
            local_90[0] = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          _objc_storeStrong(&local_98,0);
          uVar4 = local_90[0];
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_a1 = false;
          if ((uVar4 & 1) != 0) {
            uVar4 = local_90[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_count_0269cfe0);
            local_a1 = uVar4 != 0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setEnabled__026ca938,local_a1);
          local_2a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          local_b9 = false;
          bVar1 = (local_a1 & 1) == 0;
          if (bVar1) {
            local_2a8 = &cf_R_;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2a8,PTR_s_stringWithFormat__0269cca8,&cf_R__);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = local_2a8;
          }
          local_b9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_2a8;
          if ((local_b9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[0],PTR_s_setTitle_forState__026caab8,local_b0,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[0],PTR_s_setTitle_forState__026caab8,local_b0,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_sizeToFit_0269ec08);
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_bounds_026ca548);
          local_f0 = param_1;
          local_e8 = param_2;
          local_e0 = param_3;
          local_d8 = param_4;
          _CGRectGetWidth(param_1,param_2);
          local_d0 = param_1 + 12.0;
          local_f8 = 0x404c000000000000;
          uVar6 = 0x404c000000000000;
          local_2e0 = local_d0;
          if (local_d0 < 56.0) {
            local_2e0 = 56.0;
          }
          local_100 = local_2e0;
          local_c8 = local_2e0;
          local_108 = 0;
          local_110 = 0;
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moveButton_026a0f20);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_108;
          local_108 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_deleteButton_026a0f28);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_110;
          local_110 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          dVar5 = 6.0;
          local_128 = 6.0;
          if ((local_108 == 0) ||
             (uVar4 = local_108,
             (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isHidden_026ca768),
             (uVar4 & 1) != 0)) {
            if ((local_110 != 0) &&
               (uVar4 = local_110,
               (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isHidden_026ca768),
               (uVar4 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_frame_026ca640);
              _CGRectGetMinX(dVar5,uVar6);
              local_128 = (dVar5 - local_c8) - 8.0;
              uVar6 = 0x4018000000000000;
              dVar5 = local_128;
              if (local_128 < 6.0) {
                local_128 = 6.0;
                dVar5 = local_128;
              }
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_frame_026ca640);
            _CGRectGetMaxX(dVar5,uVar6);
            uVar6 = 0x4020000000000000;
            local_128 = dVar5 + 8.0;
            dVar5 = local_128;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          _CGRectGetWidth(dVar5,uVar6,param_3,param_4);
          if ((1.0 < dVar5) && (dVar5 - 6.0 < local_128 + local_c8)) {
            local_398 = (dVar5 - local_c8) - 6.0;
            if (local_398 <= 6.0) {
              local_398 = 6.0;
            }
            local_128 = local_398;
          }
          uVar6 = 0x4020000000000000;
          uVar7 = 0x403e000000000000;
          dVar5 = local_c8;
          FUN_00255258();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,uVar6,dVar5,uVar7,local_58[0],PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_bringSubviewToFront__026ca550,local_58[0]);
          _objc_storeStrong(&local_110);
          _objc_storeStrong(&local_108,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(local_90,0);
          local_68 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setHidden__026ca970,1);
          local_68 = 1;
        }
        _objc_storeStrong(local_80,0);
      }
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

