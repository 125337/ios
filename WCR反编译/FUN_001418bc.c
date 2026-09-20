// FUN_001418bc @ 001418bc

void FUN_001418bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_tag_026cab98);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  }
  uVar1 = local_18;
  _WCRChatAttachmentHandleClick(local_18,local_28);
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8760)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

