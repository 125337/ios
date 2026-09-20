// msgBannerBgImageAlphaDark @ 020e491c

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::msgBannerBgImageAlphaDark(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  float in_s0;
  float local_64;
  double local_50;
  double local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  local_64 = in_s0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_30 = SVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,SVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_38 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_s_msgBannerBgImageAlpha_026ca360;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKey__0269e048);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_40 == (undefined *)0x0) {
      local_64 = 1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_floatValue_026a5b48);
    }
    local_48 = (double)local_64;
    if (local_48 < 0.0) {
      local_48 = 0.0;
    }
    if (1.0 < local_48) {
      local_48 = 0.0;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_64 = local_48._0_4_;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatValue_026a5b48);
  local_50 = (double)local_64;
  if (local_50 < 0.0) {
    local_50 = 0.0;
  }
  if (1.0 < local_50) {
    local_50 = 1.0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_50;
}

