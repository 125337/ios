// themeFilterPromptCancel: @ 01722ce0

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropLogViewController::themeFilterPromptCancel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_setAssociatedObject(local_18,&DAT_028e3f7c,0,1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_narrowPromptFromSegment_026b3b50);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterNarrow__026b3b10,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFilterThemeText__026b3b18,&::cf___);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNarrowPromptFromSegment__026b3b28,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
  _objc_storeStrong(&local_28,0);
  return;
}

