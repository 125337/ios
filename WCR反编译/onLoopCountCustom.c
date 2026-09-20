// onLoopCountCustom @ 00583a88

/* Function Stack Size: 0x10 bytes */

void WCRMomentsScheduledTaskListViewController::onLoopCountCustom(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_98;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ID local_50;
  ID local_38;
  int local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_2c = 2;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  FUN_005820e8();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_98 = IVar2;
  if ((long)IVar2 <= (long)local_2c) {
    local_98 = (long)local_2c;
  }
  local_50 = local_98;
  local_28 = local_98;
  local_38 = IVar2;
  _objc_initWeak(auStack_58,local_18);
  IVar1 = local_18;
  IVar2 = local_28;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00583c44;
  local_68 = &DAT_0257d898;
  _objc_copyWeak(auStack_60,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcr_presentNumberInputTitle_subt_026a5478,&cf__IN_kpe,&::cf___,IVar2,1,99,
             &local_80);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}

