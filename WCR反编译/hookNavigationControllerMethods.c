// hookNavigationControllerMethods @ 00921150

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::hookNavigationControllerMethods(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_PushViewController_animated__0269cd40,puVar1,FUN_00921264,
             PTR_s_swizzled_PushViewController_anim_026aa558);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_popViewControllerAnimated__0269ede0,puVar1,FUN_009216b8,
             PTR_s_swizzled_popViewControllerAnimat_026aa560);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_popToViewController_animated__0269e4f8,puVar1,FUN_00921ba4,
             PTR_s_swizzled_popToViewController_ani_026aa568);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_popToRootViewControllerAnimated__026a6720,puVar1,FUN_00921de0,
             PTR_s_swizzled_popToRootViewController_026aa570);
  return;
}

