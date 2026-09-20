// saveImage:error: @ 015dab50

/* Function Stack Size: 0x20 bytes */

ID WCRGlobalPageBackgroundStore::saveImage_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID local_70;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ulong local_40;
  ID *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  local_38 = param_4;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_18 = 0;
    local_44 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_uniqueFileNameWithExtension__026b0ff0,&cf_png);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_20;
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_writeToFile_options_error__026a0a68,local_58,1,local_38);
    if ((uVar1 & 1) == 0) {
      local_70 = 0;
    }
    else {
      local_70 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

