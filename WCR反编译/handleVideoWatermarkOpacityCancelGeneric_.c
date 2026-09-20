// handleVideoWatermarkOpacityCancelGeneric: @ 01804584

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::handleVideoWatermarkOpacityCancelGeneric_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_handleVideoWatermarkOpacityConfirm_ld_);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_handleVideoWatermarkOpacityCancel_ld_);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_setAssociatedObject(param_1,puVar2);
  _objc_setAssociatedObject(param_1,puVar3,0,1);
  return;
}

