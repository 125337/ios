// delegate @0x7c1fc

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageData::delegate(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_48;
  undefined8 local_30;
  
  _objc_msgSend_wcm_yb_isHideTransitioning(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = (**(code **)(lVar2 + 0x10))();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_48 = _objc_loadWeakRetained(param_1 + 0x58);
    local_30 = local_48;
  }
  else {
    local_48 = 0;
  }
  uVar4 = (*(code *)PTR__objc_retain_00110460)(local_48);
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}

