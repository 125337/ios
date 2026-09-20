// nativeSVGNameForMenuType: @ 010f66dc

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::nativeSVGNameForMenuType_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e34a8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025856c0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  IVar2 = DAT_028e34a0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,param_3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

