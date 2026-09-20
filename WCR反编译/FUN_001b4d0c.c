// FUN_001b4d0c @ 001b4d0c

void FUN_001b4d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *local_70;
  undefined4 local_68;
  char *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  char *local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  pcVar2 = "MMMultiMenuItem";
  _objc_getClass();
  local_58 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_28 = (char *)0x0;
    local_68 = 1;
  }
  else {
    pcVar2 = local_58;
    _objc_alloc_init();
    puVar1 = PTR_s_setEditingStyle__0269ff68;
    local_70 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_28 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setEditingStyle__0269ff68);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar1,local_30);
      }
      puVar1 = PTR_s_setBackgroundColor__026ca888;
      if ((local_40 != 0) &&
         (pcVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setBackgroundColor__026ca888),
         ((ulong)pcVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar1,local_40);
      }
      puVar1 = PTR_s_setNsTitle__0269ff70;
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setNsTitle__0269ff70);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar1,local_38);
      }
      puVar1 = PTR_s_setConfirmMenuItem__0269ff78;
      if ((local_48 != 0) &&
         (pcVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setConfirmMenuItem__0269ff78),
         ((ulong)pcVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar1,local_48);
      }
      puVar1 = PTR_s_setClickAction__0269ff80;
      if ((local_50 != 0) &&
         (pcVar4 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setClickAction__0269ff80),
         pcVar2 = local_70, ((ulong)pcVar4 & 1) != 0)) {
        lVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,lVar3);
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      pcVar2 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_68 = 1;
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

