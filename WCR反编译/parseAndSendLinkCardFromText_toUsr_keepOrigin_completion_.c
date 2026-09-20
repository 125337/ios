// parseAndSendLinkCardFromText:toUsr:keepOrigin:completion: @ 01007bb4

/* Function Stack Size: 0x2c bytes */

void WCRefineLinkMediaSender::parseAndSendLinkCardFromText_toUsr_keepOrigin_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  ID local_d0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  ID local_88;
  long local_80;
  ID local_78;
  byte local_70;
  undefined4 local_68;
  byte local_61;
  ID local_60;
  ID local_58;
  long local_50;
  byte local_41;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_61 = 0;
  if (IVar5 == 0) {
    local_d0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_d0;
  }
  else {
    local_d0 = local_40;
  }
  local_61 = IVar5 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_d0;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  IVar5 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (IVar5 == 0) {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))(local_50,0,&cf_elnx_J_Y_a);
    }
    local_68 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startProgressToast_026ad9d8);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c88,local_28,PTR_s_updateProgressToast__026ad910)
    ;
    uVar3 = local_38;
    lVar2 = local_50;
    puVar1 = PTR_WCRefineLinkParser_026ce168;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01007ec4;
    local_98 = &DAT_025841c0;
    local_78 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_38;
    local_80 = lVar2;
    local_70 = local_41 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_58;
    local_90 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_parseTextForDouyinLinkCard_compl_026ada08,uVar3,&local_b0);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

