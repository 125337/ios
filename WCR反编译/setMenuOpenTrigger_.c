// setMenuOpenTrigger: @ 016115fc

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setMenuOpenTrigger_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  long_long local_90;
  long_long local_88;
  
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ballAppearance_026b18a0);
  if (IVar3 == 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = 2;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar4,&cf_menuOpenTrigger);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setBallGestureAction_forKey__026b1950,&cf_wcr_sf_drag_ball,
               &cf_longPress);
  }
  else {
    local_88 = param_3;
    if (2 < (long)param_3) {
      local_88 = 2;
    }
    if ((long)local_88 < 1) {
      local_90 = 0;
    }
    else {
      local_90 = local_88;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar4,&cf_menuOpenTrigger);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    bVar2 = false;
    if (local_90 == 2) {
      IVar3 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_ballGestureActionForKey__026b1958,&cf_longPress);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = IVar5 == 0;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_setBallGestureAction_forKey__026b1950,&cf_wcr_sf_drag_ball,
                 &cf_longPress);
    }
  }
  return;
}

