// initWithFrame:textContainer: @ 0195a528

/* Function Stack Size: 0x38 bytes */

ID WCRFileEditorTextView::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 *local_58;
  undefined *local_50;
  undefined8 local_48;
  SEL local_40;
  ID *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = (ID *)param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  _objc_storeStrong(&local_48,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  local_58 = local_38;
  local_38 = (ID *)0x0;
  ppuVar2 = &local_58;
  local_50 = PTR_WCRFileEditorTextView_026cfd10;
  _objc_msgSendSuper2(local_30,local_28,local_20,local_18,ppuVar2,
                      PTR_s_initWithFrame_textContainer__026b9c90,local_48);
  local_38 = (ID *)ppuVar2;
  _objc_storeStrong(&local_38);
  pIVar1 = local_38;
  if ((undefined8 **)local_38 != (undefined8 **)0x0) {
    *(undefined1 *)((long)local_38 + (long)_wcrSuppressAutoScroll) = 1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return (ID)(undefined8 **)pIVar1;
}

