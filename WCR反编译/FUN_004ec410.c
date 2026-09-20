// FUN_004ec410 @ 004ec410

void FUN_004ec410(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "MessageRevokeMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_onRevokeMsg__026a43d8,FUN_004ec70c,&DAT_028cae90);
  sVar3 = _strlen("@");
  _memcpy(auStack_428,"@",sVar3);
  sVar3 = _strlen("@");
  iVar1 = (int)sVar3;
  auStack_428[sVar3 & 0xffffffff] = 0x40;
  auStack_428[iVar1 + 1] = 0x3a;
  auStack_428[iVar1 + 2] = 0x69;
  sVar3 = _strlen("@");
  _memcpy(auStack_428 + (iVar1 + 3U),"@",sVar3);
  sVar3 = _strlen("@");
  auStack_428[iVar1 + 3U + (int)sVar3] = 0;
  _class_addMethod(pcVar2,PTR_s_getMessageTypeDescription_conten_026a43f8,FUN_004efb14);
  sVar3 = _strlen("@");
  _memcpy(auStack_828,"@",sVar3);
  sVar3 = _strlen("@");
  iVar1 = (int)sVar3;
  auStack_828[sVar3 & 0xffffffff] = 0x40;
  auStack_828[iVar1 + 1] = 0x3a;
  auStack_828[iVar1 + 2] = 0x69;
  sVar3 = _strlen("@");
  _memcpy(auStack_828 + (iVar1 + 3U),"@",sVar3);
  sVar3 = _strlen("@");
  auStack_828[iVar1 + 3U + (int)sVar3] = 0;
  _class_addMethod(pcVar2,PTR_s_getMessageTypeName_content__026a4400,FUN_004efe00);
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_tagLink_messageWrap__0269ee20,FUN_004f00a0,&DAT_028cae98);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

