// addAction:name:icon:handler: @ 0160715c

/* Function Stack Size: 0x30 bytes */

void WCRSuperFloatMgr::addAction_name_icon_handler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  undefined *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_4);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_6);
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    local_6c = 1;
  }
  else {
    local_38 = &cf_title;
    if (local_58 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_58;
    }
    local_28 = local_a0;
    local_30 = &cf_action;
    if (local_50 == (cfstringStruct *)0x0) {
      local_b0 = &::cf___;
    }
    else {
      local_b0 = local_50;
    }
    local_20 = local_b0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_icon);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_registerAction_handler__026b1828,local_78,local_68);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

