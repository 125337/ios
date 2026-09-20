// addFieldTitle:value:placeholder:y: @ 01dfb2b0

/* Function Stack Size: 0x30 bytes */

ID WCRefineSuperFloatBaiduAPIViewController::addFieldTitle_value_placeholder_y_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,double param_6)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double in_d2;
  double dVar5;
  undefined8 uVar6;
  cfstringStruct *local_150;
  undefined *local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined *local_80;
  double local_78;
  double local_58;
  double local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar1 = local_28;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = param_6;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_58 = in_d2;
  _objc_alloc();
  dVar5 = local_58 - 40.0;
  uVar3 = 0x4034000000000000;
  uVar6 = 0x4036000000000000;
  dVar4 = local_50;
  FUN_01dfb238();
  local_a0 = uVar3;
  local_98 = dVar4;
  local_90 = dVar5;
  local_88 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,dVar4,dVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setText__026caa88,local_38);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  _objc_alloc();
  uVar3 = 0x4034000000000000;
  uVar6 = 0x4044000000000000;
  dVar4 = local_50 + 26.0;
  dVar5 = local_58 - 40.0;
  FUN_01dfb238();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,dVar4,dVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setBorderStyle__026aa180,3);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setPlaceholder__0269e9c8,local_48);
  if (local_40 == (cfstringStruct *)0x0) {
    local_150 = &::cf___;
  }
  else {
    local_150 = local_40;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setText__026caa88,local_150);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setClearButtonMode__026a64e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAutocorrectionType__026ac820,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAutocapitalizationType__026ac818,0);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = local_a8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

