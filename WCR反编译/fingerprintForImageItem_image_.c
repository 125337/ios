// fingerprintForImageItem:image: @ 00959efc

/* Function Stack Size: 0x20 bytes */

ID WCRClipboardHistoryStore::fingerprintForImageItem_image_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePath);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00959fdc();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar3 = local_30;
  FUN_0095a110(local_30,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

