// FUN_0085c42c @ 0085c42c

void FUN_0085c42c(void)

{
  undefined8 local_18;
  
  if (DAT_028cd2a8 == 1) {
    local_18 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspect_02578550;
    (*(code *)PTR__objc_retain_02578638)();
  }
  else if (DAT_028cd2a8 == 2) {
    local_18 = *(undefined8 *)PTR__AVLayerVideoGravityResize_02578548;
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    local_18 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_02578558;
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

