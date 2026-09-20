// FUN_0029bac8 @ 0029bac8

void FUN_0029bac8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  dispatch_queue_t pdVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    FUN_0028e9e4(&cf_lSpeeHe);
    local_40 = 1;
  }
  else {
    pcVar3 = &cf_ck_Wl_N_;
    FUN_0029b4c4();
    FUN_0029ab68();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    pdVar4 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0029be9c;
    local_68 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_30;
    local_60 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_48;
    local_58 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = pcVar3;
    _dispatch_async(pdVar4,&local_80);
    (*(code *)PTR__objc_release_02578630)(pdVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

