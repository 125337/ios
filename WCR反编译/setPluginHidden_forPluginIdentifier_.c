// setPluginHidden:forPluginIdentifier: @ 01776a5c

/* Function Stack Size: 0x1c bytes */

void WCRefinePluginHubManager::setPluginHidden_forPluginIdentifier_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *local_50;
  undefined *local_38;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  bVar1 = (local_21 & 1) == 0;
  if (bVar1) {
    local_50 = (undefined *)0x0;
  }
  else {
    local_50 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_setOverrideValue_key_identifier__026b43c8,local_50,&cf_hidden,local_30);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

