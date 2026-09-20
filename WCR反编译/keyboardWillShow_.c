// keyboardWillShow: @ 01d5c0e0

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::keyboardWillShow_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  double in_d0;
  double dVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  double in_d2;
  double dVar10;
  undefined8 in_d3;
  undefined8 uVar11;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ID local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  long local_c0;
  long local_b8;
  double local_b0;
  double local_88;
  double local_60;
  undefined8 uStack_58;
  double local_50;
  undefined8 uStack_48;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = in_d0;
  uStack_58 = in_d1;
  local_50 = in_d2;
  uStack_48 = in_d3;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar9 = uStack_58;
  dVar10 = dVar8;
  uVar11 = uStack_48;
  local_50 = dVar8;
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetMaxY(dVar8,uVar9,dVar10,uVar11);
  _CGRectGetMinY(local_60,uStack_58,local_50,uStack_48);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  local_88 = dVar8 - local_60;
  if (dVar8 - local_60 < 0.0) {
    local_88 = 0.0;
  }
  dVar8 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setKeyboardBottomInset__026c4968);
  lVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  lVar4 = local_38;
  local_b0 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  IVar6 = local_28;
  dVar8 = local_b0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_01d5c578;
  local_d0 = &DAT_0257a800;
  local_c0 = lVar7 << 0x10;
  local_b8 = lVar7;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  local_c8 = IVar6;
  local_110 = puVar1;
  local_108 = 0xc2000000;
  local_104 = 0;
  local_100 = FUN_01d5c5b8;
  local_f8 = &DAT_02579d00;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar8,0,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,lVar7 << 0x10,&local_e8,
             &local_110);
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_38,0);
  return;
}

