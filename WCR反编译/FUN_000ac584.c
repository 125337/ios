// FUN_000ac584 @ 000ac584

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000ac584(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_58;
  int local_50;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_50 = 1;
    goto LAB_000acbf0;
  }
  FUN_000b6300();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  if (uVar1 == 0) {
    uStack_68 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    uVar5 = *(undefined8 *)PTR__CGPointZero_025782e0;
    local_70 = uVar5;
  }
  else {
    uVar5 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,uVar1);
    param_2 = param_1;
    local_70 = param_1;
    uStack_68 = uVar5;
  }
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c80b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_78 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar3 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_40);
      uVar1 = local_40;
      local_d0 = uVar5;
      uStack_c8 = param_2;
      local_b0 = uVar5;
      uStack_a8 = param_2;
      FUN_000b11e8(uVar5,param_2);
      local_b8 = uVar1;
      if ((-1 < (long)uVar1) && ((long)uVar1 < 4)) {
        FUN_000b4068(uVar1 - 4);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = uVar1;
        FUN_000b3ecc();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_50 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          uVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_ActionMenu);
          if (((uVar1 & 1) == 0) &&
             (uVar1 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_ActionList), (uVar1 & 1) == 0))
          {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcrefine_performActionForButtonI_0269e470,local_b8);
            local_50 = 0;
          }
          else {
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
              FUN_000b6d88(0,local_b0,uStack_a8,local_28,local_40);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcrefine_showActionMenuForButton_0269e490,local_b8);
            }
            local_50 = 1;
          }
        }
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
        if (local_50 != 0) goto LAB_000acbd0;
      }
      local_50 = 0;
    }
    else {
      local_50 = 1;
    }
  }
  else {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar3 == 2) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      FUN_000b685c(local_70,uStack_68,local_28,1);
    }
    else {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
      if (lVar3 == 3) {
        uStack_98 = uStack_68;
        local_a0 = local_70;
        FUN_000b685c(local_70,uStack_68,local_28,0);
        FUN_000b6910(local_28);
      }
      else {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if ((lVar3 == 4) ||
           (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
           lVar3 == 5)) {
          FUN_000b6cfc(local_28,1);
        }
      }
    }
    local_50 = 1;
  }
LAB_000acbd0:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_58,0);
LAB_000acbf0:
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

