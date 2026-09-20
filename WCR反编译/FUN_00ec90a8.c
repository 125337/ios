// FUN_00ec90a8 @ 00ec90a8

void FUN_00ec90a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_b8;
  undefined *local_b0;
  ulong local_a8;
  undefined4 local_9c;
  ulong local_98;
  undefined8 local_90;
  ulong local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_1);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_2);
  uVar1 = local_88;
  FUN_00ec5d9c(local_88,local_90);
  _objc_retainAutoreleasedReturnValue();
  local_98 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_98, FUN_00ec61c8(), (uVar1 & 1) != 0)) {
    local_80 = (undefined *)0x0;
    local_9c = 1;
  }
  else {
    uVar1 = local_88;
    FUN_00ec4b28(local_88,&cf_nsTitle);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      _objc_storeStrong(&local_a8,local_98);
    }
    local_78 = &cf_id;
    local_50 = local_98;
    local_70 = &cf_title;
    local_48 = local_a8;
    local_68 = &cf_sourceTitle;
    local_40 = local_a8;
    local_60 = &cf_enabled;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_kind;
    local_30 = &cf_native;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_98;
    _WCRChatAttachmentCatalogIconName(local_98,local_a8);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,local_b8,&cf_icon);
    }
    puVar3 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar3;
    local_9c = 1;
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

