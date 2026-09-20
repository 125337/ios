// FUN_000726bc @ 000726bc

/* WARNING: Type propagation algorithm not settling */

void FUN_000726bc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_bc;
  ulong local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong(local_28 + 1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  uVar2 = local_28[0];
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_objectForKey__0269e048,&cf_configured);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = local_28[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28[0],PTR_s_objectForKey__0269e048,&cf_chatPageEnabled);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_bc = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_28[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28[0],PTR_s_objectForKey__0269e048,&cf_chatListEnabled);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_bc = (uint)uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_bc & 1) != 0) {
        **(undefined1 **)(param_1 + 0x20) = 1;
        *param_4 = 1;
      }
    }
  }
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

