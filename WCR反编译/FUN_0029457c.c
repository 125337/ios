// FUN_0029457c @ 0029457c

/* WARNING: Type propagation algorithm not settling */

void FUN_0029457c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  undefined8 uVar6;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  uint local_50;
  long local_40;
  long local_38 [3];
  
  local_38[1] = 0;
  local_38[2] = param_1;
  _objc_storeStrong(local_38 + 1);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_3);
  lVar2 = local_38[0];
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WS_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineHelper_026ce000;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar4;
    pdVar5 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_0029487c;
    local_88 = &DAT_0257b6a8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_38[0];
    local_80 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_60;
    local_78 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_58;
    local_70 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar4;
    _dispatch_async(pdVar5,&local_a0);
    (*(code *)PTR__objc_release_02578630)(pdVar5);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MOS_MRJ_Y);
  }
  local_50 = (uint)(lVar2 == 0);
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  return;
}

