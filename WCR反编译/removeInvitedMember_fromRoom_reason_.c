// removeInvitedMember:fromRoom:reason: @ 00edaa8c

/* Function Stack Size: 0x28 bytes */

bool WCRefineChatRoomKickHelper::removeInvitedMember_fromRoom_reason_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_90;
  ID local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_trimmedString__0269ec98,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  IVar5 = local_30;
  if (IVar2 == 0) {
    local_21 = 0;
  }
  else {
    local_20 = local_58;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48;
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_90 = &cf_Deuyd;
    }
    else {
      local_90 = local_50;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_wcr_kickUsers_fromRoom_reason_ke_026ab708,puVar3,uVar1,local_90,&::cf___,
               0,0,0);
    local_21 = (byte)IVar5 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_21 & 1;
}

