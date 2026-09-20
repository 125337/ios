// voiceInputBreathingLightEffectiveHexForIndex:modeKey: @ 01a3af0c

/* Function Stack Size: 0x20 bytes */

ID WCRefineGeneralFunctionViewController::voiceInputBreathingLightEffectiveHexForIndex_modeKey_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_voiceInputBreathingLightOverride_026bc4e0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectForKey__0269e048,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_01a3b068();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  IVar1 = local_48;
  if (IVar2 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_voiceInputBreathingLightDefaultH_026bc4e8,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

