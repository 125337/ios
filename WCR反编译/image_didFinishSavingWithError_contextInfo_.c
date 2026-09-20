// image:didFinishSavingWithError:contextInfo: @ 0167b8f4

/* Function Stack Size: 0x28 bytes */

void WCRSuperFloatCropViewController::image_didFinishSavingWithError_contextInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4,void *param_5)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = PTR_WCRefineHelper_026ce000;
  bVar1 = false;
  if (local_30 == (cfstringStruct *)0x0) {
    local_78 = &cf__OX_0RvQ;
  }
  else {
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_70 = local_40;
    if (local_40 == (cfstringStruct *)0x0) {
      local_70 = &cf_OX_1Y_;
    }
    local_78 = local_70;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_78);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissCropWindow_026b2460);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

