// FUN_006b17ec @ 006b17ec

void FUN_006b17ec(void)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  
  if ((DAT_028cc118 & 1) == 0) {
    bVar1 = 0x60;
    _NSClassFromString();
    FUN_006a60d0();
    DAT_028cc118 = bVar1;
  }
  pcVar2 = &cf_SessionSelectView;
  _NSClassFromString();
  if ((DAT_028cc128 & 1) == 0) {
    pcVar3 = pcVar2;
    FUN_006a60d0(pcVar2,PTR_s_filterContact__026a68b0,FUN_006b5c08,&DAT_028cc130);
    DAT_028cc128 = (byte)pcVar3;
  }
  if ((DAT_028cc138 & 1) == 0) {
    pcVar3 = pcVar2;
    FUN_006a60d0(pcVar2,PTR_s_FilterSearchResultOfNormalContac_026a6750,FUN_006b5d68,&DAT_028cc140);
    DAT_028cc138 = (byte)pcVar3;
  }
  if ((DAT_028cc148 & 1) == 0) {
    FUN_006a60d0(pcVar2,PTR_s_sessionSelectMessageSearchLogic__026a68b8,FUN_006b5e10,&DAT_028cc150);
    DAT_028cc148 = (byte)pcVar2;
  }
  return;
}

