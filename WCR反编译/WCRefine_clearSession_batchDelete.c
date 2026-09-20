// WCRefine_clearSession_batchDelete @ 0016cce0

/* Function Stack Size: 0x10 bytes */

void WCRefineClearSessionHook::WCRefine_clearSession_batchDelete(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID local_70;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_34;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((param_1 & 1) == 0) {
    local_70 = 0;
  }
  else {
    local_70 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_70;
  puVar4 = PTR_WCRefineClearSessionHook_026ce348;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineClearSessionHook_026ce348,PTR_s_pendingUserNamesOnHost__0269f888,local_70);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__Rd_v);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0016cf44;
    local_48 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_ybRdO,puVar3,&cf_ybRd,
               &local_60,&cf_Sm,0,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gbO);
  }
  local_34 = (uint)(puVar4 == (undefined *)0x0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

