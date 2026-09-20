// boundingBoxForPoints: @ 01652310

/* Function Stack Size: 0x18 bytes */

CGRect WCRSuperFloatCropViewController::boundingBoxForPoints_(ID param_1,SEL param_2,ID param_3)

{
  CGRect CVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double in_d1;
  double dVar5;
  double local_288;
  double local_278;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined4 local_ec;
  ulong local_e8;
  SEL local_e0;
  ID local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  uVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    dStack_b8 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_c0 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    local_d0 = *(double *)PTR__CGRectZero_025782f0;
    dStack_c8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
  }
  else {
    local_f8 = 1.7976931348623157e+308;
    local_100 = 1.7976931348623157e+308;
    local_260 = -1.7976931348623157e+308;
    local_108 = -1.7976931348623157e+308;
    local_110 = -1.7976931348623157e+308;
    _memset(auStack_158,0,0x40);
    uVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_220 != 0) {
      lVar3 = *local_148;
      local_228 = 0;
      do {
        do {
          if (*local_148 - lVar3 != 0) {
            _objc_enumerationMutation(*local_148 - lVar3,uVar2);
          }
          local_118 = *(undefined8 *)(local_150 + local_228 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_CGPointValue_0269e330);
          local_248 = local_260;
          if (local_f8 < local_260) {
            local_248 = local_f8;
          }
          local_f8 = local_248;
          local_250 = in_d1;
          if (local_100 < in_d1) {
            local_250 = local_100;
          }
          local_100 = local_250;
          local_258 = local_260;
          if (local_260 <= local_108) {
            local_258 = local_108;
          }
          local_108 = local_258;
          local_260 = in_d1;
          if (in_d1 <= local_110) {
            local_260 = local_110;
          }
          local_110 = local_260;
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_228 = 0;
      } while (local_220 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_278 = local_108 - local_f8;
    if (local_278 <= 1.0) {
      local_278 = 1.0;
    }
    local_288 = local_110 - local_100;
    if (local_288 <= 1.0) {
      local_288 = 1.0;
    }
    dVar4 = local_f8;
    dVar5 = local_100;
    FUN_0163f5dc();
    local_d0 = dVar4;
    dStack_c8 = dVar5;
    local_c0 = local_278;
    dStack_b8 = local_288;
  }
  local_ec = 1;
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  CVar1.field0_0x0.field1_0x8 = dStack_c8;
  CVar1.field0_0x0.field0_0x0 = local_d0;
  CVar1.field1_0x10.field0_0x0 = local_c0;
  CVar1.field1_0x10.field1_0x8 = dStack_b8;
  return CVar1;
}

