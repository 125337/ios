// reloadSearchUIAnimated: @ 014c1120

/* Function Stack Size: 0x14 bytes */

void WCRefineSearchManager::reloadSearchUIAnimated_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  uVar2 = param_1 + 0x48;
  local_20 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = local_18 + 0x48;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  if ((local_21 & 1) != 0) {
    dVar5 = _dispatch_time(0,20000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_014c12a4;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar1;
    _dispatch_after(dVar5,puVar6,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

