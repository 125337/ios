// FUN_0179810c @ 0179810c

void FUN_0179810c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_50;
  undefined4 local_48;
  char local_41;
  long local_40;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_41 = '\0';
  bVar1 = true;
  local_28 = param_3;
  if ((local_18 != 0) && (bVar1 = true, local_20 != 0)) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_41 = '\x01';
    bVar1 = lVar2 == 0;
    local_40 = lVar2;
  }
  if (local_41 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    local_48 = 1;
  }
  else {
    if (DAT_028e4088 == (char *)0x0) {
      pcVar3 = "MMServiceCenter";
      _objc_getClass();
      DAT_028e4088 = pcVar3;
    }
    pcVar3 = DAT_028e4088;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    if (DAT_028e4098 == (char *)0x0) {
      pcVar4 = "QuickReplyMsgMgr";
      _objc_getClass();
      DAT_028e4098 = pcVar4;
    }
    pcVar4 = DAT_028e4098;
    _objc_retainAutoreleaseReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_showPageSheetSession_fromViewCon_026a2508,local_18,local_20);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

