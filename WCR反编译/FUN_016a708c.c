// FUN_016a708c @ 016a708c

void FUN_016a708c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  byte local_31;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028e3de8)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeCapturePending_026b2e00);
  local_31 = 0;
  local_74 = 0;
  if (((ulong)puVar1 & 1) != 0) {
    uVar2 = local_18;
    FUN_016d1218();
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_74 = (uint)uVar2;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_74 & 1) != 0) {
    dVar3 = _dispatch_time(0,150000000);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc0000000;
    local_64 = 0;
    local_60 = FUN_016d1634;
    local_58 = &DAT_025797b0;
    local_50 = local_18;
    _dispatch_after(dVar3,puVar1,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

