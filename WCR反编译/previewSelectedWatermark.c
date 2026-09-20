// previewSelectedWatermark @ 01fac918

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::previewSelectedWatermark(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
               *(undefined8 *)(param_1 + (long)_selectedImagePath));
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      dVar4 = _dispatch_time(0,300000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_18;
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_01facaa0;
      local_40 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_28;
      local_38 = IVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = puVar1;
      _dispatch_after(dVar4,puVar3,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

