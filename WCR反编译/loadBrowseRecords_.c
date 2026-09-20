// loadBrowseRecords: @ 010bb13c

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMonitor::loadBrowseRecords_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  long local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  bVar1 = local_28 != 0;
  if (bVar1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ioQueue_026ae678);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_010bb27c;
    local_48 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_28;
    local_40 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar2;
    _dispatch_async(IVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

