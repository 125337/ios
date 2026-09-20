// adjustFloatingBackgroundMediaHorizontalOffset @ 019c68a4

/* Function Stack Size: 0x10 bytes */

void WCRefineFloatingTabBarSettingsViewController::adjustFloatingBackgroundMediaHorizontalOffset
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  uVar4 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___0f___0f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showFloatingBackgroundDayNightIn_026bad28,&cf_4ls_OPy,&cf_<h_e_,puVar3,
             PTR_s_handleFloatingBackgroundMediaHor_026bad20,in_x6,in_x7,in_d0,uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

