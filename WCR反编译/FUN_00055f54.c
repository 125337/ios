// FUN_00055f54 @ 00055f54

void FUN_00055f54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_c8;
  cfstringStruct local_c0;
  int local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_28;
  local_38 = param_3;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar2 = 0;
    FUN_00052874(0,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar2 = local_40;
  FUN_00053d7c(local_40,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileUploadingMsg_0269daa8);
  if (((uVar1 & 1) != 0) &&
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_IsFileUploadingMsg_0269daa8),
     (uVar1 & 1) != 0)) {
    if (local_38 < 5) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      uVar1 = local_30;
      local_58[0] = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar1;
      dVar3 = _dispatch_time(0,1500000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58[0];
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_00056618;
      local_80 = &DAT_025796f0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_60;
      local_78 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar1;
      local_68 = local_38;
      _dispatch_after(dVar3,puVar4,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(local_58,0);
    }
    local_9c = 1;
    goto LAB_000565a8;
  }
  pcVar5 = &cf_MMAppAttachFileMgr;
  _NSClassFromString();
  local_c0.field3_0x18 = (long)pcVar5;
  if ((pcVar5 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_reportFileMsg_action__0269dab0),
     ((ulong)pcVar5 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0.field3_0x18,PTR_s_reportFileMsg_action__0269dab0,local_30,0xd);
  }
  pcVar5 = &cf_MsgFileDetailLogicController;
  _NSClassFromString();
  pcVar6 = &cf_initWithMsgWrap_userName_;
  local_c0.field2_0x10 = (undefined *)pcVar5;
  _NSSelectorFromString();
  pcVar5 = pcVar6;
  local_c0.field1_0x8 = (qword)pcVar6;
  if (((cfstringStruct *)local_c0.field2_0x10 != (cfstringStruct *)0x0) &&
     (pcVar5 = (cfstringStruct *)local_c0.field2_0x10,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_c0.field2_0x10,PTR_s_instancesRespondToSelector__0269da90,pcVar6),
     ((ulong)pcVar5 & 1) != 0)) {
    pcVar5 = (cfstringStruct *)local_c0.field2_0x10;
    _objc_alloc();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,local_c0.field1_0x8,local_30,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_c0.field0_0x0 = (qword)pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    if ((cfstringStruct *)local_c0.field0_0x0 == (cfstringStruct *)0x0) {
LAB_000564c0:
      local_9c = 0;
    }
    else {
      FUN_00056658(local_c0.field0_0x0);
      pcVar5 = (cfstringStruct *)local_c0.field0_0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0.field0_0x0,PTR_s_respondsToSelector__026ca818,
                 PTR_s_startDownloadAppMsgUploading_0269dab8);
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0.field0_0x0,PTR_s_startDownloadAppMsgUploading_0269dab8);
      }
      pcVar5 = (cfstringStruct *)local_c0.field0_0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0.field0_0x0,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0
                );
      if (((ulong)pcVar5 & 1) == 0) goto LAB_000564c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0.field0_0x0,PTR_s_startDownload_0269dac0);
      local_9c = 1;
    }
    pcVar5 = &local_c0;
    _objc_storeStrong(pcVar5,0);
    if (local_9c != 0) goto LAB_000565a8;
  }
  FUN_00051280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_s_StartDownloadAppAttach_MsgWrap__0269dac8;
  local_c8 = pcVar5;
  if ((pcVar5 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,
                 PTR_s_StartDownloadAppAttach_MsgWrap__0269dac8), ((ulong)pcVar5 & 1) == 0)) {
    local_9c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,puVar4,local_40,local_30);
    local_9c = 1;
  }
  _objc_storeStrong(&local_c8,0);
LAB_000565a8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

