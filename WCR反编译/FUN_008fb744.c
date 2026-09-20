// FUN_008fb744 @ 008fb744

void FUN_008fb744(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *local_58;
  char *local_50;
  long local_48;
  char *local_40;
  char *local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar3 = "ForwardMessageMgr";
  _objc_getClass();
  pcVar4 = "MMContext";
  local_28 = pcVar3;
  _objc_getClass();
  lVar5 = local_20;
  local_40 = pcVar4;
  FUN_008fb9e4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar5;
  if (((local_28 != (char *)0x0) && (local_40 != (char *)0x0)) && (lVar5 != 0)) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_forwardMessage_fromViewControlle_026a38a8;
    local_58 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,
                   PTR_s_forwardMessage_fromViewControlle_026a38a8), ((ulong)pcVar3 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar2,local_18,local_48);
      bVar1 = true;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    if (bVar1) goto LAB_008fb978;
  }
  FUN_008fbc64(&cf_lSLubNS_u);
LAB_008fb978:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

