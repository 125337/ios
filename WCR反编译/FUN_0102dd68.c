// FUN_0102dd68 @ 0102dd68

/* WARNING: Type propagation algorithm not settling */

void FUN_0102dd68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long local_80;
  ulong local_70;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong(local_28 + 1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28[0];
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_70 = 0;
  }
  else {
    local_70 = local_28[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_statusCode_026a1578);
  if (local_70 == 0xce) {
    local_80 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_contentLengthFromResponse__026ade80,local_28[0]);
  }
  else {
    local_80 = 0;
  }
  if (0 < local_80) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataSize__026add88,local_80);
  }
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x28));
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(local_28,0);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

