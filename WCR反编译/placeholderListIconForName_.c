// placeholderListIconForName: @ 01fbb004

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::placeholderListIconForName_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    _objc_storeStrong(&local_30,&cf_arrow_triangle_2_circlepath);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isBubbleRole_026c9f68);
    if ((IVar2 & 1) == 0) {
      _objc_storeStrong(&local_30,&cf_paintpalette);
    }
    else {
      _objc_storeStrong(&local_30,&cf_bubble_left_and_bubble_right);
    }
  }
  puVar3 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4032000000000000,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
             PTR_s_configurationWithPointSize_weigh_026ca588,4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed_withConfigurati_026a3270,
             local_30,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_imageWithTintColor_renderingMode_026a31a0,puVar3,1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar7 = 0x403c000000000000;
  uVar6 = 0x403c000000000000;
  FUN_01fb648c();
  puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
  local_50 = uVar6;
  uStack_48 = uVar7;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,uStack_48);
  puVar3 = local_40;
  local_58 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar3;
  uStack_60 = uStack_48;
  local_68 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_imageWithActions__026ca688);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar4;
}

