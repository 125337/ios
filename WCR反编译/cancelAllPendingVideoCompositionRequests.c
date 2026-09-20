// cancelAllPendingVideoCompositionRequests @ 010f3498

/* Function Stack Size: 0x10 bytes */

void WCRefinePerspectiveVideoCompositor::cancelAllPendingVideoCompositionRequests
               (ID param_1,SEL param_2)

{
  ID IVar1;
  dispatch_time_t dVar2;
  undefined8 uVar3;
  ID local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  local_48 = PTR___NSConcreteGlobalBlock_02578658;
  local_40 = 0xd0800000;
  local_3c = 0;
  local_38 = FUN_010f35d4;
  local_30 = &DAT_0257a9d0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = param_1;
  _dispatch_sync(uVar3);
  dVar2 = _dispatch_time(0,100000000);
  IVar1 = local_18;
  uVar3 = *(undefined8 *)(local_18 + 0x78);
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar1;
  _dispatch_after(dVar2,uVar3);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

