// FUN_010b95bc @ 010b95bc

void FUN_010b95bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = param_6;
  if ((((local_28 == 0) ||
       (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       lVar3 == 0)) ||
      (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar3 == 0)) ||
     ((lVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      lVar3 == 0 || (local_48 == 0)))) {
    local_54 = 1;
  }
  else {
    dVar4 = _dispatch_time(0,250000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_010cbd9c;
    local_90 = &DAT_02585448;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_48;
    local_88 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_30;
    local_80 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_38;
    local_78 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_40;
    local_70 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar3;
    local_60 = local_50;
    _dispatch_after(dVar4,puVar5,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

