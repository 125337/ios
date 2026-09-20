// redPacketTransferFixedColorDarkOther @ 020a509c

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::redPacketTransferFixedColorDarkOther(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02324340,0,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setRedPacketTransferFixedColorDa_026c8848,puVar2);
    puVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    _objc_storeStrong(&local_40,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

