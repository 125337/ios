// hash @0x9cc2c

/* Function Stack Size: 0x10 bytes */

unsigned_long_long _YYImageWeakProxy::hash(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  unsigned_long_long uVar2;
  undefined8 local_38;
  
  uVar1 = _objc_loadWeakRetained(param_1 + (long)_target);
  uVar2 = _objc_msgSend_hash(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return uVar2;
}

