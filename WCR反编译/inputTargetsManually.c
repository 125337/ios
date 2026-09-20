// inputTargetsManually @ 01d38854

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::inputTargetsManually(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,param_1,
               _kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    _objc_initWeak(auStack_40,local_18);
    IVar1 = local_18;
    puVar2 = local_38;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01d38a28;
    local_58 = &DAT_0257c948;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = puVar2;
    _objc_copyWeak(auStack_48,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_showTextInputWithTitle_message_i_026c0570,&cf_KbReQvh,&cf_kX,&::cf___,
               2000,0,&local_70);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_50);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(param_1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

