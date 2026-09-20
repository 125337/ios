// FUN_004d71a4 @ 004d71a4

void FUN_004d71a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *local_48;
  undefined4 local_40;
  long local_30;
  ulong local_28;
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
  if (((local_18 == 0) ||
      (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      lVar1 == 0)) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_40 = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_AddLocalMsg_MsgWrap_fixTime_NewM_026a4220);
    if ((uVar2 & 1) == 0) {
      local_40 = 1;
    }
    else {
      if (DAT_028cad78 == (char *)0x0) {
        pcVar3 = "CMessageWrap";
        _objc_getClass();
        DAT_028cad78 = pcVar3;
      }
      pcVar3 = DAT_028cad78;
      _objc_retainAutoreleaseReturnValue();
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithMsgType__0269d3f8,&DAT_00002710);
      local_48 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_40 = 1;
      }
      else {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setM_nsFromUsr__0269d408);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        pcVar3 = local_48;
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsToUsr_0269d090);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setM_nsToUsr__0269d410);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setM_uiStatus__0269d418,4);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setM_nsContent__0269ef88,local_30);
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiCreateTime_0269d208);
        if ((int)uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setM_uiCreateTime__0269d428,uVar2 & 0xffffffff);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_AddLocalMsg_MsgWrap_fixTime_NewM_026a4220,local_20,local_48,1,0);
        local_40 = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

