// wcr_sheetShift: @ 01dd293c

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsViewController::wcr_sheetShift_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  double dVar4;
  double dVar5;
  double local_a8;
  double local_50;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  dVar4 = 86400.0;
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar3 = local_18;
  if (lVar1 == 0xc9) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetStart_026c55f0);
    dVar5 = dVar4 + 86400.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetEnd_026c5608);
    if (dVar5 <= dVar4 + 86400.0) {
      local_50 = -518400.0;
    }
    else {
      local_50 = 86400.0;
    }
    dVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_sheetStart_026c55f0);
    (*(code *)PTR__objc_msgSend_02578628)(dVar4 + local_50,IVar3,PTR_s_setSheetStart__026c55e0);
    IVar3 = local_18;
    lVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetStart_026c55f0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_sheetDay__026c55f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_w);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_18;
    dVar5 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetEnd_026c5608);
    if (dVar4 + 86400.0 <= dVar5 + 86400.0) {
      local_a8 = -518400.0;
    }
    else {
      local_a8 = 86400.0;
    }
    dVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_sheetEnd_026c5608);
    dVar4 = dVar4 + local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setSheetEnd__026c55e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetEnd_026c5608);
    dVar5 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetStart_026c55f0);
    if (dVar4 < dVar5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetStart_026c55f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSheetEnd__026c55e8);
    }
    IVar3 = local_18;
    lVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetEnd_026c5608);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_sheetDay__026c55f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_bk);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

