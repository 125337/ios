// htmlKeyboardWillChange: @ 01f0013c

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListWebSettingsViewController::htmlKeyboardWillChange_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  double in_d0;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_1d8;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  ID local_168;
  double local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double local_b0;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = in_d0;
  local_50 = in_d1;
  local_48 = in_d2;
  local_40 = in_d3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = local_58;
  local_70 = local_50;
  local_60 = local_40;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  dVar6 = 0.0;
  local_88 = 0.0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b0 = dVar6;
  _CGRectGetMaxY(dVar6,local_50,local_48,local_40);
  _CGRectGetMinY(local_78,local_70);
  dVar6 = dVar6 - local_78;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_1d8 = dVar6;
  if (dVar6 <= local_88) {
    local_1d8 = local_88;
  }
  local_b8 = local_1d8;
  local_80 = local_1d8;
  uVar7 = 0x4034000000000000;
  local_90 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setKeyboardVisible__026c8158,20.0 < local_1d8);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlEditButton_026c8020);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keyboardVisible_026c80c8);
  pcVar1 = &cf_6ew;
  if ((IVar4 & 1) == 0) {
    pcVar1 = &cf_U_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setTitle_forState__026caab8,pcVar1,0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d8 = local_1d8;
  uStack_d0 = uVar7;
  uStack_c0 = local_60;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_c8 = local_80 + 20.0;
  uStack_f8 = uStack_d0;
  local_100 = local_d8;
  uStack_e8 = uStack_c0;
  IVar3 = local_28;
  local_f0 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = uStack_f8;
  local_120 = local_100;
  uStack_108 = uStack_e8;
  local_110 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,uStack_f8,local_f0,uStack_e8);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  uStack_138 = uStack_d0;
  local_140 = local_d8;
  uStack_128 = uStack_c0;
  local_130 = local_c8;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uStack_138;
  local_160 = local_140;
  uStack_148 = uStack_128;
  local_150 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,uStack_138,local_130,uStack_128);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keyboardVisible_026c80c8);
  puVar5 = PTR___dispatch_main_q_02578680;
  if ((IVar3 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_01f006ec;
    local_170 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = IVar3;
    _dispatch_async(puVar5,&local_188);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

