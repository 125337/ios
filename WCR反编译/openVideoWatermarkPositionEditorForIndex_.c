// openVideoWatermarkPositionEditorForIndex: @ 01804754

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::openVideoWatermarkPositionEditorForIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineWatermarkEditorViewController_026cf048;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWatermarkTag__026b5af8,local_28 + 100);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setModalPresentationStyle__0269d2a8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_30,1);
  _objc_storeStrong(&local_30,0);
  return;
}

