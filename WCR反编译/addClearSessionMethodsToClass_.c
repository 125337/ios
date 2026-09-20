// addClearSessionMethodsToClass: @ 00167ab8

/* Function Stack Size: 0x18 bytes */

void WCRefineClearSessionHook::addClearSessionMethodsToClass_(ID param_1,SEL param_2,CLASS param_3)

{
  CLASS CVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  CLASS local_f0;
  SEL local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = &cf_WCRefine_onClearSession;
  local_50 = &cf_WCRefine_clearSession_deleteAll;
  local_48 = &cf_WCRefine_clearSession_hideAll;
  local_40 = &cf_WCRefine_clearSession_select;
  local_38 = &cf_WCRefine_clearSession_batchHide;
  local_30 = &cf_WCRefine_clearSession_batchDelete;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_f0 = param_3;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar2;
  _memset(auStack_140,0,0x40);
  puVar2 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d8,0x10);
  if (local_170 != (undefined *)0x0) {
    lVar5 = *local_130;
    local_178 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar5 != 0) {
          _objc_enumerationMutation(*local_130 - lVar5,puVar2);
        }
        uVar6 = *(undefined8 *)(local_138 + (long)local_178 * 8);
        local_100 = uVar6;
        _NSSelectorFromString();
        IVar3 = local_e0;
        _class_getInstanceMethod(local_e0,uVar6);
        CVar1 = local_f0;
        if (IVar3 != 0) {
          IVar4 = IVar3;
          _method_getImplementation();
          _method_getTypeEncoding(IVar3);
          _class_addMethod(CVar1,uVar6,IVar4,IVar3);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d8,0x10)
      ;
      local_178 = (undefined *)0x0;
    } while (local_170 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

