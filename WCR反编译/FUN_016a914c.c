// FUN_016a914c @ 016a914c

void FUN_016a914c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  _objc_alloc_init();
  uVar1 = DAT_028e3d60;
  DAT_028e3d60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pdVar3 = _dispatch_queue_create
                     ("com.qimiao.WCRefine.missingImageCache",
                      (dispatch_queue_attr_t)PTR___dispatch_queue_attr_concurrent_02578688);
  uVar1 = DAT_028e3d68;
  DAT_028e3d68 = pdVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

