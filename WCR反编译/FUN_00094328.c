// FUN_00094328 @ 00094328

undefined * FUN_00094328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48 [3];
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineAvatarFrameLibraryViewController_026ce218;
  _objc_alloc_init();
  uVar2 = 9;
  local_30 = puVar1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48[0],PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setValue_forKey__0269d300,local_50,&cf__framesDirectory);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_importZipFileAtPath__0269e238,local_28);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return puVar1;
}

