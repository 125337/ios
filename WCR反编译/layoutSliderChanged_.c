// layoutSliderChanged: @ 018cd0fc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineChatToolbarViewController::layoutSliderChanged_
          (WCRefineChatToolbarViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  float in_s0;
  double dVar6;
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
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar6 = (double)in_s0;
  FUN_018cd42c();
  local_30 = dVar6;
  FUN_018c6f28();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (-1 < lVar2) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    lVar1 = local_38;
    if (lVar2 < lVar3) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectAtIndexedSubscript__0269cc78,lVar2);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,local_18,PTR_s_updateLayoutSliderValueButton_va_026b8050,local_28);
      lVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingLayoutPreviewKey__026b8058);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,local_18,PTR_s_setPendingLayoutPreviewValue__026b8060);
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutPreviewTimer_026b8068);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 == 0) {
        puVar5 = PTR__OBJC_CLASS___NSTimer_026ce210;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c88,PTR__OBJC_CLASS___NSTimer_026ce210,
                   PTR_s_timerWithTimeInterval_target_sel_026b1f80,local_18,
                   PTR_s_flushLayoutSliderPreview_026b8070,0,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLayoutPreviewTimer__026b8078);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutPreviewTimer_026b8068);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_addTimer_forMode__026ca4d0,IVar4,
                   *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
      goto LAB_018cd404;
    }
  }
  local_3c = 1;
LAB_018cd404:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

