// openWatermarkPositionEditorForIndex:nightVariant: @ 01801204

/* Function Stack Size: 0x1c bytes */

void WCRefineAssistFunctionViewController::openWatermarkPositionEditorForIndex_nightVariant_
               (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  undefined *puVar1;
  undefined *local_38;
  byte local_29;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_29 = (byte)param_4;
  puVar1 = PTR_WCRefineWatermarkEditorViewController_026cf048;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWatermarkTag__026b5af8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEditNightVariant__026b5b00,local_29 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setModalPresentationStyle__0269d2a8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1);
  _objc_storeStrong(&local_38,0);
  return;
}

