// saveButtonTapped @ 01fa3e50

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkEditorViewController::saveButtonTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double in_d2;
  double dVar8;
  double in_d3;
  long local_160;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  long local_f8;
  cfstringStruct *local_f0 [3];
  double local_d8;
  double local_d0;
  double local_a8;
  double local_98;
  double local_80;
  byte local_71;
  double local_50;
  double dStack_48;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar8 = in_d2;
  local_50 = in_d2;
  dStack_48 = in_d3;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editNightVariant_026c9d50);
  local_71 = false;
  if ((IVar3 & 1) != 0) {
    local_71 = *(long *)(local_28 + (long)_watermarkTag) < 100;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_watermarkContainerView),PTR_s_center_026ca560);
  in_d2 = in_d2 / local_50;
  local_80 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_watermarkContainerView),PTR_s_center_026ca560);
  dVar6 = local_50 / dStack_48;
  local_a8 = in_d2;
  local_98 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_watermarkContainerView),PTR_s_bounds_026ca548);
  dVar7 = dVar8;
  local_d0 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_originalWatermarkImage),PTR_s_size_026cab00);
  local_d8 = dVar8 / dVar7;
  local_f0[0] = &cf_videoWatermark;
  if (*(long *)(local_28 + (long)_watermarkTag) < 100) {
    local_f0[0] = &cf_screenshotWatermark;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (*(long *)(local_28 + (long)_watermarkTag) < 100) {
    local_160 = *(long *)(local_28 + (long)_watermarkTag);
  }
  else {
    local_160 = *(long *)(local_28 + (long)_watermarkTag) + -100;
  }
  local_f8 = local_160;
  pcVar1 = &cf_Night;
  if ((local_71 & 1) == 0) {
    pcVar1 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_100 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld__Scale);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_108 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld__CenterX
            );
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_110 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld__CenterY
            );
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_118 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf____ld__Position);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_120 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setValue_forKey__0269d300,puVar5,local_108);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar2 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setValue_forKey__0269d300,puVar4,local_110);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setValue_forKey__0269d300,puVar4,local_118);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,999);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setValue_forKey__0269d300,puVar4,local_120);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_saveConfig_0269e5d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,
             &PTR___NSConcreteGlobalBlock_0258d148);
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(local_f0,0);
  _objc_storeStrong(&local_38,0);
  return;
}

