// douyinImageDownloadCandidatesForURL: @ 010375dc

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinImageDownloadCandidatesForURL_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_50;
  byte local_41;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_20;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_douyinImageURLLooksWatermarkTemp_026adb38,local_30);
    local_41 = (byte)IVar3;
    if ((IVar3 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_http);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_30);
      }
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_rewrittenDouyinImageURLWithoutWa_026adf38,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 != 0) {
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_http);
      if ((IVar3 & 1) != 0) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_50);
        if (((ulong)puVar2 & 1) == 0) {
          IVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_douyinImageURLLooksWatermarkTemp_026adb38,local_50);
          if ((IVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_50);
          }
        }
      }
    }
    if ((local_41 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_http);
      if ((uVar1 & 1) != 0) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_30);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_30);
        }
      }
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_http);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_30);
      }
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_34 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

