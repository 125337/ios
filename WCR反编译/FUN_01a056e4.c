// FUN_01a056e4 @ 01a056e4

/* WARNING: Type propagation algorithm not settling */

void FUN_01a056e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  undefined1 auStack_58 [12];
  uint local_4c;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  lVar4 = *(long *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  puVar6 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  if (lVar4 != 0) {
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01a05984;
    local_70 = &DAT_0257c628;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar5;
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    lVar2 = local_40[0];
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_40[0];
    local_60 = lVar2;
    local_b0 = puVar1;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01a05b44;
    local_98 = &DAT_025838c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nxRd,
               &cf__Rd_YSOYuJ_YU_0dkd_ONSd,&cf_Rd,&local_88,&cf_Sm,&local_b0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_60,0);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (**(code **)(local_40[0] + 0x10))(local_40[0],0);
  }
  local_4c = (uint)(lVar4 == 0);
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

