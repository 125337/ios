// removeMember:fromRoom:reason: @ 00eda8f4

/* Function Stack Size: 0x28 bytes */

bool WCRefineChatRoomKickHelper::removeMember_fromRoom_reason_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  cfstringStruct *local_80;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar6 = local_20;
  uVar2 = local_30;
  uVar1 = local_38;
  if (((ulong)puVar4 & 1) == 0) {
    local_11 = 0;
  }
  else {
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_80 = &cf_Deuyd;
    }
    else {
      local_80 = local_40;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_removeInvitedMember_fromRoom_rea_026ab710,uVar2,uVar1,local_80);
    local_11 = (byte)IVar6 & 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

