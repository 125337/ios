// colorDotWithHex:frame: @ 01e395c0

/* Function Stack Size: 0x38 bytes */

ID WCRefineSvgColorSchemeHistoryCell::colorDotWithHex_frame_
             (ID param_1,SEL param_2,ID param_3,CGRect param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined *local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  _objc_storeStrong(&local_48,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,local_28,local_20,local_18);
  IVar2 = local_38;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_colorFromHex__026acc68,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18 / 2.0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f28,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

