// wcrGrouping_confirmDeleteItem:completion: @ 00369f64

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_confirmDeleteItem_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  long local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  ID local_48;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcrGrouping_currentItemMatchingI_026a27f0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  if (IVar3 == 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,0);
    }
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrGrouping_closeSwipeStateRemov_026a2778,0);
    _objc_initWeak(auStack_58,local_28);
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_0036a29c;
    local_78 = &DAT_0257c628;
    _objc_copyWeak(auStack_60,auStack_58);
    lVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_48;
    local_68 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = puVar1;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_0036aabc;
    local_a8 = &DAT_0257c658;
    IVar4 = local_28;
    local_70 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_40;
    local_a0 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_RdO,
               &cf__RdOSJ_YU_dkd_ONSb_Y0,&cf_Rd,&local_90,&cf_Sm,&local_c0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

