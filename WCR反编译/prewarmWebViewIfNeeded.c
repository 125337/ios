// prewarmWebViewIfNeeded @ 01e72384

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::prewarmWebViewIfNeeded(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_f0;
  cfstringStruct *local_b0;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_3d;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_toDoCardEnabled_026a3208);
  if (((((ulong)pcVar1 & 1) == 0) ||
      (pcVar1 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardSourceMode_026a8828),
      pcVar1 != (cfstringStruct *)((long)&MACH_HEADER.magic + 2))) ||
     (DAT_028e47d0 != (undefined *)0x0)) {
    local_3c = 1;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWebJavaScriptEnabled_026c6dc0);
    local_3d = (byte)pcVar1;
    puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
    _objc_alloc();
    uVar8 = 0;
    uVar7 = 0;
    uVar10 = 0x3ff0000000000000;
    uVar9 = 0x3ff0000000000000;
    FUN_01e728c8();
    uVar3 = (ulong)(local_3d & 1);
    local_60 = uVar7;
    local_58 = uVar8;
    local_50 = uVar9;
    local_48 = uVar10;
    FUN_01e72914();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,local_58,local_50,local_48,puVar2,
               PTR_s_initWithFrame_configuration__026a1ce0);
    puVar4 = DAT_028e47d0;
    DAT_028e47d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    DAT_028c69f8 = local_3d & 1;
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWebURL_026c6dd0);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_f0 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_88 != (undefined *)0x0) {
        pcVar5 = local_38;
        FUN_01e73df8(local_38,local_88);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = DAT_028e47d8;
        DAT_028e47d8 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        _objc_storeStrong(&DAT_028e47e0,0);
        _objc_storeStrong(&DAT_028e47f0,DAT_028e47d8);
        puVar4 = DAT_028e47d0;
        puVar6 = PTR__OBJC_CLASS___NSURLRequest_026ce7e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLRequest_026ce7e8,PTR_s_requestWithURL__026a16e0,local_88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_loadRequest__026a1ce8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = DAT_028e47e8;
        DAT_028e47e8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      _objc_storeStrong(&local_88,0);
    }
    else {
      FUN_01e6df84();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar1;
      FUN_01e72c78();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_38;
      local_70 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWebHTML_026c6dc8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      FUN_01e72d60();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_b0;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar1 = local_38;
      FUN_01e737c8(local_38,local_78,local_68);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_78;
      local_80 = pcVar1;
      FUN_01e73924(local_78,local_70,local_68);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_78;
      local_78 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        _objc_storeStrong(&DAT_028e47d8,local_80);
        _objc_storeStrong(&DAT_028e47e0,0);
        _objc_storeStrong(&DAT_028e47f0,DAT_028e47d8);
        pcVar1 = local_78;
        puVar4 = DAT_028e47d0;
        pcVar5 = local_68;
        FUN_01e73d50();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_loadHTMLString_baseURL__026a1cf0,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = DAT_028e47e8;
        DAT_028e47e8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

