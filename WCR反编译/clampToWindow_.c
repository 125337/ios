// clampToWindow: @ 01ed76a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRToDoAdjustmentFloatingPanel::clampToWindow_(ID param_1,SEL param_2,ID param_3)

{
  double in_d0;
  double dVar1;
  double dVar2;
  double in_d1;
  double in_d2;
  double dVar3;
  double dVar4;
  undefined8 in_d3;
  undefined8 uVar5;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_208;
  double local_68;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_safeAreaInsets_026ca828);
    local_228 = 8.0;
    local_68 = 8.0;
    dVar3 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    dVar1 = local_68;
    dVar2 = in_d1;
    dVar4 = dVar3;
    uVar5 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar1,dVar2,dVar4,uVar5);
    dVar2 = local_228;
    dVar4 = dVar3;
    uVar5 = in_d3;
    _CGRectGetWidth(local_228,in_d1);
    local_230 = (dVar1 - dVar2) - 8.0;
    local_208 = in_d0;
    if (in_d0 < 8.0) {
      local_208 = 8.0;
    }
    dVar1 = local_208;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar1,local_68,dVar4,uVar5);
    dVar2 = local_228;
    _CGRectGetHeight(local_228,in_d1,dVar3,in_d3);
    local_220 = in_d2;
    if (in_d2 < 8.0) {
      local_220 = 8.0;
    }
    local_248 = (dVar1 - dVar2) - local_220;
    if (local_228 < 8.0) {
      local_228 = 8.0;
    }
    if (local_230 <= 8.0) {
      local_230 = 8.0;
    }
    if (local_230 <= local_228) {
      local_238 = local_230;
    }
    else {
      local_238 = local_228;
    }
    local_240 = in_d1;
    if (in_d1 < local_208) {
      local_240 = local_208;
    }
    if (local_248 <= local_208) {
      local_248 = local_208;
    }
    if (local_248 <= local_240) {
      local_250 = local_248;
    }
    else {
      local_250 = local_240;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,local_250,dVar3,in_d3,local_28,PTR_s_setFrame__026ca960);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

