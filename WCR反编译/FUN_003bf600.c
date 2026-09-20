// FUN_003bf600 @ 003bf600

byte FUN_003bf600(void)

{
  char *pcVar1;
  char *local_20;
  byte local_11;
  
  pcVar1 = "BrandServiceSessionViewController";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 0;
  }
  else {
    pcVar1 = "BSTimelineMsgMgr";
    _objc_getClass();
    FUN_00392f1c();
    _objc_retainAutoreleasedReturnValue();
    local_20 = pcVar1;
    FUN_003bf698();
    local_11 = ((byte)pcVar1 ^ 1) & 1;
    _objc_storeStrong(&local_20,0);
  }
  return local_11 & 1;
}

