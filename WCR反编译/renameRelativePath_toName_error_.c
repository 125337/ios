// renameRelativePath:toName:error: @ 0108b714

/* Function Stack Size: 0x28 bytes */

bool WCRefineLocalEmoticonStore::renameRelativePath_toName_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ulong local_108;
  ID local_c0;
  byte local_b1;
  ulong local_b0;
  byte local_a1;
  ID local_a0;
  ulong local_98;
  ID local_90;
  ulong local_88;
  byte local_79;
  ID local_78;
  undefined4 local_6c;
  ID *local_68;
  ulong local_60;
  ulong local_58;
  SEL local_50;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  uVar2 = local_58;
  local_68 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_39 = 0;
    local_6c = 1;
  }
  else {
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf___all__);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_58;
      FUN_01085b64();
      if ((uVar2 & 1) == 0) {
        IVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_absolutePathFromRelative__026ae2c0,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 0;
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_78 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          local_39 = 0;
          local_6c = 1;
        }
        else {
          uVar2 = local_60;
          FUN_0108688c();
          _objc_retainAutoreleasedReturnValue();
          local_88 = uVar2;
          if (((local_79 & 1) == 0) ||
             ((FUN_01085b64(), (uVar2 & 1) == 0 &&
              (uVar2 = local_88,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__),
              (uVar2 & 1) == 0)))) {
            IVar3 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_stringByDeletingLastPathComponen_0269fb90);
            _objc_retainAutoreleasedReturnValue();
            local_108 = local_88;
            local_a1 = 0;
            local_b1 = 0;
            bVar1 = (local_79 & 1) == 0;
            local_90 = IVar3;
            if (bVar1) {
              IVar3 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              local_a1 = 1;
              local_a0 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_stringByAppendingPathExtension__026a4580);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = local_108;
            }
            else {
            }
            local_b1 = bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = local_108;
            if ((local_b1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_b0);
            }
            if ((local_a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_a0);
            }
            IVar3 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_stringByAppendingPathComponent__026cab30,local_98);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8,local_78);
            if ((IVar3 & 1) == 0) {
              puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar4);
              IVar3 = local_48;
              uVar2 = local_58;
              if (((ulong)puVar5 & 1) == 0) {
                local_39 = 0;
              }
              else {
                IVar6 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_relativePathFromAbsolute__026ae380,local_c0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_remapIndexKey_to__026ae388,uVar2);
                (*(code *)PTR__objc_release_02578630)(IVar6);
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_saveIndex_026ae268);
                FUN_0107ad08();
                local_39 = 1;
              }
            }
            else {
              local_39 = 1;
            }
            local_6c = 1;
            _objc_storeStrong(&local_c0);
            _objc_storeStrong(&local_98,0);
            _objc_storeStrong(&local_90,0);
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
            if (local_68 != (ID *)0x0) {
              local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
              local_30 = &cf_N9eb_gR_;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,
                         &cf_WCRefineLocalEmoticon,5);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *local_68 = (ID)puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            local_39 = 0;
            local_6c = 1;
          }
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_78,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setUngroupedDisplayName__026ae3a8,local_60);
        local_39 = 1;
        local_6c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAllDisplayName__026ae3a0,local_60);
      local_39 = 1;
      local_6c = 1;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_39 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

