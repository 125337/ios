// FUN_0007799c @ 0007799c

bool FUN_0007799c(void)

{
  bool bVar1;
  
  if ((DAT_028c7e78 & 1) == 0) {
    FUN_0006e628();
  }
  if (((DAT_028c7ef0 & 1) == 0) || (bVar1 = true, 0 < DAT_028c7ef8)) {
    bVar1 = (DAT_028c7f10 & 1) != 0 && DAT_028c7f18 < 1;
  }
  return bVar1;
}

