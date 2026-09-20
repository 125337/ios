// FUN_001230d8 @ 001230d8

void FUN_001230d8(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  double local_f8;
  char *local_f0;
  undefined *local_78;
  char *local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50 [3];
  char *local_38;
  long local_30;
  long local_28;
  
  pcVar3 = "CMessageWrap";
  local_30 = param_1;
  local_28 = param_1;
  _objc_getClass();
  pcVar4 = "CMessageMgr";
  local_38 = pcVar3;
  _objc_getClass();
  FUN_0010f1e0();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = pcVar4;
  if ((local_38 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
    local_54 = 1;
  }
  else {
    pcVar3 = local_38;
    _objc_alloc();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithMsgType__0269d3f8,&DAT_00002710);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)();
    if (local_60 == (char *)0x0) {
      local_54 = 1;
    }
    else {
      FUN_0010ef9c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setM_nsFromUsr__0269d408,*(undefined8 *)(param_1 + 0x20));
      pcVar3 = local_60;
      puVar2 = PTR_s_setM_nsToUsr__0269d410;
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (pcVar4 == (char *)0x0) {
        local_f0 = *(char **)(param_1 + 0x20);
      }
      else {
        local_f0 = local_68;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_uiStatus__0269d418,4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setM_nsContent__0269ef88,*(undefined8 *)(param_1 + 0x28));
      local_f8 = *(double *)(param_1 + 0x30);
      bVar1 = local_f8 <= 0.0;
      if (bVar1) {
        local_78 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      else {
        local_f8 = *(double *)(param_1 + 0x30);
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setM_uiCreateTime__0269d428,(int)(local_f8 + 1.0));
      pcVar5 = &cf_AddLocalMsg_MsgWrap_fixTime_NewMsgArriveNotify_;
      _NSSelectorFromString();
      pcVar3 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_respondsToSelector__026ca818,pcVar5);
      puVar2 = PTR_s_AddLocalMsg_MsgWrap__0269ef90;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_respondsToSelector__026ca818,
                   PTR_s_AddLocalMsg_MsgWrap__0269ef90);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50[0],puVar2,*(undefined8 *)(param_1 + 0x20),local_60);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],pcVar5,*(undefined8 *)(param_1 + 0x20),local_60,0,0);
      }
      _objc_storeStrong(&local_68,0);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_50,0);
  return;
}

