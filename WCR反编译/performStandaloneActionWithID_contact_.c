// performStandaloneActionWithID:contact: @ 01535b34

/* Function Stack Size: 0x20 bytes */

bool WCRefineTopBarProfileCardPresenter::performStandaloneActionWithID_contact_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_88;
  undefined *local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_88 = local_30;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (local_88 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    local_59 = 0;
    bVar1 = local_38 == 0;
    if (bVar1) {
      FUN_01532090();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    else {
      local_88 = local_38;
    }
    local_59 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_88;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (local_50 == 0) {
      local_11 = 0;
      local_44 = 1;
    }
    else {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,
                 _WCRefineProfileCardActionIDAggregateSearch);
      if ((((((uVar3 & 1) == 0) &&
            (uVar3 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDThemeMode), (uVar3 & 1) == 0)) &&
           (uVar3 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_isEqualToString__0269ccc8,
                      _WCRefineProfileCardActionIDChatRecord), (uVar3 & 1) == 0)) &&
          (((uVar3 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDClearChat), (uVar3 & 1) == 0 &&
            (uVar3 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDPat),
            (uVar3 & 1) == 0)) &&
           ((uVar3 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDSmallSignal), (uVar3 & 1) == 0 &&
            ((uVar3 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_isEqualToString__0269ccc8,
                        _WCRefineProfileCardActionIDTransfer), (uVar3 & 1) == 0 &&
             (uVar3 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_isEqualToString__0269ccc8,
                        _WCRefineProfileCardActionIDRedEnvelope), (uVar3 & 1) == 0)))))))) &&
         ((uVar3 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDVoiceCall)
          , (uVar3 & 1) == 0 &&
          (((((uVar3 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,
                         _WCRefineProfileCardActionIDVideoCall), (uVar3 & 1) == 0 &&
              (uVar3 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDStar),
              (uVar3 & 1) == 0)) &&
             (uVar3 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_isEqualToString__0269ccc8,
                        _WCRefineProfileCardActionIDCustomAvatar), (uVar3 & 1) == 0)) &&
            ((uVar3 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_isEqualToString__0269ccc8,
                        _WCRefineProfileCardActionIDChangeWallpaper), (uVar3 & 1) == 0 &&
             (uVar3 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_isEqualToString__0269ccc8,
                        _WCRefineProfileCardActionIDMessageBlock), (uVar3 & 1) == 0)))) &&
           ((uVar3 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDAvatarFrame), (uVar3 & 1) == 0 &&
            (uVar3 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDNameplate), (uVar3 & 1) == 0)))))))) {
        local_11 = 0;
        local_44 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
        bVar2 = DAT_028e3960 & 1;
        DAT_028e3960 = 1;
        local_68 = puVar4;
        FUN_01536050(local_50,local_40,puVar4);
        local_11 = 1;
        local_44 = 1;
        DAT_028e3960 = bVar2;
        _objc_storeStrong(&local_68,0);
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

