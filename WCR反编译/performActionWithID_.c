// performActionWithID: @ 01cedbc8

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardFunctionPageViewController::performActionWithID_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDTop);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMute);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMessageBlock);
      if ((((uVar1 & 1) == 0) &&
          (uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,
                     _WCRefineProfileCardActionIDChangeWallpaper), (uVar1 & 1) == 0)) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDClearChat),
         (uVar1 & 1) == 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDAvatarURL);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMessage);
          if ((uVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_showUnavailableToastForActionID__026c3a88,local_28);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_openMessageAction_026c3a80);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copyAvatarURLAction_026c3a78);
        }
      }
      else {
        uVar1 = local_28;
        puVar3 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contact_026a0d10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_performStandaloneActionWithID_co_0269ea58,uVar1);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__wcR_O_u1Y_);
        }
        else {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,
                     _WCRefineProfileCardActionIDMessageBlock);
          if ((uVar1 & 1) != 0) {
            IVar2 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionStateOverrides_026c3a48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar2);
            IVar2 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar2);
          }
        }
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toggleMuteAction_026c3a70);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toggleTopAction_026c3a68);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

