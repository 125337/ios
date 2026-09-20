// toolbarRealtimePreviewView @ 018c8280

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatToolbarViewController::toolbarRealtimePreviewView(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 in_d3;
  double dVar9;
  cfstringStruct *local_140;
  double local_100;
  cfstringStruct *local_d8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  dVar6 = 220.0;
  local_40 = 220.0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = dVar6;
  _CGRectGetWidth(dVar6,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_100 = dVar6;
  if (dVar6 <= local_40) {
    local_100 = local_40;
  }
  local_70 = local_100;
  local_38 = local_100;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_48 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  dVar6 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_78 = (double)(long)(((local_100 * dVar6) / 100.0) * 10.0) / 10.0;
  _objc_alloc();
  dVar9 = local_78 + 24.0;
  uVar8 = 0;
  uVar7 = 0;
  dVar6 = local_38;
  FUN_018c86b0();
  local_a0 = uVar7;
  local_98 = uVar8;
  local_90 = dVar6;
  local_88 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar8,dVar6,dVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_140 = &cf_WCRChatToolbarView;
  local_80 = puVar3;
  _NSClassFromString();
  bVar1 = local_140 == (cfstringStruct *)0x0;
  local_a8 = local_140;
  if (bVar1) {
    local_140 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc();
    uVar7 = 0;
    uVar8 = 0x4028000000000000;
    dVar6 = local_38;
    dVar9 = local_78;
    FUN_018c86b0();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar8,dVar6,dVar9,local_140,PTR_s_initWithFrame__026ca6e8);
    local_d8 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_140;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRealtimePreviewToolbar__026b7f40,local_b0)
  ;
  puVar3 = PTR_s_reloadWithActions_inputToolView__0269f158;
  pcVar5 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_respondsToSelector__026ca818,
             PTR_s_reloadWithActions_inputToolView__0269f158);
  pcVar2 = local_b0;
  if (((ulong)pcVar5 & 1) != 0) {
    FUN_018c6cd0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar3,pcVar5,0);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
  }
  puVar3 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

