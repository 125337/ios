// FUN_003e2d64 @ 003e2d64

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_003e2d64(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar5;
  ulong uVar6;
  uint local_7c;
  undefined1 auStack_60 [72];
  long local_18;
  void *pvVar4;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar2 = -2;
  _dlsym(0xfffffffffffffffe,"sysctl");
  lVar3 = -2;
  DAT_028ca418 = lVar2;
  _dlsym(0xfffffffffffffffe,"sysctlbyname");
  lVar2 = -2;
  DAT_028ca420 = lVar3;
  _dlsym(0xfffffffffffffffe,"ioctl");
  DAT_028ca428 = lVar2;
  if (((DAT_028ca418 != 0) && (DAT_028ca420 != 0)) && (lVar2 != 0)) {
    pvVar4 = _memcpy(auStack_60,&DAT_0257ced0,0x48);
    uVar1 = (uint)pvVar4;
    __dyld_image_count();
    for (local_7c = 0; local_7c < uVar1; local_7c = local_7c + 1) {
      uVar5 = (ulong)local_7c;
      __dyld_get_image_header(local_7c - uVar1);
      if ((uVar5 != 0) && (*(int *)(uVar5 + 0xc) == 2)) {
        __dyld_get_image_name(0);
        uVar6 = (ulong)local_7c;
        __dyld_get_image_vmaddr_slide();
        FUN_0093635c(uVar5,uVar6,auStack_60,3);
        break;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

