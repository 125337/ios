// FUN_009d5ddc @ 009d5ddc

void FUN_009d5ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  dispatch_time_t dVar10;
  uint local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  byte local_41;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_ac = 1;
  if (lVar4 != 0) {
    lVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = lVar5;
    FUN_009c907c();
    local_ac = (uint)lVar5 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(lVar4);
  uVar3 = local_28;
  uVar9 = local_38;
  bVar1 = (local_ac & 1) == 0;
  if (bVar1) {
    puVar7 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    lVar4 = local_30;
    puVar2 = PTR___NSConcreteStackBlock_02578660;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_009d6218;
    local_60 = &DAT_02581668;
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = local_38;
    local_58 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar9;
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_downloadTaskWithRequest_completi_026aafa8,lVar4,&local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSecondaryTask__026aaf50);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    uVar9 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secondaryTask_026aae78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar9);
    dVar10 = _dispatch_time(0,180000000000);
    puVar7 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_a8 = puVar2;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_009d670c;
    local_90 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = local_38;
    local_88 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar9;
    _dispatch_after(dVar10,puVar7,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    pcVar6 = &cf_NR_gVS_u0W_W;
    FUN_009c701c(&cf_NR_gVS_u0W_W,0xfffffffffffffffe);
    _objc_retainAutoreleasedReturnValue();
    FUN_009d255c(uVar3,uVar9,0);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  local_48 = (uint)!bVar1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

