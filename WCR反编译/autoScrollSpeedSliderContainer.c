// autoScrollSpeedSliderContainer @ 01a4f11c

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::autoScrollSpeedSliderContainer(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_d0;
  undefined8 uVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar2 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,DAT_02323e60,0x3ff8000000000000,param_1,
             PTR_s_autoScrollSliderContainerWithVal_026bcb58,0x1731f,0x17320,puVar1,
             PTR_s_autoScrollSpeedSliderChanged__026bcb50,in_x6,in_x7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return param_1;
}

