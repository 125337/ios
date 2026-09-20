// clearOwnedOfficialController: @ 0112f6b0

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickRemarkEditor::clearOwnedOfficialController_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_38 = puVar1;
    _objc_getAssociatedObject(local_28,&DAT_028e357e);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_40 = lVar2;
    _objc_getAssociatedObject(local_28,&DAT_028e357f);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    if (local_40 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObserver__0269f128,local_40);
    }
    if (local_48 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObserver__0269f128,local_48);
    }
    _objc_setAssociatedObject(local_28,&DAT_028e357e);
    _objc_setAssociatedObject(local_28,&DAT_028e357f,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028e357a,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028e357b,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028e357c,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028e357d,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028e3580,0,1);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

