// initWithDataItem:cellView: @ 0059752c

/* Function Stack Size: 0x20 bytes */

ID WCRefineMomentsMediaDownloader::initWithDataItem_cellView_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRefineMomentsMediaDownloader_026cf8b0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    _objc_storeStrong(local_18 + 2,local_28);
    _objc_storeWeak(local_18 + 9,local_30);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined8 *)local_18[3];
    local_18[3] = (ID)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined8 *)local_18[4];
    local_18[4] = (ID)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_18[5] = 0;
    local_18[6] = 0;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

