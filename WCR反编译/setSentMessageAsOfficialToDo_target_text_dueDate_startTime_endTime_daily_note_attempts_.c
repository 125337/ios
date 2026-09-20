// setSentMessageAsOfficialToDo:target:text:dueDate:startTime:endTime:daily:note:attempts: @ 01f1d4e0

/* Function Stack Size: 0x54 bytes */

void __thiscall
WCRefineToDoStore::
setSentMessageAsOfficialToDo_target_text_dueDate_startTime_endTime_daily_note_attempts_
          (WCRefineToDoStore *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          ID param_6,ID param_7,ID param_8,bool param_9,ID param_10,long_long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ID local_90;
  long_long local_88;
  byte local_80;
  undefined4 local_7c;
  long_long local_78;
  undefined8 local_70;
  byte local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_61 = (byte)param_9;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  local_78 = param_11;
  if (((local_38 == 0) ||
      (lVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      lVar4 == 0)) || ((long)local_78 < 1)) {
    local_7c = 1;
  }
  else {
    dVar5 = _dispatch_time(0,350000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_38;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_01f1d874;
    local_d0 = &DAT_0258cba0;
    local_90 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_40;
    local_c8 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_c0 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_b8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_58;
    local_b0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_60;
    local_a8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_70;
    local_a0 = uVar2;
    local_80 = local_61 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = uVar1;
    local_88 = local_78;
    _dispatch_after(dVar5,puVar6,&local_e8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

