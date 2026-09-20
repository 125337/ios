// replaceMutableArray:withArray: @ 015224d8

/* Function Stack Size: 0x20 bytes */

void WCRefineTelegramGroupingStore::replaceMutableArray_withArray_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeAllObjects_0269d508);
    uVar2 = local_30;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
       uVar2 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObjectsFromArray__0269d540,local_30);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

