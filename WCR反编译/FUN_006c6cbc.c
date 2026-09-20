// FUN_006c6cbc @ 006c6cbc

void FUN_006c6cbc(void)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCRedEnvelopesLogicMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_OnWCToHongbaoCommonResponse_Requ_026a6950,FUN_006c70e4,&DAT_028cc230
                  );
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  uVar3 = (int)sVar2 + 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + uVar3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[uVar3 + (int)sVar2] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_sendNotification_respon_026a6958,FUN_006c8ae0);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  uVar3 = (int)sVar2 + 3;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + uVar3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[uVar3 + (int)sVar2] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_triggerAutoReply_respon_026a6960,FUN_006cc690);
  _class_addMethod(pcVar1,PTR_s_wcrefine_calculateDelaySeconds_026a6968,FUN_006cd390);
  pcVar1 = "WCRedEnvelopesRedEnvelopesDetailViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_GetHeaderView__026a6970,FUN_006cd66c,&DAT_028cc238);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_006cd75c,&DAT_028cc240);
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_006cd820,&DAT_028cc248);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_tagLink_messageWrap__0269ee20,FUN_006cd8f0,&DAT_028cc250);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

