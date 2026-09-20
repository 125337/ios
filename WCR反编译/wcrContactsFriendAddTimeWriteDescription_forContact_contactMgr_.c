// wcrContactsFriendAddTimeWriteDescription:forContact:contactMgr: @ 01a69514

/* Function Stack Size: 0x28 bytes */

bool WCRefineGeneralFunctionViewController::
     wcrContactsFriendAddTimeWriteDescription_forContact_contactMgr_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar2 = local_30;
  if ((local_38 != 0) && (local_40 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      pcVar3 = &cf_setM_nsDescription_;
      _NSSelectorFromString();
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_30);
      }
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setContact_cardDesc_isLocal__0269f9f0);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setContact_cardDesc__0269f9f8);
        if ((uVar2 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_setContact_cardDesc__0269f9f8,local_38,local_30);
          local_11 = (byte)uVar2 & 1;
        }
      }
      else {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setContact_cardDesc_isLocal__0269f9f0,local_38,local_30,1);
        local_11 = (byte)uVar2 & 1;
      }
      goto LAB_01a69710;
    }
  }
  local_11 = 0;
LAB_01a69710:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

