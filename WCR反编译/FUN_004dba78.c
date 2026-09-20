// FUN_004dba78 @ 004dba78

void FUN_004dba78(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  long local_38 [3];
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar3 = local_18;
  FUN_004dbf30();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  local_38[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageBlockSupport_026ce0f8,
             PTR_s_chatRoomContextFromProfileContro_0269d570,local_18);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_38[0];
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    puVar4 = PTR_WCRefineMessageBlockSupport_026ce0f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_38[0]);
    uVar2 = (uint)puVar4;
    if (((ulong)puVar4 & 1) == 0) {
      FUN_004d7600();
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W8__uR);
        local_44 = 1;
      }
      else {
        puVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        lVar3 = local_38[0];
        if (puVar4 == (undefined *)0x0) {
          uVar6 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
          FUN_004dc14c(&cf_contact,lVar3,uVar6 & 0xffffffff);
          puVar4 = PTR_WCRefineHelper_026ce000;
          uVar6 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
          pcVar1 = &cf__O__dkNmo_;
          if ((uVar6 & 1) == 0) {
            pcVar1 = &cf__sQdkNmo_O__;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78,pcVar1);
          local_44 = 0;
        }
        else {
          puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageBlockSupport_026ce0f8,
                     PTR_s_groupMemberKeyForGroup_member__026a4228,local_40,local_38[0]);
          _objc_retainAutoreleasedReturnValue();
          local_50 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
          puVar4 = local_50;
          if (puVar5 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
          }
          else {
            uVar6 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
            FUN_004dc14c(&cf_member,puVar4,uVar6 & 0xffffffff);
            puVar4 = PTR_WCRefineHelper_026ce000;
            uVar6 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
            pcVar1 = &cf__O__dkN_mo_;
            if ((uVar6 & 1) == 0) {
              pcVar1 = &cf__sQdkN_mo_O__;
            }
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78,pcVar1);
          }
          local_44 = 1;
          _objc_storeStrong(&local_50,0);
        }
      }
      goto LAB_004dbea8;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
  local_44 = 1;
LAB_004dbea8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

