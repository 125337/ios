// wcr_label:font:color: @ 01d984a0

/* Function Stack Size: 0x28 bytes */

ID WCRefineSessionStatsBoardView::wcr_label_font_color_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFont__026ca958,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextColor__026caa98,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNumberOfLines__026ca9d8,0);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

