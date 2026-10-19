// traceState: @0x2f094

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::traceState_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_184;
  undefined **local_180;
  undefined8 local_168;
  undefined **local_150;
  undefined **local_140;
  undefined8 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined **local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  _objc_msgSend_facade(local_e0,local_130);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_00110718;
  _Call(uVar2,&cf_timelineMgr);
  local_f8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _Call(local_f8,&cf_getCache,puVar1);
  local_100 = _objc_retainAutoreleasedReturnValue();
  _Call(local_f8,&cf_dataProvider,puVar1);
  local_108 = _objc_retainAutoreleasedReturnValue();
  uVar2 = local_f0;
  local_d8 = &cf_nativeCount;
  _objc_msgSend_facade(local_e0,local_130);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar3,&cf_countOfTimelineDataItem,puVar1);
  ppuVar4 = (undefined **)_objc_retainAutoreleasedReturnValue();
  local_140 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    local_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fce0;
  }
  local_80 = local_140;
  local_d0 = &cf_sessionActive;
  _Call(local_f8,&cf_isInSession,PTR____NSArray0__struct_00110718);
  ppuVar5 = (undefined **)_objc_retainAutoreleasedReturnValue();
  uVar8 = local_100;
  local_150 = ppuVar5;
  if (ppuVar5 == (undefined **)0x0) {
    local_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fce0;
  }
  local_78 = local_150;
  local_c8 = &cf_managerCount;
  uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);
  uVar7 = _objc_opt_isKindOfClass(uVar8,uVar6);
  if ((uVar7 & 1) == 0) {
    local_168 = 0xffffffffffffffff;
  }
  else {
    local_168 = _objc_msgSend_count(local_100,local_130);
  }
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,local_168);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  local_c0 = &cf_providerBusy;
  local_70 = uVar8;
  _Call(local_108,&cf_isUpdating,PTR____NSArray0__struct_00110718);
  ppuVar9 = (undefined **)_objc_retainAutoreleasedReturnValue();
  local_180 = ppuVar9;
  if (ppuVar9 == (undefined **)0x0) {
    local_180 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fce0;
  }
  local_68 = local_180;
  local_b8 = &cf_limit;
  uVar6 = _objc_msgSend_limit(local_e0,local_130);
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar6);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_headPending;
  local_60 = uVar6;
  uVar7 = _objc_msgSend_initialHeadPending(local_e0,local_130);
  local_184 = 1;
  if ((uVar7 & 1) == 0) {
    local_184 = _objc_msgSend_refreshingHead(local_e0,local_130);
  }
  _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_130,local_184 & 1);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  local_a8 = &cf_tailPending;
  local_58 = uVar10;
  uVar11 = _objc_msgSend_loadingTail(local_e0,local_130);
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar11);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf_end;
  local_50 = uVar11;
  uVar12 = _objc_msgSend_exhausted(local_e0,local_130);
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar12);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  local_98 = &cf_webReady;
  local_48 = uVar12;
  uVar13 = _objc_msgSend_ready(local_e0,local_130);
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar13);
  uVar13 = _objc_retainAutoreleasedReturnValue();
  local_90 = &cf_exportPending;
  local_40 = uVar13;
  _objc_msgSend_pendingExports(local_e0,local_130);
  uVar14 = _objc_retainAutoreleasedReturnValue();
  uVar15 = _objc_msgSend_count(uVar14,local_130);
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar15);
  uVar15 = _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_renderedRows;
  local_38 = uVar15;
  _objc_msgSend_cachedRows(local_e0,local_130);
  uVar16 = _objc_retainAutoreleasedReturnValue();
  uVar17 = _objc_msgSend_count(uVar16,local_130);
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar17);
  uVar17 = _objc_retainAutoreleasedReturnValue();
  local_30 = uVar17;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_130,&local_80,&local_d8,0xb);
  uVar18 = _objc_retainAutoreleasedReturnValue();
  _Trace(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar18);
  (*(code *)PTR__objc_release_00110458)(uVar17);
  (*(code *)PTR__objc_release_00110458)(uVar16);
  (*(code *)PTR__objc_release_00110458)(uVar15);
  (*(code *)PTR__objc_release_00110458)(uVar14);
  (*(code *)PTR__objc_release_00110458)(uVar13);
  (*(code *)PTR__objc_release_00110458)(uVar12);
  (*(code *)PTR__objc_release_00110458)(uVar11);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(ppuVar9);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(ppuVar5);
  (*(code *)PTR__objc_release_00110458)(ppuVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

