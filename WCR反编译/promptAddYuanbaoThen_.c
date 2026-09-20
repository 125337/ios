// promptAddYuanbaoThen: @ 01cb8e60

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendViewController::promptAddYuanbaoThen_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  local_40 = uVar2;
  _objc_initWeak(auStack_48,local_28);
  uVar2 = local_40;
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01cb906c;
  local_58 = &DAT_025838c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar2;
  local_a0 = puVar1;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01cb90d8;
  local_88 = &DAT_0258be48;
  _objc_copyWeak(auStack_78,auStack_48);
  uVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_WCRefine,
             &cf___gmRCQ__YS0mRTsSS_O_uR0,&cf_Sm,&local_70,&cf_mR,&local_a0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  _objc_storeStrong(&local_80);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

