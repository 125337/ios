// WCRefine_getAddBarButton @ 004c7dac

/* Function Stack Size: 0x10 bytes */

ID WCRefineMainFrameSearchButton::WCRefine_getAddBarButton(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_getAddBarButton_026a4040);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_004c7fcc();
  IVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  IVar3 = local_28;
  if ((IVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((IVar3 & 1) == 0) goto LAB_004c7f94;
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR___dispatch_main_q_02578680;
  local_38 = IVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_004c80c8;
  local_58 = &DAT_0257a740;
  local_40 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_38;
  local_50 = IVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar2;
  _dispatch_async(puVar1,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
LAB_004c7f94:
  IVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

