// renameMediaFileName:toName:error: @ 015dacf0

/* Function Stack Size: 0x28 bytes */

bool WCRGlobalPageBackgroundStore::renameMediaFileName_toName_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ulong local_d0;
  long local_c8;
  ID local_c0;
  ID local_b8;
  long local_b0;
  ulong local_a8;
  undefined4 local_9c;
  long local_98;
  ulong local_90;
  ID *local_88;
  long local_80;
  ulong local_78;
  SEL local_70;
  ID local_68;
  byte local_59;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  uVar1 = local_78;
  local_88 = param_5;
  FUN_015d5afc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_80;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_90 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (lVar3 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if (local_88 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_Ty_Nzz;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRPageBackgroundStore,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_88 = (ID)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_59 = 0;
    local_9c = 1;
  }
  else {
    uVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_98;
    local_a8 = uVar1;
    FUN_015d5afc();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (lVar4 == 0) {
      lVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_stringByAppendingPathExtension__026a4580,local_a8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_b0;
      local_b0 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    IVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isSupportedFileName__026b0fd0,local_b0);
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if ((IVar5 & 1) == 0) {
      if (local_88 != (ID *)0x0) {
        local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_40 = &cf_eN<h_NS_ec;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRPageBackgroundStore,2
                  );
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_88 = (ID)puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      local_59 = 0;
      local_9c = 1;
    }
    else {
      uVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_b0);
      if ((uVar1 & 1) == 0) {
        IVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_repositoryPath_026aeb48);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_repositoryPath_026aeb48);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
        if (((ulong)puVar7 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          IVar5 = local_68;
          uVar1 = local_90;
          if (((ulong)puVar7 & 1) == 0) {
            local_59 = 0;
            local_9c = 1;
          }
          else {
            local_f0 = PTR___NSConcreteStackBlock_02578660;
            local_e8 = 0xc2000000;
            local_e4 = 0;
            local_e0 = FUN_015db530;
            local_d8 = &DAT_02587428;
            (*(code *)PTR__objc_retain_02578638)();
            lVar3 = local_b0;
            local_d0 = uVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_updateConfiguration__026b0fd8,&local_f0);
            local_59 = 1;
            local_9c = 1;
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_d0,0);
          }
        }
        else {
          if (local_88 != (ID *)0x0) {
            local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
            local_50 = &cf_TTof_X__W;
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,
                       &cf_WCRPageBackgroundStore,3);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *local_88 = (ID)puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          local_59 = 0;
          local_9c = 1;
        }
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_b8,0);
      }
      else {
        local_59 = 1;
        local_9c = 1;
      }
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_59 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

