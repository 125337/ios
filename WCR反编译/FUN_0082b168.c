// FUN_0082b168 @ 0082b168

void FUN_0082b168(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_18;
  
  lVar1 = DAT_028ccfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccfc8,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == 1) {
    local_18 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspect_02578550;
    (*(code *)PTR__objc_retain_02578638)();
  }
  else if (lVar2 == 2) {
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

