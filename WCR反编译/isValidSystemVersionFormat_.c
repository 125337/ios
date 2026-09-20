// isValidSystemVersionFormat: @ 01f52fc0

/* Function Stack Size: 0x18 bytes */

bool WCRefineVersionController::isValidSystemVersionFormat_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &cf___d_____d___1_2__;
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf___d_____d___1_2__,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_48;
  uVar3 = local_48;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  local_28 = 0;
  local_20 = 0;
  local_30 = uVar3;
  local_18 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_numberOfMatchesInString_options__026a7d90,uVar1,0,0,uVar3);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return (uint)(puVar2 != (undefined *)0x0);
}

