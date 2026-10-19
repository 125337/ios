// isMemberOfClass: @0x9cdb0

/* Function Stack Size: 0x18 bytes */

bool _YYImageWeakProxy::isMemberOfClass_(ID param_1,SEL param_2,CLASS param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_40;
  
  uVar2 = _objc_loadWeakRetained(param_1 + (long)_target);
  bVar1 = _objc_msgSend_isMemberOfClass_(uVar2,local_40,param_3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return bVar1;
}

