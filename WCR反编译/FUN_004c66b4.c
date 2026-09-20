// FUN_004c66b4 @ 004c66b4

void FUN_004c66b4(void)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMUINavigationBar";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_004c694c,&DAT_028cac30);
  sVar2 = _strlen("B");
  _memcpy(auStack_428,"B",sVar2);
  sVar2 = _strlen("B");
  auStack_428[sVar2 & 0xffffffff] = 0x40;
  auStack_428[(int)sVar2 + 1] = 0x3a;
  auStack_428[(int)sVar2 + 2] = 0;
  _class_addMethod(pcVar1,PTR_s_hasMainFrameButton_026a4008,FUN_004c6d80);
  sVar2 = _strlen("@");
  _memcpy(auStack_828,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[sVar2 & 0xffffffff] = 0x40;
  auStack_828[(int)sVar2 + 1] = 0x3a;
  uVar3 = (int)sVar2 + 2;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + uVar3,"@",sVar2);
  sVar2 = _strlen("@");
  uVar3 = uVar3 + (int)sVar2;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + uVar3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[uVar3 + (int)sVar2] = 0;
  _class_addMethod(pcVar1,PTR_s_findViewOfClass_inView__026a4010,FUN_004c7000);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

