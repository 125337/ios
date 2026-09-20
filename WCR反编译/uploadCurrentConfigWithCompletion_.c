// uploadCurrentConfigWithCompletion: @ 00f054cc

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::uploadCurrentConfigWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  ID local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isReady_026aba68);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_finish_success_message__026abb10,local_28,0,&::cf_HQ);
    local_2c = 1;
  }
  else if ((DAT_028e2b18 & 1) == 0) {
    DAT_028e2b18 = 1;
    pdVar3 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00f05674;
    local_48 = &DAT_02582348;
    local_38 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    _dispatch_async(pdVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_40,0);
    local_2c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_finish_success_message__026abb10,local_28,0,&cf_ck_WNOzTQ);
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

