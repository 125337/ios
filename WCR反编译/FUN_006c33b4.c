// FUN_006c33b4 @ 006c33b4

void FUN_006c33b4(double param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *local_f8;
  char *local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50 [3];
  char *local_38;
  long local_30;
  long local_28;
  
  pcVar1 = "CMessageWrap";
  local_30 = param_2;
  local_28 = param_2;
  _objc_getClass();
  pcVar2 = "MMServiceCenter";
  local_38 = pcVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if ((local_38 == (char *)0x0) || (local_50[0] == (char *)0x0)) {
    local_54 = 1;
  }
  else {
    pcVar1 = local_38;
    _objc_alloc();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithMsgType__0269d3f8,&DAT_00002710);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    (*(code *)PTR__objc_release_02578630)();
    if (local_60 == (char *)0x0) {
      local_54 = 1;
    }
    else {
      FUN_006c3ae0();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setM_nsFromUsr__0269d408,*(undefined8 *)(param_2 + 0x20));
      pcVar1 = local_60;
      puVar4 = PTR_s_setM_nsToUsr__0269d410;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (pcVar2 == (char *)0x0) {
        local_f8 = *(char **)(param_2 + 0x20);
      }
      else {
        local_f8 = local_68;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4,local_f8);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_uiStatus__0269d418,4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setM_nsContent__0269ef88,*(undefined8 *)(param_2 + 0x28));
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setM_uiCreateTime__0269d428,(int)(param_1 + 1.0));
      pcVar5 = &cf_AddLocalMsg_MsgWrap_fixTime_NewMsgArriveNotify_;
      _NSSelectorFromString();
      pcVar1 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_respondsToSelector__026ca818,pcVar5);
      puVar4 = PTR_s_AddLocalMsg_MsgWrap__0269ef90;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_respondsToSelector__026ca818,
                   PTR_s_AddLocalMsg_MsgWrap__0269ef90);
        if (((ulong)pcVar1 & 1) == 0) {
          if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
            _WCRefineCrashReporterBreadcrumb(&cf_at_mentioninsert_missing_selector);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50[0],puVar4,*(undefined8 *)(param_2 + 0x20),local_60);
          if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
            _WCRefineCrashReporterBreadcrumb(&cf_at_mentioninsert_endselector_2args);
          }
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],pcVar5,*(undefined8 *)(param_2 + 0x20),local_60,0,0);
        if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
          _WCRefineCrashReporterBreadcrumb(&cf_at_mentioninsert_endselector_4args);
        }
      }
      _objc_storeStrong(&local_68,0);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_50,0);
  return;
}

