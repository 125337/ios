// msgBannerBgImageOffsetYLight @ 020e5ab0

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::msgBannerBgImageOffsetYLight(WCRefineConfig *this,ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d0;
  undefined *local_70;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
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
  puVar4 = local_28;
  local_38 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_s_msgBannerBgImageOffsetY_026ca370;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_objectForKey__0269e048);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    bVar1 = local_40 == (undefined *)0x0;
    if (bVar1) {
      local_70 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_70;
    }
    else {
      local_70 = local_40;
    }
    _objc_storeStrong(&local_38,local_70);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return in_d0;
}

