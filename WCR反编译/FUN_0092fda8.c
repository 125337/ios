// FUN_0092fda8 @ 0092fda8

void FUN_0092fda8(void)

{
  ulong uVar1;
  code *pcVar2;
  
  uVar1 = 0;
  _OSAtomicCompareAndSwap32(0,1,&DAT_028cf3b4);
  if ((uVar1 & 1) != 0) {
    pcVar2 = FUN_009337c0;
    _objc_setExceptionPreprocessor();
    DAT_028cf3b8 = pcVar2;
    if (pcVar2 == FUN_009337c0) {
      DAT_028cf3b8 = (code *)0x0;
    }
  }
  return;
}

