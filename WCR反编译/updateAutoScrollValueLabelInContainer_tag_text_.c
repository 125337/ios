// updateAutoScrollValueLabelInContainer:tag:text: @ 01a4f010

/* Function Stack Size: 0x28 bytes */

void WCRefineGeneralFunctionViewController::updateAutoScrollValueLabelInContainer_tag_text_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_40;
  undefined8 local_38;
  long_long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88,local_38);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

