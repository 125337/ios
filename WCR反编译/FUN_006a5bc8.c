// FUN_006a5bc8 @ 006a5bc8

void FUN_006a5bc8(void)

{
  undefined *puVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  int local_3c;
  
  pcVar3 = &cf_UNNotificationServiceExtension;
  _NSClassFromString();
  if (pcVar3 != (cfstringStruct *)0x0) {
    iVar2 = 0;
    _objc_getClassList(0,0);
    if (0 < iVar2) {
      pvVar4 = _calloc((long)iVar2,8);
      pvVar5 = pvVar4;
      _objc_getClassList(pvVar4,iVar2);
      for (local_3c = 0; local_3c < (int)pvVar5; local_3c = local_3c + 1) {
        uVar9 = *(ulong *)((long)pvVar4 + (long)local_3c * 8);
        uVar6 = uVar9;
        FUN_006a5da8(uVar9,pcVar3);
        puVar1 = PTR_s_didReceiveNotificationRequest_wi_026a6648;
        if (((uVar6 & 1) != 0) &&
           (uVar6 = uVar9,
           _class_getInstanceMethod(uVar9,PTR_s_didReceiveNotificationRequest_wi_026a6648),
           uVar6 != 0)) {
          _MSHookMessageEx(uVar9,puVar1,FUN_006a5e3c,&DAT_028cbe68);
          break;
        }
      }
      _free(pvVar4);
    }
  }
  _NSClassFromString(&cf_MMLocalNotificationUtil);
  FUN_006a5f9c();
  pcVar3 = &cf_ChatMessageLocalIntentHandler;
  _NSClassFromString();
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar7 = "handleContent:withUserInfo:identifier:trigger:completion:";
    _sel_registerName();
    pcVar8 = pcVar3;
    FUN_006a60d0(pcVar3,pcVar7,FUN_006a615c,&DAT_028cbe70);
    if (((ulong)pcVar8 & 1) == 0) {
      _object_getClass(pcVar3);
      FUN_006a60d0();
    }
  }
  _NSClassFromString(&cf_UNUserNotificationCenter);
  FUN_006a60d0();
  return;
}

