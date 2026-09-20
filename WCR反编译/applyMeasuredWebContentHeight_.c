// applyMeasuredWebContentHeight: @ 01e8ef34

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::applyMeasuredWebContentHeight_(ID param_1,SEL param_2,double param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  double dVar4;
  undefined *local_60;
  undefined *local_58;
  double local_50;
  undefined1 *local_48;
  double local_40;
  uint local_34;
  undefined1 *local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toDoCardSourceMode_026a8828);
  if (((puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) ||
      ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardHeight_026a8948), 0.0 < param_3)
      ) || (local_28 <= 1.0)) {
    local_34 = 1;
  }
  else {
    dVar4 = local_28;
    FUN_01e8f1cc(local_30);
    puVar3 = local_30;
    local_40 = dVar4;
    FUN_01e6f90c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    FUN_01e6ebac(local_30);
    bVar1 = 1.0 <= ABS(dVar4 - local_40);
    local_50 = dVar4;
    if (bVar1) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)(long)(local_40 * 100.0) / 100.0,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar2;
      FUN_01e6fbd4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,
                 &cf_toDoCardWebAutoHeightSignature);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,
                 &cf_toDoCardWebAutoRawHeight);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_60);
      _WCRefineToDoPersistHTMLLayoutForWork();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_refreshContainingLayoutAfterWebA_026c7320);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

