// redEnvelopMessageNotifyEnabled @ 0205224c

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::redEnvelopMessageNotifyEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_58;
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_30 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_boolValue_026ca540);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (uint)((byte)local_58 & 1);
}

