// hookViewControllerMethods @ 009200a4

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::hookViewControllerMethods(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,PTR_s_viewDidLoad_0269cee8,
             puVar1,FUN_00920254,PTR_s_swizzled_viewDidLoad_026aa518);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,PTR_s_viewWillAppear__0269cd48,
             puVar1,FUN_009204e8,PTR_s_swizzled_viewWillAppear__026aa528);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,PTR_s_viewDidAppear__0269cd50,
             puVar1,FUN_009206e0,PTR_s_swizzled_viewDidAppear__026aa530);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_viewWillDisappear__0269eb30,puVar1,FUN_009209f0,
             PTR_s_swizzled_viewWillDisappear__026aa538);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_viewDidDisappear__0269de98,puVar1,FUN_00920be8,
             PTR_s_swizzled_viewDidDisappear__026aa540);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_viewWillLayoutSubviews_0269f360,puVar1,FUN_00920de0,
             PTR_s_swizzled_viewWillLayoutSubviews_026aa548);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_swizzleMethod_inClass_withImplem_026aa520,
             PTR_s_viewDidLayoutSubviews_0269de90,puVar1,FUN_00920f98,
             PTR_s_swizzled_viewDidLayoutSubviews_026aa550);
  return;
}

