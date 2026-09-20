// clampLockedSenderNicknameOnView:proposedFrame: @ 010e961c

/* Function Stack Size: 0x20 bytes */

bool WCRefineNameplateHelper::clampLockedSenderNicknameOnView_proposedFrame_
               (ID param_1,SEL param_2,ID param_3,CGRect *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  double in_d0;
  double in_d2;
  ulong local_a8;
  ulong local_78;
  undefined1 local_69;
  double local_68;
  double local_58;
  ulong local_48;
  undefined4 local_3c;
  CGRect *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  local_38 = param_4;
  if (param_4 != (CGRect *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      _objc_getAssociatedObject(local_30,DAT_0280e1f0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_CGRectValue_0269e128);
        uVar2 = local_30;
        local_69 = true;
        if (ABS((local_38->field0_0x0).field0_0x0 - in_d0) <= 0.5) {
          local_69 = 0.5 < ABS((local_38->field1_0x10).field0_0x0 - in_d2);
        }
        local_68 = in_d0;
        local_58 = in_d2;
        if ((bool)local_69 != false) {
          puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar2 & 1) == 0) {
            local_a8 = 0;
          }
          else {
            local_a8 = local_30;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = local_a8;
          _objc_storeStrong(&local_78,0);
        }
        (local_38->field0_0x0).field0_0x0 = local_68;
        (local_38->field1_0x10).field0_0x0 = local_58;
        local_11 = 1;
      }
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
      goto LAB_010e98a8;
    }
  }
  local_11 = 0;
  local_3c = 1;
LAB_010e98a8:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

