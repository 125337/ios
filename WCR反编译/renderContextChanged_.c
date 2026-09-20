// renderContextChanged: @ 010f2b48

/* Function Stack Size: 0x18 bytes */

void WCRefinePerspectiveVideoCompositor::renderContextChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  uVar3 = *(undefined8 *)(local_18 + 0x80);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_28;
  local_38 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  _dispatch_sync(uVar3);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

