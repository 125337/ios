// updateRemark:forItem:completion: @ 01133990

/* Function Stack Size: 0x28 bytes */

bool WCRefineQuickReplyStore::updateRemark_forItem_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID local_c8;
  ID local_c0;
  ulong local_b8;
  byte local_a9;
  ID local_a8;
  ulong local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  int local_54;
  long local_50;
  ulong local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar3 = local_48;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    lVar4 = local_40;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_60 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_type)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_repository);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_01130f58();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        IVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_customItems_026af318);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a8 = IVar7;
        (*(code *)PTR__objc_release_02578630)(IVar6);
        local_a9 = 0;
        local_b8 = 0;
        while( true ) {
          uVar3 = local_b8;
          IVar6 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
          if (IVar6 <= uVar3) break;
          IVar6 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_b8);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          IVar7 = IVar6;
          FUN_01130f58();
          _objc_retainAutoreleasedReturnValue();
          IVar8 = IVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar7);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          if ((IVar8 & 1) == 0) {
            local_54 = 4;
          }
          else {
            IVar6 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mutableCopy_0269d8a0);
            lVar4 = local_60;
            local_c8 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
            if (lVar4 == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_removeObjectForKey__0269d700,&cf_remark);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_remark);
            }
            IVar6 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_setObject_atIndexedSubscript__0269e970,IVar6,local_b8);
            (*(code *)PTR__objc_release_02578630)(IVar6);
            local_a9 = 1;
            local_54 = 2;
            _objc_storeStrong(&local_c8,0);
          }
          _objc_storeStrong(&local_c0,0);
          if (local_54 == 2) break;
          local_b8 = local_b8 + 1;
        }
        if ((local_a9 & 1) == 0) {
          local_21 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCustomItems__026af320,local_a8);
          if (local_50 != 0) {
            (**(code **)(local_50 + 0x10))(local_50,1,0);
          }
          local_21 = 1;
        }
        local_54 = 1;
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    else {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_01130f58();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      lVar1 = local_50;
      lVar4 = local_60;
      uVar3 = local_70;
      puVar2 = PTR_WCRefineMessageRepositoryStore_026ce120;
      if (uVar5 == 0) {
        local_21 = 0;
      }
      else {
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_01134040;
        local_80 = &DAT_02585990;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_renameItemId_toRemark_completion_026af350,uVar3,lVar4,&local_98);
        local_21 = (byte)puVar2 & 1;
        _objc_storeStrong(&local_78,0);
      }
      local_54 = 1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

