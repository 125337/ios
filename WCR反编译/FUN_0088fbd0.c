// FUN_0088fbd0 @ 0088fbd0

void FUN_0088fbd0(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = "WXGRoamBackupPackageService";
  _objc_getClass();
  pcVar3 = pcVar2;
  _class_getInstanceMethod(pcVar2,PTR_s_isOpenNewBackup_026a91e0);
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    _method_getImplementation();
    puVar1 = PTR_s_isOpenNewBackup_026a91e0;
    DAT_028cd908 = pcVar4;
    _method_getTypeEncoding(pcVar3);
    _class_replaceMethod(pcVar2,puVar1,hook_isOpenNewBackup,pcVar3);
  }
  return;
}

