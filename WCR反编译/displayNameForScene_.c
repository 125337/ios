// displayNameForScene: @ 015d62e0

/* Function Stack Size: 0x18 bytes */

ID WCRGlobalPageBackgroundStore::displayNameForScene_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_b8;
  undefined *local_a0;
  SEL local_98;
  ID local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = (undefined *)0x0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  local_88 = &cf_global;
  local_50 = &cf_hQ__;
  local_80 = &cf_main;
  local_48 = &cf__O;
  local_78 = &cf_contacts;
  local_40 = &cf_U_;
  local_70 = &cf_discover;
  local_38 = &cf_Ss;
  local_68 = &cf_me;
  local_30 = &::cf_b;
  local_60 = &cf_moments;
  local_28 = &cf_gSW;
  local_58 = &cf_chat;
  local_20 = &cf_J_Yu;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_50,&local_88,7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_b8 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

