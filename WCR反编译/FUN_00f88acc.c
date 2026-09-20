// FUN_00f88acc @ 00f88acc

void FUN_00f88acc(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = &cf_ImageMessageCellView;
  _NSClassFromString();
  pcVar2 = &cf_SightMessageCellView;
  DAT_028e2e88 = pcVar1;
  _NSClassFromString();
  pcVar1 = &cf_EmoticonMessageCellView;
  DAT_028e2e90 = pcVar2;
  _NSClassFromString();
  pcVar2 = &cf_WCPayC2CMessageCellView;
  DAT_028e2e98 = pcVar1;
  _NSClassFromString();
  pcVar1 = &cf_WCPayC2CFestivalMsgCellView;
  DAT_028e2ea0 = pcVar2;
  _NSClassFromString();
  DAT_028e2ea8 = pcVar1;
  return;
}

