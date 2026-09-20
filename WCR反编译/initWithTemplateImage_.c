// initWithTemplateImage: @ 01d40ad4

/* Function Stack Size: 0x18 bytes */

ID WCRefineScreenshotFrameEditorViewController::initWithTemplateImage_
             (ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_WCRefineScreenshotFrameEditorViewController_026d0090;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    _objc_storeStrong((long)local_18 + (long)_templateImage,local_28);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)local_18 + (long)_points);
    *(undefined8 *)((long)local_18 + (long)_points) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)local_18 + (long)_points2);
    *(undefined8 *)((long)local_18 + (long)_points2) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)local_18 + (long)_pointViews);
    *(undefined8 *)((long)local_18 + (long)_pointViews) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)local_18 + (long)_pointViews2);
    *(undefined8 *)((long)local_18 + (long)_pointViews2) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    *(undefined1 *)((long)local_18 + (long)_isAligned) = 0;
    *(undefined8 *)((long)local_18 + (long)_selectedPointIndex) = 0xffffffffffffffff;
    *(undefined1 *)((long)local_18 + (long)_isDoubleMode) = 0;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

