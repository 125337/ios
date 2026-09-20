// showUpdateLogFromVersion:toVersion: @ 01f45f2c

/* Function Stack Size: 0x20 bytes */

void WCRefineUpdateLogView::showUpdateLogFromVersion_toVersion_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (undefined *)0x0;
  if ((local_28 == 0) || (local_30 == 0)) {
    if (local_30 == 0) {
      _objc_storeStrong(&local_38,&cf_fee_);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_fee_);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_fee_);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showUpdateLogWithTitle__026c8ed8,local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

