// layoutSliderEnded: @ 018cd734

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineChatToolbarViewController::layoutSliderEnded_
          (WCRefineChatToolbarViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  float in_s0;
  double dVar7;
  long local_48;
  undefined4 local_3c;
  long local_38;
  double local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar7 = (double)in_s0;
  FUN_018cd42c();
  IVar1 = local_18;
  local_30 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutPreviewTimer_026b8068);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLayoutPreviewTimer__026b8078,0);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)((float)local_30,local_28,PTR_s_setValue__026a51b0);
  FUN_018c6f28();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_28;
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (-1 < lVar3) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    lVar2 = local_38;
    if (lVar3 < lVar4) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRefineConfig_026cdf58;
      local_48 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setValue_forKey__0269d300,puVar6);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingLayoutPreviewKey__026b8058);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hapticGenerator_026b5f48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,local_18,PTR_s_updateLayoutSliderValueButton_va_026b8050,local_28);
      FUN_018ca37c();
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
      goto LAB_018cda50;
    }
  }
  local_3c = 1;
LAB_018cda50:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

