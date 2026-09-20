// FUN_01638108 @ 01638108

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01638108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  code *local_58;
  char *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  pcVar2 = "WAAppIdToUsernameTransfer";
  _objc_getClass();
  pcVar3 = &cf_transferAppidToUsernameWithAppId_handler_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_40 = pcVar3;
  if ((local_38 == (char *)0x0) ||
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_instancesRespondToSelector__0269da90,pcVar3),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_OHr_gN_ec);
    local_44 = 1;
  }
  else {
    local_78 = 0;
    local_68 = 0x32000000;
    local_64 = 0x30;
    local_60 = FUN_01638788;
    local_58 = FUN_016387dc;
    pcVar2 = local_38;
    local_70 = &local_78;
    _objc_alloc_init();
    uVar1 = local_28;
    pcVar3 = local_40;
    uVar6 = local_70[5];
    ppuVar5 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01638808;
    local_90 = &DAT_02587940;
    uVar4 = local_30;
    local_50 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar4;
    local_80 = &local_78;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,pcVar3,uVar1);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_storeStrong(&local_88);
    __Block_object_dispose(&local_78,8);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

