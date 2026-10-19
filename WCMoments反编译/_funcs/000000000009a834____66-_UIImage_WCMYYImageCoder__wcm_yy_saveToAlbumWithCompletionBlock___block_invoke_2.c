// ___66-[UIImage(WCMYYImageCoder)_wcm_yy_saveToAlbumWithCompletionBlock:]_block_invoke_2 @0x9a834

void ___66__UIImage_WCMYYImageCoder__wcm_yy_saveToAlbumWithCompletionBlock___block_invoke_2
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    local_34 = 1;
  }
  else {
    iVar2 = _pthread_main_np();
    puVar1 = PTR___dispatch_main_q_00110528;
    if (iVar2 == 0) {
      _objc_retainAutoreleaseReturnValue();
      uVar3 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_70 = PTR___NSConcreteStackBlock_001104f0;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = 
      ___66__UIImage_WCMYYImageCoder__wcm_yy_saveToAlbumWithCompletionBlock___block_invoke_3;
      local_58 = &___block_descriptor_56_e8_32s40s48bs_e5_v8__0l;
      local_40 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_50 = (*(code *)PTR__objc_retain_00110460)(local_20);
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_28);
      _dispatch_async(uVar3,&local_70);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_40,0);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_20,local_28);
    }
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

