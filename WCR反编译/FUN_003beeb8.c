// FUN_003beeb8 @ 003beeb8

void FUN_003beeb8(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "BSTimelineMsgMgr";
  _objc_getClass();
  puVar1 = PTR_s_workThread_reportAndUpdateExpose_026a2f28;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_instancesRespondToSelector__0269da90,
               PTR_s_workThread_reportAndUpdateExpose_026a2f28);
    if (((ulong)pcVar3 & 1) != 0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_003beff4,&DAT_028ca150);
    }
    puVar1 = PTR_s_openBrandServiceSessionViewFromS_026a2f30;
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_instancesRespondToSelector__0269da90,
               PTR_s_openBrandServiceSessionViewFromS_026a2f30);
    if (((ulong)pcVar3 & 1) != 0) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_003bf170,&DAT_028ca158);
    }
    puVar1 = PTR_s_isBrandTimelineOpen_026a2f38;
    _object_getClass();
    if ((pcVar2 != (char *)0x0) &&
       (pcVar3 = pcVar2, _class_respondsToSelector(pcVar2,puVar1), ((ulong)pcVar3 & 1) != 0)) {
      _MSHookMessageEx(pcVar2,puVar1,FUN_003bf408,&DAT_028ca160);
    }
  }
  return;
}

