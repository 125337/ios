// FUN_009d279c @ 009d279c

void FUN_009d279c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  cfstringStruct *local_b8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  byte local_51;
  long local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = 0;
  local_38 = param_3;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b8 = &cf_generating;
  }
  else {
    local_b8 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentProgressState__026aaf68,local_b8);
  if (local_40 == 0) {
    local_44 = 1;
    goto LAB_009d2b3c;
  }
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentProgressState_026aaf70);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_009d4058();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastProgressPhase_026aaf80);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = (byte)lVar4 ^ 1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_38;
  local_51 = bVar1 & 1;
  if (((bVar1 & 1) == 0) && (-1 < local_38)) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastProgressAttempt_026aaf88);
    if (2 < lVar3 - lVar4) goto LAB_009d2978;
    local_44 = 1;
  }
  else {
LAB_009d2978:
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastProgressPhase__026aaf90,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastProgressAttempt__026aaf60,local_38);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentProgressState_026aaf70);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startedAt_026aaf78);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    FUN_009d3ebc();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_40;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_009d4550;
    local_78 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_60;
    local_68 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar3;
    _dispatch_async(puVar6,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_50,0);
LAB_009d2b3c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

