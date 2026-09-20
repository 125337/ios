// FUN_01507c5c @ 01507c5c

byte FUN_01507c5c(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  FILE *pFVar3;
  FILE *pFVar4;
  char *pcVar5;
  size_t local_2a8;
  uint local_29c;
  uint local_298;
  int local_294;
  uint local_290;
  byte local_289;
  int *local_288;
  undefined1 auStack_280 [16];
  uint local_270;
  uint local_26c;
  FILE *local_260;
  int local_254;
  FILE *local_250;
  undefined4 local_244;
  char *local_240;
  byte local_232;
  char acStack_231 [513];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_240 = (char *)0x0;
  _objc_storeStrong(&local_240,param_1);
  pcVar2 = local_240;
  (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_length_0269cca0);
  pcVar5 = local_240;
  if (pcVar2 == (char *)0x0) {
    local_232 = 0;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_fileSystemRepresentation_026a95c0);
    pFVar3 = _fopen(pcVar5,"rb");
    local_250 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      local_232 = 0;
    }
    else {
      local_254 = 0;
      FUN_0150bdc4(pFVar3,&local_254,0);
      local_260 = pFVar3;
      if ((pFVar3 == (FILE *)0xffffffffffffffff) || (local_254 != -0x1120531)) {
        _fclose(local_250);
        local_232 = 0;
      }
      else {
        pFVar4 = local_250;
        FUN_0150c198(0,local_250,pFVar3,auStack_280,0x20);
        if (((ulong)pFVar4 & 1) == 0) {
          _fclose(local_250);
          local_232 = 0;
        }
        else if ((((local_270 == 0) || (0x200 < local_270)) || (local_26c == 0)) ||
                (0x100000 < local_26c)) {
          _fclose(local_250);
          local_232 = 0;
        }
        else {
          local_288 = &(local_260->_bf)._size;
          local_289 = 0;
          local_290 = 0;
          while( true ) {
            bVar1 = 0;
            if (local_290 < local_270) {
              bVar1 = local_289 ^ 1;
            }
            if ((bVar1 & 1) == 0) break;
            local_30 = 0;
            pFVar3 = local_250;
            FUN_0150c198(local_250,local_288,&local_30,8);
            if (((ulong)pFVar3 & 1) == 0) break;
            local_294 = (int)local_30;
            local_298 = local_30._4_4_;
            if ((local_30._4_4_ < 8) || (local_26c < local_30._4_4_)) break;
            if (((((int)local_30 == 0xc) || ((int)local_30 == -0x7fffffe8)) ||
                (((int)local_30 == -0x7fffffe1 || ((int)local_30 == -0x7fffffdd)))) &&
               ((((local_29c = 0, 0xb < local_30._4_4_ &&
                  (pFVar3 = local_250, FUN_0150c198(local_250,local_288 + 2,&local_29c,4),
                  ((ulong)pFVar3 & 1) != 0)) && (7 < local_29c)) && (local_29c < local_298)))) {
              local_2a8 = (ulong)local_298 - (ulong)local_29c;
              if (0x200 < local_2a8) {
                local_2a8 = 0x200;
              }
              _bzero(acStack_231,0x201);
              pFVar3 = local_250;
              FUN_0150c198(local_250,(long)local_288 + (ulong)local_29c,acStack_231,local_2a8);
              if ((((ulong)pFVar3 & 1) != 0) &&
                 (pcVar5 = _strnstr(acStack_231,"WCRefine",local_2a8), pcVar5 != (char *)0x0)) {
                local_289 = 1;
              }
            }
            local_288 = (int *)((long)local_288 + (ulong)local_298);
            local_290 = local_290 + 1;
          }
          _fclose(local_250);
          local_232 = local_289 & 1;
        }
      }
    }
  }
  local_244 = 1;
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_232 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

