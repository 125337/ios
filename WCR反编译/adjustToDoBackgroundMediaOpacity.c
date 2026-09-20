// adjustToDoBackgroundMediaOpacity @ 01ecd2c0

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineToDoListSettingsViewController::adjustToDoBackgroundMediaOpacity
          (WCRefineToDoListSettingsViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toDoCardBackgroundMediaOpacityLi_026c7090);
  uVar4 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardBackgroundMediaOpacityDa_026c7088);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2f___2f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showDayNightFloatAlertWithTitle__026c7c18,&cf_fHeg,&::cf_newline_s_,puVar3,
             PTR_s_confirmToDoBackgroundMediaOpacit_026c7c60,in_x6,in_x7,in_d0,uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

