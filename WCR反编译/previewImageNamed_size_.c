// previewImageNamed:size: @ 01107c14

/* Function Stack Size: 0x20 bytes */

ID WCRefinePluginIconCatalog::previewImageNamed_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ID IVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  puVar2 = &local_28;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  uVar1 = local_28;
  FUN_01107cdc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_4,IVar3,PTR_s_previewImageNamed_size_color__026a6580,uVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

