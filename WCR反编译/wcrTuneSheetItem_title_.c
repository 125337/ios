// wcrTuneSheetItem:title: @ 017d7510

/* Function Stack Size: 0x20 bytes */

void WCRefineAISettingsViewController::wcrTuneSheetItem_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_e0;
  undefined **local_c0;
  uint local_b4;
  double local_b0;
  undefined8 local_a8;
  byte local_99;
  undefined *local_98;
  double local_90;
  double local_88;
  double local_68;
  undefined *local_60;
  long local_58;
  ulong local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  uVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setBForbidAdjustFont__026b4ef0);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBForbidAdjustFont__026b4ef0,1);
  }
  local_e0 = 17.0;
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_88 = local_e0;
  _CGRectGetWidth(local_e0,in_d1,in_d2,in_d3);
  uVar9 = 0x4048000000000000;
  local_e0 = local_e0 - 48.0;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  lVar6 = local_58;
  local_68 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  lVar2 = local_58;
  local_99 = 0;
  if (lVar6 == 0) {
    local_e0 = 0.0;
  }
  else {
    local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_30 = local_60;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_sizeWithAttributes__026cab08);
    local_b0 = local_e0;
    local_a8 = uVar9;
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  local_90 = local_e0;
  if ((local_68 < local_e0) &&
     (uVar7 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setItemHeight__026b4ef8),
     uVar3 = local_50, puVar4 = PTR_s_setItemHeight__026b4ef8, (uVar7 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lineHeight_0269e7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0 * 2.0 + 32.0,uVar3,puVar4);
  }
  uVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setItemViewConfigAction__026b4f00);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    ppuVar8 = &PTR___NSConcreteGlobalBlock_02589168;
    _objc_retainBlock();
    uVar3 = local_50;
    puVar4 = PTR_s_setItemViewConfigAction__026b4f00;
    local_c0 = ppuVar8;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar4);
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    _objc_storeStrong(&local_c0,0);
  }
  local_b4 = (uint)!bVar1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

