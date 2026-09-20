// FUN_0021ad34 @ 0021ad34

void FUN_0021ad34(long param_1)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  uint local_3c;
  
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),DAT_026dfb18,0,1);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_3c = 1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_001d3fac();
    local_3c = (uint)lVar2 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_3c & 1) == 0) {
    pcVar3 = &cf_WCPuzzleImageView;
    _NSClassFromString();
    if (pcVar3 != (cfstringStruct *)0x0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if ((uVar4 & 1) != 0) {
        FUN_001d7c3c(*(undefined8 *)(param_1 + 0x20));
        return;
      }
    }
    FUN_0021ae84(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

