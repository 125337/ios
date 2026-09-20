// restoreEditorScrollPosition:selection:restoreSelection: @ 019698e8

/* Function Stack Size: 0x34 bytes */

void WCRefineFileManagerPreviewViewController::
     restoreEditorScrollPosition_selection_restoreSelection_
               (ID param_1,SEL param_2,CGPoint param_3,_NSRange param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  double local_160;
  double local_148;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined4 local_64;
  double local_60;
  byte local_51;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  dStack_38 = param_3.field1_0x8;
  local_40 = param_3.field0_0x0;
  local_51 = (byte)param_4.field0_0x0;
  local_50 = param_2;
  local_48 = param_1;
  local_30 = in_d0;
  uStack_28 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = (double)param_1;
  if ((double)param_1 == 0.0) {
    local_64 = 1;
  }
  else {
    if ((local_51 & 1) != 0) {
      local_70 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      dVar1 = (double)param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
      local_148 = dVar1;
      if ((ulong)local_70 < (ulong)dVar1) {
        local_148 = local_70;
      }
      local_80 = local_148;
      local_40 = local_148;
      local_88 = dStack_38;
      dVar2 = local_60;
      local_78 = dVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      dVar1 = dVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar1 = (double)((long)dVar1 - (long)local_40);
      (*(code *)PTR__objc_release_02578630)(dVar2);
      local_160 = dVar1;
      if ((ulong)local_88 < (ulong)dVar1) {
        local_160 = local_88;
      }
      local_98 = local_160;
      dStack_38 = local_160;
      dStack_a8 = local_160;
      local_b0 = local_40;
      dStack_b8 = local_160;
      local_c0 = local_40;
      local_90 = dVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setSelectedRange__026a0d48,local_40,local_160);
    }
    dVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layoutManager_026a34a8);
    _objc_retainAutoreleasedReturnValue();
    dVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_textContainer_026a34b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar1,PTR_s_ensureLayoutForTextContainer__026ba050);
    (*(code *)PTR__objc_release_02578630)(dVar2);
    (*(code *)PTR__objc_release_02578630)(dVar1);
    uStack_c8 = uStack_28;
    local_d0 = local_30;
    uStack_d8 = uStack_28;
    local_e0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,uStack_28,local_60,PTR_s_setContentOffset__0269e780);
    _objc_initWeak(auStack_e8,local_48);
    _objc_initWeak(auStack_f0,local_60);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_01969c88;
    local_118 = &DAT_0258a368;
    _objc_copyWeak(auStack_110,auStack_e8);
    _objc_copyWeak(auStack_108,auStack_f0);
    uStack_f8 = uStack_28;
    local_100 = local_30;
    _dispatch_async(puVar3,&local_130);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60,0);
  return;
}

