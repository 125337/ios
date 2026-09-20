// FUN_01554ed4 @ 01554ed4

void FUN_01554ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_queue_t pdVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  if (((local_28 == 0) || (local_38 == 0)) ||
     (uVar3 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_deferredDataPending_026b0530),
     (uVar3 & 1) == 0)) {
    local_44 = 1;
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    pdVar5 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_015882f8;
    local_80 = &DAT_0257d7c8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_38;
    local_78 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_50;
    local_70 = uVar4;
    local_58 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_30;
    local_68 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar1;
    _dispatch_async(pdVar5,&local_98);
    (*(code *)PTR__objc_release_02578630)(pdVar5);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

