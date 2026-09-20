// absoluteAlbumIconPathFromStored: @ 01109c88

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::absoluteAlbumIconPathFromStored_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar4 = local_18;
  uVar2 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_albumIconDirectoryPath_026aee90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_absolutePathFromStored_underDire_026a1bd8,uVar2)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  IVar4 = local_18;
  uVar2 = local_28;
  if (IVar3 == 0) {
    FUN_011089a8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_absolutePathFromStored_underDire_026a1bd8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_30 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar4 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar4;
}

