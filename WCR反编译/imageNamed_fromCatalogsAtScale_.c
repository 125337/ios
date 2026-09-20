// imageNamed:fromCatalogsAtScale: @ 015ce380

/* Function Stack Size: 0x20 bytes */

ID WCRefineWechatThemeStore::imageNamed_fromCatalogsAtScale_
             (ID param_1,SEL param_2,ID param_3,double param_4)

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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_carCatalogs_026b0f50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_4,IVar3,PTR_s_imageNamed_inCatalogs_atScale__026b0f40,uVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

