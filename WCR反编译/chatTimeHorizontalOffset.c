// chatTimeHorizontalOffset @ 0207a390

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::chatTimeHorizontalOffset(WCRefineConfig *this,ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  float in_s0;
  undefined *local_40;
  cfstringStruct *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatTimePlacement_0269f080);
  pcVar2 = &cf_chatTimeHorizontalOffset;
  local_30 = IVar1;
  FUN_0207a12c(&cf_chatTimeHorizontalOffset,IVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    if (local_30 != 0) {
      puVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKey__0269e048,&cf_chatTimeHorizontalOffset);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_40 == (undefined *)0x0) {
      in_s0 = 0.0;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_40,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_floatValue_026a5b48);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return (double)in_s0;
}

