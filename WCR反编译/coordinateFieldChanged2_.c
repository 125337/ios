// coordinateFieldChanged2: @ 01d4e438

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::coordinateFieldChanged2_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  float in_s0;
  double dVar6;
  double in_d1;
  double dVar7;
  double local_188;
  double local_180;
  double local_168;
  double local_160;
  ID local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_b8;
  int local_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_80;
  double local_78;
  int local_6c;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
  uVar1 = (lVar2 + -2000) / 2;
  local_49 = (lVar2 + -2000) % 2 == 0;
  IVar3 = local_28;
  local_48 = uVar1;
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (uVar1 < IVar4) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar6 = (double)in_s0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    IVar3 = local_28;
    local_58 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = dVar6;
    local_60 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_49 & 1) == 0) {
      local_ac = 0;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_templateImage_026c46b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d0 = dVar6;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_d8 = local_58;
      local_180 = in_d1;
      if (local_58 <= in_d1) {
        local_180 = local_58;
      }
      local_e0 = local_180;
      local_b8 = local_180;
      if (local_180 <= (double)(long)local_ac) {
        local_188 = (double)(long)local_ac;
      }
      else {
        local_188 = local_180;
      }
      local_e8 = local_188;
      local_60 = local_188;
    }
    else {
      local_6c = 0;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_templateImage_026c46b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = dVar6;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_98 = local_58;
      local_160 = dVar6;
      if (local_58 <= dVar6) {
        local_160 = local_58;
      }
      local_a0 = local_160;
      local_78 = local_160;
      if (local_160 <= (double)(long)local_6c) {
        local_168 = (double)(long)local_6c;
      }
      else {
        local_168 = local_160;
      }
      local_a8 = local_168;
      local_68 = local_168;
      local_80 = dVar6;
    }
    puVar5 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,local_60,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328
              );
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar1 = local_48;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointViews2_026c4818);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (uVar1 < IVar4) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointViews2_026c4818);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      dVar6 = local_68;
      dVar7 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayPointFromImagePoint__026c47b8);
      (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar7,local_f0,PTR_s_setCenter__026ca8c0);
      _objc_storeStrong(&local_f0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsAligned__026c4828,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateAlignStatus_026c4830);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redrawCanvas_026c47d8);
    local_50 = 0;
  }
  else {
    local_50 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

