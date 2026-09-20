// FUN_0010a814 @ 0010a814

void FUN_0010a814(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2a0;
  cfstringStruct *local_278;
  cfstringStruct *local_258;
  cfstringStruct *local_228;
  cfstringStruct *local_200;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_180;
  cfstringStruct *local_160;
  cfstringStruct *local_140;
  cfstringStruct *local_120;
  cfstringStruct *local_100;
  cfstringStruct *local_d0;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_chatRoomWelcomeEnabled_0269ee28);
  DAT_028c85a8 = SUB81(pcVar1,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeAllGroups_0269ee30);
  DAT_026df8d8 = SUB81(pcVar1,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeSelectedGroups_0269ee38);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  _objc_storeStrong(&DAT_028c84b8,local_60);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeText_0269ee40);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_80 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf__k;
  }
  _objc_storeStrong(&DAT_028c84c0,local_80);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeRepositoryCode_0269ee48);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &cf___;
  }
  _objc_storeStrong(&DAT_028c84c8,local_a0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeCountMode_0269ee50);
  pcVar2 = local_28;
  DAT_028c85b0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeRandomOneFromMult_0269ee58);
  DAT_028c85b8 = SUB81(pcVar2,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeMultiContent_0269ee60);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d0 = &cf___;
  }
  _objc_storeStrong(&DAT_028c84d0,local_d0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomWelcomeDelaySeconds_0269ee68);
  pcVar2 = local_28;
  DAT_028c85c0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorEnabled_0269ee70);
  DAT_028c85c8 = SUB81(pcVar2,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorDateFormat_0269ee78);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_100 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_100 = &cf_yyyy_MM_ddHH_mm_ss;
  }
  _objc_storeStrong(&DAT_028c84d8,local_100);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorLocalTipText_0269ee80);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_120 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_120 = &cf___;
  }
  _objc_storeStrong(&DAT_028c84e0,local_120);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorLocalNotifyF_0269ee88);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_140 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_140 = &cf___;
  }
  _objc_storeStrong(&DAT_028c84e8,local_140);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorColor_0269ee90);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_160 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_160 = &cf___;
  }
  _objc_storeStrong(&DAT_028c84f0,local_160);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorDarkColor_0269ee98);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_180 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_180 = &cf___;
  }
  _objc_storeStrong(&DAT_028c84f8,local_180);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorTimeColor_0269eea0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1a0 = &cf_66CD00;
  }
  _objc_storeStrong(&DAT_028c8500,local_1a0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorTimeDarkColo_0269eea8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c0 = &cf_66CD00;
  }
  _objc_storeStrong(&DAT_028c8508,local_1c0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorNameColor_0269eeb0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1e0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1e0 = &cf_1E90FF;
  }
  _objc_storeStrong(&DAT_028c8510,local_1e0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorNameDarkColo_0269eeb8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_200 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_200 = &cf_1E90FF;
  }
  _objc_storeStrong(&DAT_028c8518,local_200);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorGroupNotifyE_0269eec0);
  DAT_028c85c9 = SUB81(pcVar1,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorGroupNotifyF_0269eec8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_228 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_228 = &cf__;
  }
  _objc_storeStrong(&DAT_028c8520,local_228);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorForwardEnabl_0269eed0);
  DAT_028c85ca = SUB81(pcVar1,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorForwardType_0269eed8);
  pcVar2 = local_28;
  DAT_028c85d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorForwardSessi_0269eee0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_258 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_258 = &cf___;
  }
  _objc_storeStrong(&DAT_028c8528,local_258);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorForwardForma_0269eee8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_278 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_278 = &cf___;
  }
  _objc_storeStrong(&DAT_028c8530,local_278);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorNotifyGroupR_0269eef0);
  pcVar2 = local_28;
  DAT_026df8e0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorNotifyInclud_0269eef8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2a0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_2a0 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  _objc_storeStrong(&DAT_028c8538,local_2a0);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatRoomLeaveMonitorNotifyExclud_0269ef00);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_2c0 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  _objc_storeStrong(&DAT_028c8540,local_2c0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

