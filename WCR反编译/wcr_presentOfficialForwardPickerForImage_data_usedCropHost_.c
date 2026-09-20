// wcr_presentOfficialForwardPickerForImage:data:usedCropHost: @ 01673444

/* Function Stack Size: 0x28 bytes */

bool WCRSuperFloatCropViewController::wcr_presentOfficialForwardPickerForImage_data_usedCropHost_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool *param_5)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_50;
  undefined8 *local_48;
  bool *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar1,param_4);
  if (param_5 != (bool *)0x0) {
    *(undefined1 *)param_5 = 0;
  }
  local_40 = param_5;
  FUN_01673618();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if ((puVar1 == (undefined8 *)0x0) &&
     (_objc_storeStrong(&local_48,local_20), local_40 != (bool *)0x0)) {
    *(undefined1 *)local_40 = 1;
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_buildImageMessageWrapForSend_026b2670,local_30,local_38,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar2;
  if (IVar2 != 0) {
    FUN_01673b28(0x403e000000000000,IVar2);
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_startOfficialForwardForMessa_026acf90,local_50,
               local_48);
    if (((ulong)puVar3 & 1) != 0) goto LAB_016735d0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardImage_fromViewControl_026a1850,local_30,
             local_48);
LAB_016735d0:
  local_11 = 1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

