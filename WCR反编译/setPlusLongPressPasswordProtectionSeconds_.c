// setPlusLongPressPasswordProtectionSeconds: @ 01113e90

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::setPlusLongPressPasswordProtectionSeconds_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 local_28;
  
  local_28 = param_3;
  if ((long)param_3 < 0) {
    local_28 = 0;
  }
  if (600 < (long)local_28) {
    local_28 = 600;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistAndPublish_026aef58);
  return;
}

