// FUN_0037435c @ 0037435c

void FUN_0037435c(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  
  if ((DAT_028ca1a8 & 1) == 0) {
    pcVar1 = "CContactMgr";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      DAT_028ca1a8 = 1;
      FUN_003c28dc(pcVar1,PTR_s_getContactByName__0269d178,FUN_003c2978,&DAT_028ca1b0);
      FUN_003c28dc(pcVar1,PTR_s_getContactFromDic__0269fef0,FUN_003c2b04,&DAT_028ca1b8);
      FUN_003c28dc(pcVar1,PTR_s_getContactForSearchByName__0269f828,FUN_003c2c90,&DAT_028ca1c0);
      FUN_003c28dc(pcVar1,PTR_s_isInContactList__0269efe0,FUN_003c2e1c,&DAT_028ca1c8);
      FUN_003c28dc(pcVar1,PTR_s_getContactList_contactType__026a2fc8,FUN_003c2f60,&DAT_028ca1d0);
      pcVar2 = &cf_getAllContactUserName;
      _NSSelectorFromString(&cf_getAllContactUserName);
      FUN_003c28dc(pcVar1,pcVar2,FUN_003c30ac,&DAT_028ca1d8);
      pcVar2 = &cf_getAllContactUserNameFromCache;
      _NSSelectorFromString(&cf_getAllContactUserNameFromCache);
      FUN_003c28dc(pcVar1,pcVar2,FUN_003c31cc,&DAT_028ca1e0);
    }
  }
  return;
}

