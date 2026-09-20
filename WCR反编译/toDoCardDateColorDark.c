// toDoCardDateColorDark @ 0217f240

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::toDoCardDateColorDark(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  SEL SVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  uVar2 = DAT_02323f60;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_28;
  local_30 = param_1;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar3);
  if (local_38 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_3c = 1;
  }
  else {
    local_98 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_98 == (undefined *)0x0;
    local_48 = local_98;
    if (bVar1) {
      local_50 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_98;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

