// adjustLayout @ 01d50618

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::adjustLayout(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double in_d1;
  undefined8 in_d2;
  double in_d3;
  ID local_278;
  double local_270;
  double dStack_268;
  double local_250;
  double dStack_248;
  double local_228;
  double dStack_220;
  ID local_208;
  double local_200;
  double dStack_1f8;
  double local_1e0;
  double dStack_1d8;
  double local_1b8;
  double dStack_1b0;
  ID local_198;
  double local_190;
  double dStack_188;
  double local_170;
  double dStack_168;
  double local_148;
  double dStack_140;
  ID local_128;
  double local_120;
  double dStack_118;
  double local_100;
  double dStack_f8;
  double local_d8;
  double dStack_d0;
  ID local_b8 [6];
  double local_88;
  double local_60;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar6 = in_d2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  local_38 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  local_60 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar2 & 1) == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar5 = in_d3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    dVar4 = local_60 + in_d3 + 30.0;
    in_d3 = dVar5;
  }
  else {
    dVar4 = local_60 + 10.0;
  }
  IVar1 = local_28;
  local_88 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_b8[0] != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_frame_026ca640);
    dStack_d0 = local_88;
    dStack_118 = local_88;
    local_120 = dVar4;
    local_100 = dVar4;
    dStack_f8 = dStack_118;
    local_d8 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_setFrame__026ca960);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_128 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_frame_026ca640);
    dStack_188 = local_88 + 60.0;
    local_190 = dVar4;
    local_170 = dVar4;
    dStack_168 = dStack_188;
    local_148 = dVar4;
    dStack_140 = dStack_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setFrame__026ca960);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_198 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_198 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_frame_026ca640);
    dStack_1f8 = local_88 + 60.0;
    local_200 = dVar4;
    local_1e0 = dVar4;
    dStack_1d8 = dStack_1f8;
    local_1b8 = dVar4;
    dStack_1b0 = dStack_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setFrame__026ca960);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_208 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_208 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
    dStack_268 = local_88 + 100.0;
    local_270 = dVar4;
    local_250 = dVar4;
    dStack_248 = dStack_268;
    local_228 = dVar4;
    dStack_220 = dStack_268;
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setFrame__026ca960);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_278 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_278 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,local_88 + 100.0,local_278,PTR_s_setFrame__026ca960)
    ;
  }
  dVar5 = local_88 + 150.0;
  IVar1 = local_28;
  dVar4 = dVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar5,uVar6,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  iVar3 = 300;
  if ((((uint)IVar2 ^ 1) & 1) == 0) {
    iVar3 = 0x1e;
  }
  dVar5 = dVar5 + (double)iVar3;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar6 = local_38;
  FUN_01d42a7c();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,dVar5);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_278);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(local_b8,0);
  return;
}

