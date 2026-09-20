// FUN_008c2ff4 @ 008c2ff4

byte FUN_008c2ff4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (lVar1 = DAT_028cde80,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cde80,PTR_s_length_0269cca0), lVar1 == 0)) {
    local_11 = 0;
  }
  else {
    _objc_setAssociatedObject(local_20,&DAT_028ce010,DAT_028cde80,1);
    lVar1 = local_20;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
               DAT_028cde98);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028ce016,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_20;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028ce017,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_setAssociatedObject(local_20,&DAT_028ce039,DAT_028cde88,3);
    lVar1 = local_20;
    pcVar3 = &cf_setM_uiVoiceTime_;
    _NSSelectorFromString();
    FUN_008be28c(lVar1,pcVar3,DAT_028cde98);
    lVar1 = local_20;
    pcVar3 = &cf_setM_uiVoiceFormat_;
    _NSSelectorFromString();
    FUN_008be28c(lVar1,pcVar3,4);
    _WCRefineClearStagedVoiceForwardPayload();
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

