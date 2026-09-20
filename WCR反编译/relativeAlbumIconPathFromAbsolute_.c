// relativeAlbumIconPathFromAbsolute: @ 01109bc4

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::relativeAlbumIconPathFromAbsolute_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  uVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_albumIconDirectoryPath_026aee90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_relativePathFromAbsolute_underDi_026aee88,uVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

