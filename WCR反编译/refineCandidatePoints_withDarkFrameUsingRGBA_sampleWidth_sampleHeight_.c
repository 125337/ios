// refineCandidatePoints:withDarkFrameUsingRGBA:sampleWidth:sampleHeight: @ 01d52574

/* Function Stack Size: 0x30 bytes */

bool WCRefineScreenshotFrameEditorViewController::
     refineCandidatePoints_withDarkFrameUsingRGBA_sampleWidth_sampleHeight_
               (ID param_1,SEL param_2,CGPoint *param_3,const_char__ param_4,long_long param_5,
               long_long param_6)

{
  long lVar1;
  const_char__ pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  long local_168;
  long local_158;
  long local_150;
  long local_148;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  byte local_21;
  
  dVar8 = DAT_02323c70;
  if ((((param_3 == (CGPoint *)0x0) || (param_4 == (const_char__)0x0)) || ((long)param_5 < 3)) ||
     ((long)param_6 < 3)) {
    local_21 = 0;
  }
  else {
    local_1d0 = param_3[2].field0_0x0;
    if (param_3->field0_0x0 < local_1d0) {
      local_1d0 = param_3->field0_0x0;
    }
    local_1d8 = param_3[1].field0_0x0;
    if (local_1d8 < param_3[3].field0_0x0) {
      local_1d8 = param_3[3].field0_0x0;
    }
    local_1e0 = param_3[1].field1_0x8;
    if (param_3->field1_0x8 < local_1e0) {
      local_1e0 = param_3->field1_0x8;
    }
    local_1e8 = param_3[2].field1_0x8;
    if (local_1e8 < param_3[3].field1_0x8) {
      local_1e8 = param_3[3].field1_0x8;
    }
    dVar6 = local_1d8 - local_1d0;
    dVar7 = local_1e8 - local_1e0;
    if ((dVar6 < 20.0) || (dVar7 < 20.0)) {
      local_21 = 0;
    }
    else {
      local_1d0 = local_1d0 - DAT_02323c70 * dVar6;
      FUN_01d524d0(local_1d0,0,(double)(long)(param_5 - 1));
      lVar3 = (long)local_1d0;
      local_1d8 = local_1d8 + dVar8 * dVar6;
      FUN_01d524d0(local_1d8,0,(double)(long)(param_5 - 1));
      lVar4 = (long)local_1d8;
      local_1e0 = local_1e0 - DAT_02323cc0 * dVar7;
      FUN_01d524d0(local_1e0,0,(double)(long)(param_6 - 1));
      lVar5 = (long)local_1e0;
      local_1e8 = local_1e8 + dVar7 * 0.7;
      FUN_01d524d0(local_1e8,0,(double)(long)(param_6 - 1));
      local_150 = (long)local_1e8;
      lVar1 = (lVar4 - lVar3) + 1;
      if ((0x13 < lVar1) && (lVar5 < local_150)) {
        local_120 = 0x7fffffffffffffff;
        local_128 = 0x7fffffffffffffff;
        for (local_130 = lVar5; local_130 <= local_150; local_130 = local_130 + 1) {
          local_138 = 0;
          for (local_148 = lVar3; local_148 <= lVar4; local_148 = local_148 + 1) {
            pcVar2 = param_4;
            FUN_01d52ce8(param_4,local_130 * param_5 + local_148);
            if (((ulong)pcVar2 & 1) != 0) {
              local_138 = local_138 + 1;
            }
          }
          if (0.3 <= (double)local_138 / (double)lVar1) {
            local_120 = local_130;
            break;
          }
        }
        do {
          if (local_150 < lVar5) goto LAB_01d52a78;
          local_158 = 0;
          for (local_168 = lVar3; local_168 <= lVar4; local_168 = local_168 + 1) {
            pcVar2 = param_4;
            FUN_01d52ce8(param_4,local_150 * param_5 + local_168);
            if (((ulong)pcVar2 & 1) != 0) {
              local_158 = local_158 + 1;
            }
          }
          if (0.3 <= (double)local_158 / (double)lVar1) {
            local_128 = local_150;
            goto LAB_01d52a78;
          }
          local_150 = local_150 + -1;
        } while( true );
      }
      local_21 = 0;
    }
  }
LAB_01d52cd0:
  return (uint)local_21;
LAB_01d52a78:
  if (((local_120 == 0x7fffffffffffffff) || (local_128 == 0x7fffffffffffffff)) ||
     (local_128 <= local_120)) {
    local_21 = 0;
  }
  else {
    local_1f8 = (double)(local_128 - local_120);
    if ((local_1f8 < dVar7 * DAT_02323f60) || (dVar7 * DAT_023397b0 < local_1f8)) {
      local_21 = 0;
    }
    else {
      if (dVar6 < local_1f8) {
        local_1f8 = dVar6;
      }
      local_1f8 = local_1f8 * DAT_0232c6c0;
      FUN_01d524d0(local_1f8,0x4000000000000000,0x4024000000000000);
      dVar8 = (double)local_120 + local_1f8;
      FUN_01d524d0(dVar8,0,(double)(long)(param_6 - 1));
      local_1f8 = (double)local_128 - local_1f8;
      FUN_01d524d0(local_1f8,0,(double)(long)(param_6 - 1));
      if (dVar8 < local_1f8) {
        dVar8 = dVar8 - (param_3->field1_0x8 + param_3[1].field1_0x8) / 2.0;
        local_1f8 = local_1f8 - (param_3[2].field1_0x8 + param_3[3].field1_0x8) / 2.0;
        param_3->field1_0x8 = param_3->field1_0x8 + dVar8;
        param_3[1].field1_0x8 = param_3[1].field1_0x8 + dVar8;
        param_3[2].field1_0x8 = param_3[2].field1_0x8 + local_1f8;
        param_3[3].field1_0x8 = param_3[3].field1_0x8 + local_1f8;
        local_21 = 1;
      }
      else {
        local_21 = 0;
      }
    }
  }
  goto LAB_01d52cd0;
}

