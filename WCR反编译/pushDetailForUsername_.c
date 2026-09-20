// pushDetailForUsername: @ 0184af8c

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUsersViewController::pushDetailForUsername_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineAvatarFrameSpecialKeyPluginMenu);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0;
      FUN_01138eb8();
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                   &::cf_W,&cf_Km_N_feD<h,&cf__Yv,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_2c = 1;
        goto LAB_0184b1bc;
      }
    }
    puVar2 = PTR_WCRefineAvatarFrameSpecialUserDetailViewController_026ceda8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_18;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) == 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
LAB_0184b1bc:
  _objc_storeStrong(&local_28,0);
  return;
}

