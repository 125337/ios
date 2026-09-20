// FUN_010e6d54 @ 010e6d54

void FUN_010e6d54(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_c0;
  ulong local_b8;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  ulong local_80;
  ulong local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  uVar2 = local_80;
  if (local_80 == 0) {
    local_78 = 0;
    local_84 = 1;
  }
  else {
    local_58 = &cf_userName;
    local_50 = &cf_username;
    local_48 = &cf_m_nsUsrName;
    local_40 = &cf_m_nsUserName;
    local_38 = &cf_m_nsRealUsrName;
    local_30 = &cf_m_nsHeadImgUsrName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_010ed1a8();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    uVar2 = local_90;
    if (uVar3 == 0) {
      local_98 = 0;
      uVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_m_sessionInfo_026a6320);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_sessionInfo_026a6320);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_98;
        local_98 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (local_98 == 0) {
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_valueForKey__0269d128,&cf_m_sessionInfo);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_98;
        local_98 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (local_98 == 0) {
        uVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_class_0269cd60);
        _class_getInstanceVariable();
        local_b8 = uVar2;
        if (uVar2 != 0) {
          uVar3 = local_80;
          _object_getIvar(local_80,uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_98;
          local_98 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
      uVar2 = local_98;
      local_70 = &cf_m_nsUserName;
      local_68 = &cf_m_nsUsrName;
      local_60 = &cf_m_nsSessionUserName;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      FUN_010ed1a8();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_90;
      local_90 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      uVar2 = local_90;
      if (uVar3 == 0) {
        local_c0 = 0;
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_valueForKey__0269d128,&cf_m_contact);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_c0;
        local_c0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_c0 == 0) {
          uVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_valueForKey__0269d128,&cf_m_contact);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_c0;
          local_c0 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_c0;
        FUN_010e6288();
        _objc_retainAutoreleasedReturnValue();
        local_84 = 1;
        local_78 = uVar2;
        _objc_storeStrong(&local_c0,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar2;
        local_84 = 1;
      }
      _objc_storeStrong(&local_98,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar2;
      local_84 = 1;
    }
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

