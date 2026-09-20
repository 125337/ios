// dismissAfterSendIfNeededFrom: @ 01f8f6a4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::dismissAfterSendIfNeededFrom_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_ac;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  ulong local_80 [2];
  byte local_69;
  ulong local_50;
  int local_48;
  byte local_41;
  undefined *local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_41 = 0;
  local_ac = 1;
  if (local_38 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ac = (uint)puVar2;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_ac & 1) == 0) {
    local_50 = 0;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_hostSheet);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_50 == 0) ||
       (uVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420),
       (uVar4 & 1) == 0)) {
      local_69 = 0;
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_pageSheetMode);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_69 = (byte)uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (((local_69 & 1) == 0) ||
         (uVar4 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_closeSelf_026c9b20),
         (uVar4 & 1) == 0)) {
        uVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_80[0] = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
        if (uVar4 < 2) {
          uVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentingViewController_026a0db0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
          }
          local_48 = 1;
        }
        else {
          local_90 = 0x7fffffffffffffff;
          for (local_98 = 0; lVar1 = local_98, uVar4 = local_88,
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
              lVar1 < (long)uVar4; local_98 = local_98 + 1) {
            uVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_98);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            local_a8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_hasPrefix__0269d320,&cf_WCRefineVoicePack);
            if ((uVar4 & 1) == 0) {
              local_48 = 0;
            }
            else {
              local_90 = local_98;
              local_48 = 4;
            }
            _objc_storeStrong(&local_a8);
            _objc_storeStrong(&local_a0,0);
            if (local_48 != 0) break;
          }
          uVar4 = local_80[0];
          if ((local_90 == 0x7fffffffffffffff) || (local_90 < 1)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80[0],PTR_s_popViewControllerAnimated__0269ede0,1);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            uVar3 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_90 + -1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_popToViewController_animated__0269e4f8,uVar3,1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          local_48 = 0;
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(local_80,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_closeSelf_026c9b20);
        local_48 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dismissWithAnimated__0269e420,1);
      local_48 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

