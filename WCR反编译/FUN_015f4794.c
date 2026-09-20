// FUN_015f4794 @ 015f4794

void FUN_015f4794(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  char *local_30;
  char *local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_1c = 1;
  }
  else {
    pcVar2 = "CMessageMgr";
    _objc_getClass();
    FUN_015f9a60();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "MMNewSessionMgr";
    local_28 = pcVar2;
    _objc_getClass();
    FUN_015f9a60();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_ClearUnRead_FromID_ToID_;
    local_30 = pcVar3;
    _NSSelectorFromString();
    pcVar5 = &cf_ChangeSessionUnReadCount_to_;
    _NSSelectorFromString();
    pcVar6 = &cf_clearAtMeCount_;
    _NSSelectorFromString();
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar4,local_18,0,0xffffffff);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar5);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar5,local_18,0);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar6);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar6,local_18);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_recountUnReadCount_0269f8c0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_recountUnReadCount_0269f8c0);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

