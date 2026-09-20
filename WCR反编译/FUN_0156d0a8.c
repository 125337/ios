// FUN_0156d0a8 @ 0156d0a8

void FUN_0156d0a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_0156d1cc;
  local_38 = &DAT_02583a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_ndJ_YU_,
             &cf__f_TnxndS_MROvJ_YU_dkd_ONSb_Y0,&cf_nd,&local_50,&cf_Sm);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_30,0);
  return;
}

