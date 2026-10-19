// -[UIImage(WCMYYImageCoder)_wcm_yy_saveToAlbumWithCompletionBlock:] @0x9a60c

void __UIImage_WCMYYImageCoder__wcm_yy_saveToAlbumWithCompletionBlock__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _dispatch_get_global_queue(0,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_38 = (*(code *)PTR__objc_retain_00110460)(local_18);
  local_30 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _dispatch_async(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

