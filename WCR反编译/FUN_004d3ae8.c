// FUN_004d3ae8 @ 004d3ae8

void FUN_004d3ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_8);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_9);
  if (local_18 != 0) {
    if (local_20 == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_eraseGroupInfo_026a4188);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setGroupInfo__026a4178);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setGroupInfo__026a4178,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_eraseGroupInfo_026a4188);
      }
    }
    else {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setGroupInfo__026a4178);
      if ((uVar1 & 1) == 0) {
        FUN_004d450c(local_18,&cf_groupInfo,local_20);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setGroupInfo__026a4178,local_20);
      }
    }
    FUN_004d450c(local_18,&cf_m_groupUUID,local_48);
    FUN_004d450c(local_18,&cf_everForceParseGroupInfo,local_50);
    FUN_004d450c(local_18,&cf_m_sequenceId,local_40);
    FUN_004d450c(local_18,&cf_m_uiCreateTime,local_38);
    FUN_004d450c(local_18,&cf_m_mergeCount,local_58);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setM_dicForwardParas__026a4180);
    if ((uVar1 & 1) == 0) {
      FUN_004d450c(local_18,&cf_m_dicForwardParas,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setM_dicForwardParas__026a4180,local_28);
    }
    FUN_004d450c(local_18,&cf_m_nsContent,local_30);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

