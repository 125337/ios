// msgBannerBgImageScaleDark @ 020e5078

/* Function Stack Size: 0x10 bytes */

double WCRefineConfig::msgBannerBgImageScaleDark(ID param_1,SEL param_2)

{
  double dVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  double local_40;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323dc8;
  dVar6 = DAT_02323dc8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  fVar5 = SUB84(dVar6,0);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_30 = SVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,SVar2);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    fVar5 = 1.0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatValue_026a5b48);
  local_40 = (double)fVar5;
  if (local_40 < dVar1) {
    local_40 = dVar1;
  }
  if (5.0 < local_40) {
    local_40 = 5.0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_40;
}

