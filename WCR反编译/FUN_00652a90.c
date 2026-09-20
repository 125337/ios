// FUN_00652a90 @ 00652a90

byte FUN_00652a90(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  byte local_24;
  byte local_11;
  
  pcVar1 = &cf_MMEdgeTipsView;
  _NSClassFromString();
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithTitle_image__0269ebb8
              );
    local_24 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithConfig__026a62c0);
      local_24 = (byte)pcVar1;
    }
    local_11 = local_24 & 1;
  }
  return local_11;
}

