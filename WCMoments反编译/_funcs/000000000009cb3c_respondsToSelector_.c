// respondsToSelector: @0x9cb3c

/* Function Stack Size: 0x18 bytes */

bool _YYImageWeakProxy::respondsToSelector_(ID param_1,SEL param_2,SEL param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_loadWeakRetained(param_1 + (long)_target);
  uVar1 = _objc_opt_respondsToSelector(uVar2,param_3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return uVar1 & 1;
}

