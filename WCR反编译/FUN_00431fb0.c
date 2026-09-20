// FUN_00431fb0 @ 00431fb0

void FUN_00431fb0(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "MMTextWidth";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_clear_026a3870);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_clear_026a3870);
    }
  }
  return;
}

