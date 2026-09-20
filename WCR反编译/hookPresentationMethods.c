// hookPresentationMethods @ 009220a4

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::hookPresentationMethods(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_presentViewController_animated_c_0269d2b0,puVar1,FUN_00922150,
             PTR_s_swizzled_presentViewController_a_026aa578);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_dismissViewControllerAnimated_co_0269cf98,puVar1,FUN_00922628,
             PTR_s_swizzled_dismissViewControllerAn_026aa580);
  return;
}

