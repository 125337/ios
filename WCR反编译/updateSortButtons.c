// updateSortButtons @ 01982bac

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::updateSortButtons(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_e0;
  undefined *local_90;
  undefined *local_80;
  undefined *local_78;
  byte local_6d;
  undefined4 local_6c;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined1 local_49;
  undefined *local_48;
  SEL local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRFileManagerState_026cf1c8;
  local_40 = param_2;
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRFileManagerState_026cf1c8;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_49 = SUB81(puVar3,0);
  local_30 = &cf_Ty;
  local_28 = &cf_eg;
  local_20 = &cf__Y_;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  for (local_60 = (undefined *)0x0; (long)local_60 < 3; local_60 = local_60 + 1) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topToolbar_026ba3c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_68;
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_6c = 4;
    }
    else {
      local_6d = local_48 == local_60;
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      if ((local_6d & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_78;
        local_78 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      local_e0 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTitle_forState__026caab8,local_78,0);
      puVar2 = local_68;
      bVar1 = (local_6d & 1) == 0;
      if (bVar1) {
        local_e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_e0;
      }
      else {
        FUN_0197f418();
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_e0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setTitleColor_forState__026caac0,local_e0,0);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      _objc_storeStrong(&local_78,0);
      local_6c = 0;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(local_60 + -3,&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

