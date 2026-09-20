// FUN_0055e0a8 @ 0055e0a8

void FUN_0055e0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  uStack_28 = param_2;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  uVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_like);
  uVar3 = local_38;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_comment);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,&cf_fake_engagement);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_isEqualToString__0269ccc8,&cf_forward_friend);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_isEqualToString__0269ccc8,&cf_forward_moments);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_isEqualToString__0269ccc8,&cf_forward_moments_exclude_author);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_isEqualToString__0269ccc8,&cf_delete);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_isEqualToString__0269ccc8,&cf_save);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_48;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_48,PTR_s_isEqualToString__0269ccc8,&cf_perm_chat_only);
                  if ((((uVar1 & 1) == 0) &&
                      (uVar1 = local_48,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_48,PTR_s_isEqualToString__0269ccc8,&cf_perm_hide_him),
                      (uVar1 & 1) == 0)) &&
                     (uVar1 = local_48,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_48,PTR_s_isEqualToString__0269ccc8,&cf_perm_hide_me),
                     (uVar1 & 1) == 0)) {
                    uVar1 = local_48;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_settings);
                    if ((uVar1 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_38,PTR_s_WCRefineOpenDoubleTapActionMenuS_026a5078);
                    }
                  }
                  else {
                    _WCRefineToggleMomentPermissionForDataItem(local_50,local_48);
                  }
                }
                else {
                  uVar3 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
                  _objc_retainAutoreleasedReturnValue();
                  _WCRefineSaveMomentMediaFromCellView();
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                }
              }
              else {
                uVar3 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
                _objc_retainAutoreleasedReturnValue();
                FUN_005682b8();
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
            }
            else {
              uVar3 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
              _objc_retainAutoreleasedReturnValue();
              _WCRefineForwardMomentFromCellView();
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
          }
          else {
            uVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
            _objc_retainAutoreleasedReturnValue();
            _WCRefineForwardMomentFromCellView();
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
        }
        else {
          uVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
          _objc_retainAutoreleasedReturnValue();
          _WCRefineForwardMomentToChatFromCellView();
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_WCRefineShowFakeEngagementInputF_026a5030,local_50);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,uStack_28,local_38,PTR_s_WCRefinePerformCommentActionWith_026a5020);
    }
  }
  else {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_likeFlag_026a4708);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,uStack_28,uVar3,PTR_s_WCRefinePerformLikeAction_withTa_026a50a0,
               (uint)uVar2 ^ 1);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

