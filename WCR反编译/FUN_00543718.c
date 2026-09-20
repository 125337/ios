// FUN_00543718 @ 00543718

void FUN_00543718(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  ulong local_90;
  ulong local_80;
  ulong local_70;
  ulong local_58;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if ((local_28 == 0) || (uVar6 = local_28, FUN_0054255c(), (uVar6 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar6 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f4368);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    if ((uVar7 & 1) == 0) {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isBeingDismissed_0269f460);
      if (((uVar6 & 1) == 0) &&
         (uVar7 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isMovingFromParentViewController_0269f458), uVar6 = local_28,
         uVar4 = DAT_026f4368, (uVar7 & 1) == 0)) {
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar6,uVar4,puVar8,1);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setM_hasConfirmReturn__026a4db0
                  );
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setM_hasConfirmReturn__026a4db0,1);
        }
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = false;
        bVar1 = false;
        bVar5 = false;
        local_40 = uVar6;
        if (uVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          bVar5 = false;
          local_48 = uVar6;
          if (uVar6 == local_28) {
            local_58 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            uVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar5 = 1 < uVar6;
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_58);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_48);
        }
        if (bVar5) {
          uVar6 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,
                     PTR_s_PopViewControllerAnimated__026a4db8);
          if ((uVar6 & 1) == 0) {
            uVar6 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_popViewControllerAnimated__0269ede0,1);
            _objc_unsafeClaimAutoreleasedReturnValue(uVar6);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_PopViewControllerAnimated__026a4db8,1);
          }
          local_38 = 1;
        }
        else {
          pcVar9 = &cf_DismissMyselfAnimated_;
          _NSSelectorFromString();
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar9);
          if ((uVar6 & 1) == 0) {
            uVar6 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_doExit_026a4d68);
            if ((uVar6 & 1) == 0) {
              bVar3 = false;
              bVar2 = false;
              bVar1 = false;
              bVar5 = false;
              if (local_40 != 0) {
                local_70 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_presentingViewController_026a0db0);
                _objc_retainAutoreleasedReturnValue();
                bVar3 = true;
                bVar5 = false;
                if (local_70 != 0) {
                  local_80 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewControllers_0269e348);
                  _objc_retainAutoreleasedReturnValue();
                  bVar2 = true;
                  local_90 = local_80;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = true;
                  bVar5 = local_90 == local_28;
                }
              }
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_90);
              }
              if (bVar2) {
                (*(code *)PTR__objc_release_02578630)(local_80);
              }
              if (bVar3) {
                (*(code *)PTR__objc_release_02578630)(local_70);
              }
              if (bVar5) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
                local_38 = 1;
              }
              else {
                uVar6 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_presentingViewController_026a0db0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                if (uVar6 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
                }
                local_38 = 0;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doExit_026a4d68);
              local_38 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar9,1);
            local_38 = 1;
          }
        }
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_38 = 1;
      }
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

