// _WCRMomentsScheduledToggleTask @ 005850bc

byte _WCRMomentsScheduledToggleTask(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  byte local_41;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_005854b8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_00585460;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_pending);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_failed);
    if ((uVar1 & 1) != 0) goto LAB_00585260;
    local_11 = 0;
    local_38 = 1;
  }
  else {
LAB_00585260:
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_41 = (byte)uVar2;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,(local_41 ^ 1) & 1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_enabled);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_41 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257dec8,&cf_state);
    }
    FUN_0057dfd8(local_50);
    local_11 = 1;
    local_38 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_00585460:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

