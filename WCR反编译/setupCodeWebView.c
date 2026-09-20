// setupCodeWebView @ 0196efdc

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupCodeWebView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_makeWebViewBlack__026ba188,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0x4053000000000000;
  local_38 = IVar2;
  FUN_01961300();
  IVar2 = local_38;
  local_80 = uVar5;
  uStack_78 = uVar6;
  local_70 = uVar7;
  uStack_68 = uVar8;
  local_58 = uVar5;
  uStack_50 = uVar6;
  local_48 = uVar7;
  uStack_40 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_78;
  local_a0 = local_80;
  uStack_88 = uStack_68;
  local_90 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,uStack_78,local_70,uStack_68);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uStack_b8 = uStack_50;
  local_c0 = local_58;
  uStack_a8 = uStack_40;
  local_b0 = local_48;
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uStack_b8;
  local_e0 = local_c0;
  uStack_c8 = uStack_a8;
  local_d0 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,uStack_b8,local_b0,uStack_a8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  FUN_01963934();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_kind_026a27e8);
  if (IVar2 == 10) {
    _objc_storeStrong(0,&local_e8,&cf_text);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_loadHighlightedSourceWithMode__026ba110,local_e8);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_38,0);
  return;
}

