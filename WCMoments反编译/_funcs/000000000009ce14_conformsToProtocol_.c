// conformsToProtocol: @0x9ce14

/* Function Stack Size: 0x18 bytes */

bool _YYImageWeakProxy::conformsToProtocol_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);
  bVar1 = _objc_msgSend_conformsToProtocol_(uVar2,local_50,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_28,0);
  return bVar1;
}

