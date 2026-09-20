// confirmDeleteGroup: @ 01ac18d4

/* Function Stack Size: 0x18 bytes */

void WCRGroupListViewController::confirmDeleteGroup_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined1 *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_30 == (undefined1 *)0x0) ||
     ((puVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8),
      puVar3 != (undefined1 *)0x0 &&
      (puVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8),
      puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 3))))) {
    local_34 = 1;
  }
  else {
    _objc_initWeak(auStack_40,local_18);
    uVar1 = local_28;
    puVar2 = PTR_WCRefineHelper_026ce000;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01ac1b10;
    local_58 = &DAT_0257cd48;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    _objc_copyWeak(auStack_48,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_RdR_,
               &cf_SRdR_TbXTR___NORd_OT_NbJ_YU_0,&cf_Rd,&local_70,&cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_50,0);
    _objc_destroyWeak(auStack_40);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

