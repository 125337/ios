// FUN_00efaa40 @ 00efaa40

undefined8 FUN_00efaa40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  _objc_initWeak(auStack_28,local_18);
  _objc_initWeak(auStack_30,local_20);
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_00effcfc;
  local_48 = &DAT_02582188;
  _objc_copyWeak(auStack_40,auStack_28);
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_ndJ_YU_,
             &cf__f_TnxndS_MROvJ_YU_dkd_ONSb_Y0,&cf_nd,&local_60,&cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return 1;
}

