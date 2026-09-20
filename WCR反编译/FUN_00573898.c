// FUN_00573898 @ 00573898

void FUN_00573898(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  uint local_104;
  ulong local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar2 = local_28;
  FUN_005734fc(local_28,"m_privacyButton");
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_30 = uVar2;
  FUN_005734fc(local_28,"m_deleteButton");
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  if ((local_30 != 0) && (uVar3 != 0)) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_104 = 1;
    if (uVar2 != 0) {
      local_48 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_104 = 1;
      if (local_48 != 0) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
        local_104 = (uint)uVar3;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_104 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      _CGRectGetMinX();
      dVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      _CGRectGetMinX(dVar4,param_2,param_3);
      uVar6 = 0x3fe0000000000000;
      dVar5 = param_1 + 0.5;
      if (dVar5 < dVar4) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setLeft__026a5290);
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)
                    (param_1,dVar5,uVar6,param_4,local_38,PTR_s_setFrame__026ca960);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(param_1,local_38,PTR_s_setLeft__026a5290);
        }
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

