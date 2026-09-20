// FUN_015032a8 @ 015032a8

void FUN_015032a8(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  undefined *puVar8;
  undefined *puVar9;
  FILE *pFVar10;
  ulong uVar11;
  undefined *local_310;
  uint local_308;
  uint local_304;
  int local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2f4;
  uchar *local_2f0;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  long local_2d8;
  int *local_2d0;
  undefined1 auStack_2c8 [16];
  uint local_2b8;
  uint local_2b4;
  FILE *local_2a8;
  ulong local_2a0;
  int local_294;
  FILE *local_290;
  FILE *local_288;
  ulong local_280;
  FILE *local_278;
  int local_270;
  uint local_26c;
  int local_268;
  int local_264;
  char *local_260;
  ulong local_258;
  undefined1 auStack_24c [4];
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [4];
  undefined1 auStack_240 [508];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_260 = (char *)0x0;
  _objc_storeStrong(&local_260,param_1);
  pcVar4 = local_260;
  local_26c = param_4;
  local_268 = param_3;
  local_264 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
  pcVar5 = local_260;
  if (pcVar4 == (char *)0x0) {
    local_258 = 0;
    local_270 = 1;
    goto LAB_01503a44;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_fileSystemRepresentation_026a95c0);
  local_278 = _fopen(pcVar5,"rb");
  if (local_278 == (FILE *)0x0) {
    local_258 = 0;
    local_270 = 1;
    goto LAB_01503a44;
  }
  local_280 = 0;
  iVar3 = _fseeko(local_278,0,2);
  if ((iVar3 == 0) && (local_288 = (FILE *)_ftello(local_278), -1 < (long)local_288)) {
    local_294 = 0;
    local_2a0 = 0xffffffffffffffff;
    pFVar6 = local_278;
    local_290 = local_288;
    FUN_0150bdc4(local_278,&local_294,&local_2a0);
    local_2a8 = pFVar6;
    if ((pFVar6 <= local_290) &&
       ((0x1f < (ulong)((long)local_290 - (long)pFVar6) && (local_294 == -0x1120531)))) {
      pFVar10 = (FILE *)0x0;
      if (local_2a0 != 0xffffffffffffffff) {
        if ((ulong)((long)local_290 - (long)pFVar6) < local_2a0) goto LAB_01503a00;
        pFVar10 = (FILE *)(pFVar6->_ubuf + (local_2a0 - 0x74));
        local_290 = pFVar10;
      }
      pFVar7 = local_278;
      FUN_0150c198(pFVar10,local_278,pFVar6,auStack_2c8,0x20);
      if ((((((ulong)pFVar7 & 1) != 0) && (local_2d0 = &(local_2a8->_bf)._size, local_2b8 != 0)) &&
          (local_2b8 < 0x201)) &&
         ((local_2b4 < 0x100001 && ((ulong)local_2b4 <= (ulong)((long)local_290 - (long)local_2d0)))
         )) {
        local_2d8 = (long)local_2d0 + (ulong)local_2b4;
        local_2dc = 0;
        local_2e0 = 0;
        local_2e4 = 0;
        while( true ) {
          if (((local_2b8 <= local_2e4) || ((ulong)(local_2d8 - (long)local_2d0) < 8)) ||
             (pFVar6 = local_278,
             FUN_0150c198((local_2d8 - (long)local_2d0) - 8,local_278,local_2d0,&local_30,8),
             ((ulong)pFVar6 & 1) == 0)) goto LAB_01503614;
          local_2e8 = local_2c;
          if ((local_2c < 8) || ((ulong)(local_2d8 - (long)local_2d0) < (ulong)local_2c))
          goto LAB_01503614;
          if ((local_30 == 0x1d) && (0xf < local_2c)) break;
          local_2d0 = (int *)((long)local_2d0 + (ulong)local_2c);
          local_2e4 = local_2e4 + 1;
        }
        pFVar6 = local_278;
        FUN_0150c198(local_278,local_2d0 + 2,&local_38,8);
        if (((ulong)pFVar6 & 1) != 0) {
          local_2dc = local_38;
          local_2e0 = local_34;
        }
LAB_01503614:
        if (((((ulong)local_2b4 + 0x20 <= (ulong)local_2dc) &&
             ((ulong)local_2dc <= (ulong)((long)local_290 - (long)local_2a8))) && (0xb < local_2e0))
           && ((local_2e0 < 0x2000001 &&
               ((ulong)local_2e0 <= (long)local_290 + (-(ulong)local_2dc - (long)local_2a8))))) {
          local_2f0 = local_2a8->_ubuf + ((ulong)local_2dc - 0x74);
          pFVar6 = local_278;
          FUN_0150c198(local_278,local_2f0,auStack_44,0xc);
          if (((ulong)pFVar6 & 1) != 0) {
            iVar3 = (int)auStack_44;
            FUN_0150c26c();
            if (iVar3 == -0x521f340) {
              local_2f4 = (uint)auStack_40;
              FUN_0150c26c();
              local_2f8 = (uint)auStack_3c;
              FUN_0150c26c();
              if (((local_2f8 != 0) && (local_2f8 < 0x41)) &&
                 ((local_2f4 <= local_2e0 &&
                  ((local_2f8 * 8 + 0xc <= local_2f4 &&
                   (pFVar6 = local_278,
                   FUN_0150c198(local_278,local_2f0 + 0xc,auStack_244,local_2f8 << 3),
                   ((ulong)pFVar6 & 1) != 0)))))) {
                for (local_2fc = 0; local_2fc < local_2f8; local_2fc = local_2fc + 1) {
                  iVar3 = (int)auStack_244 + local_2fc * 8;
                  FUN_0150c26c();
                  local_300 = iVar3;
                  uVar1 = (int)auStack_240 + local_2fc * 8;
                  FUN_0150c26c();
                  local_304 = uVar1;
                  if (local_300 == local_264) {
                    uVar11 = local_280;
                    if ((((local_280 != 0) ||
                         (uVar1 = local_2f8 * 8 + 0xc, uVar11 = (ulong)(local_304 - uVar1),
                         local_304 < uVar1)) ||
                        (uVar11 = (ulong)(local_304 - local_2f4),
                        local_2f4 <= local_304 && local_304 - local_2f4 != 0)) ||
                       (uVar11 = (ulong)((local_2f4 - local_304) - 8), local_2f4 - local_304 < 8)) {
                      _objc_storeStrong(uVar11,&local_280,0);
                      break;
                    }
                    pFVar6 = local_278;
                    FUN_0150c198(local_278,local_2f0 + local_304,auStack_24c,8);
                    if (((ulong)pFVar6 & 1) == 0) break;
                    iVar3 = (int)auStack_24c;
                    FUN_0150c26c();
                    if (iVar3 != local_268) break;
                    uVar1 = (uint)auStack_248;
                    FUN_0150c26c();
                    local_308 = uVar1;
                    if (((local_308 < 9) || (local_26c < local_308 - 8)) ||
                       (local_2f4 - local_304 < local_308)) break;
                    puVar8 = PTR__OBJC_CLASS___NSMutableData_026ce660;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSMutableData_026ce660,
                               PTR_s_dataWithLength__026a3368,local_308 - 8);
                    _objc_retainAutoreleasedReturnValue();
                    pFVar6 = local_278;
                    puVar2 = local_2f0 + (ulong)local_304 + 8;
                    local_310 = puVar8;
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_mutableBytes_026a3370);
                    puVar9 = local_310;
                    (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_length_0269cca0);
                    FUN_0150c198(pFVar6,puVar2,puVar8,puVar9);
                    if (((ulong)pFVar6 & 1) == 0) {
                      local_270 = 7;
                    }
                    else {
                      _objc_storeStrong(&local_280,local_310);
                      local_270 = 0;
                    }
                    _objc_storeStrong(&local_310,0);
                    if (local_270 != 0) break;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01503a00:
  _fclose(local_278);
  uVar11 = local_280;
  (*(code *)PTR__objc_retain_02578638)();
  local_258 = uVar11;
  local_270 = 1;
  _objc_storeStrong(&local_280,0);
LAB_01503a44:
  _objc_storeStrong(&local_260,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_258);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

