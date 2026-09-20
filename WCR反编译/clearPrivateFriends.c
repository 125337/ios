// clearPrivateFriends @ 01cb3b4c

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::clearPrivateFriends(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01cb3c60;
  local_38 = &DAT_025810b0;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nzzy__YSTUS,
             &cf_Snzzy__YSn_NORdNUOObmo_0,&cf_nzz,&local_50,&cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

