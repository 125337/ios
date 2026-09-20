// FUN_00592fcc @ 00592fcc

void FUN_00592fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  char *local_50;
  undefined4 local_48;
  char *local_38;
  long local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_1;
  uStack_20 = param_2;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = "WCUploadMedia";
  _objc_getClass();
  local_38 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_18 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar1 = local_38;
    _objc_alloc_init();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setType__026a3cb8);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setType__026a3cb8,1);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setBuffer__026a5518);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBuffer__026a5518,local_30);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setImgSize__026a5520);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,uStack_20,local_50,PTR_s_setImgSize__026a5520);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

