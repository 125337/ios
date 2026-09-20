// FUN_000948cc @ 000948cc

void FUN_000948cc(undefined8 param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong local_198;
  long local_108;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  bool local_79;
  long local_78;
  long local_70 [2];
  ulong local_60;
  long local_58;
  int local_50;
  ulong local_40;
  ulong *local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  local_38 = param_2;
  FUN_00095c28();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if (uVar2 != 0) {
    pcVar3 = &cf_MsgRecordDetailViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar2 & 1) != 0) {
      local_58 = 0;
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_tableView);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_58,local_60);
      }
      _objc_storeStrong(&local_60,0);
      local_79 = false;
      bVar1 = local_58 == 0;
      if (bVar1) {
        local_108 = 0;
      }
      else {
        local_108 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_indexPathForCell__0269e208,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_108;
      }
      local_79 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70[0] = local_108;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (local_70[0] == 0) {
        local_28 = 0;
        local_50 = 1;
      }
      else {
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_valueForKey__0269d128,&cf_m_arrMessageData);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_88 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar2 = local_88;
        if ((uVar5 & 1) == 0) {
LAB_00094efc:
          local_50 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = uVar2;
          lVar6 = local_70[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_row_0269e210);
          if (lVar6 < 0) {
LAB_00094ec8:
            local_50 = 0;
          }
          else {
            lVar6 = local_70[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_row_0269e210);
            uVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
            uVar2 = local_90;
            if ((long)uVar5 <= lVar6) goto LAB_00094ec8;
            lVar6 = local_70[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_row_0269e210);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar6);
            _objc_retainAutoreleasedReturnValue();
            local_98 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_valueForKey__0269d128,&cf_m_nsAttachPath);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = uVar2;
            if (local_38 != (ulong *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar2 & 1) == 0) {
                local_198 = 0;
              }
              else {
                local_198 = local_a0;
              }
              _objc_retainAutorelease();
              *local_38 = local_198;
            }
            uVar2 = local_98;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar2;
            local_50 = 1;
            _objc_storeStrong(&local_a0);
            _objc_storeStrong(&local_98,0);
          }
          _objc_storeStrong(&local_90,0);
          if (local_50 == 0) goto LAB_00094efc;
        }
        _objc_storeStrong(&local_88,0);
        if (local_50 == 0) {
          local_28 = 0;
          local_50 = 1;
        }
      }
      _objc_storeStrong(local_70);
      _objc_storeStrong(&local_58,0);
      goto LAB_00094fc4;
    }
  }
  local_28 = 0;
  local_50 = 1;
LAB_00094fc4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

