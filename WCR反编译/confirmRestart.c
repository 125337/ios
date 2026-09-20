// confirmRestart @ 019fd120

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationCheckViewController::confirmRestart(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRefineFriendRelationChecker_026ceb00;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hasPendingRangeReplacement_026aca88);
  local_30 = &cf__O_ueVe;
  if (((ulong)puVar3 & 1) == 0) {
    local_30 = &cf_e;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPendingRangeReplacement_026aca88);
  local_38 = &cf___uebvVN4YhKmSegf_PviRYOROfbc_g_gOOYu0;
  if (((ulong)puVar3 & 1) == 0) {
    local_38 = &cf___uS_MRbvVN4YhKm_g_gOOYu0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_initWeak(auStack_40,local_18);
  pcVar2 = local_30;
  pcVar1 = local_38;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_019fd324;
  local_50 = &DAT_025810b0;
  _objc_copyWeak(auStack_48,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_showAlertWithTitle_message_destr_0269f868,pcVar2,pcVar1,pcVar2,&local_68,
             &cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

