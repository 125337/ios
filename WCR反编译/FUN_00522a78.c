// FUN_00522a78 @ 00522a78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00522a78(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint local_2ac;
  cfstringStruct *local_280;
  uint local_17c;
  cfstringStruct *local_148;
  undefined *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  long local_b8;
  byte local_a9;
  long local_a8;
  byte local_99;
  long local_98;
  byte local_89;
  long local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  byte local_6d;
  undefined8 local_60;
  long local_58;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_60 = param_2;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    (*DAT_028cb108)(local_58,local_60);
  }
  else {
    lVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_delStatus_026a4ac0);
    local_6d = (int)lVar4 != 0;
    (*DAT_028cb108)(local_58,local_60);
    if ((local_6d & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelStatus__026a4ac8,0);
      lVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 != 0) {
        pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_148 = &cf__;
        }
        else {
          local_148 = local_28;
        }
        (*(code *)PTR__objc_retain_02578638)();
        _objc_storeStrong(&local_28,0);
        _objc_autoreleaseReturnValue(local_148);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_78 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 0;
        local_99 = 0;
        lVar4 = local_58;
        local_80 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_17c = 0;
        if (lVar7 != 0) {
          lVar8 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_17c = (uint)lVar8 ^ 1;
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        (*(code *)PTR__objc_release_02578630)(lVar7);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if ((local_17c & 1) == 0) {
          local_a9 = 0;
          local_b9 = 0;
          lVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          if (lVar7 != 0) {
            lVar8 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
            _objc_retainAutoreleasedReturnValue();
            local_a9 = 1;
            local_a8 = lVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = lVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = lVar8 == 0;
          }
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if ((local_a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          (*(code *)PTR__objc_release_02578630)(lVar7);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          if (bVar1) {
            lVar4 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
        }
        else {
          lVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_comment_026a4ad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(lVar7);
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
      }
      lVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 != 0) {
        pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_40[0] = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_280 = &cf__;
        }
        else {
          local_280 = local_40[0];
        }
        (*(code *)PTR__objc_retain_02578638)();
        _objc_storeStrong(local_40,0);
        _objc_autoreleaseReturnValue(local_280);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c8 = local_280;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = local_58;
        local_d0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_2ac = 0;
        if (lVar7 != 0) {
          lVar8 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2ac = (uint)lVar10 ^ 1;
          (*(code *)PTR__objc_release_02578630)(lVar9);
          (*(code *)PTR__objc_release_02578630)(lVar8);
        }
        (*(code *)PTR__objc_release_02578630)(lVar7);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if ((local_2ac & 1) == 0) {
          lVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          if (lVar7 != 0) {
            lVar8 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = lVar10 == 0;
            (*(code *)PTR__objc_release_02578630)(lVar9);
            (*(code *)PTR__objc_release_02578630)(lVar8);
          }
          (*(code *)PTR__objc_release_02578630)(lVar7);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          if (bVar1) {
            lVar4 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
        }
        else {
          lVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refComment_026a4ae0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(lVar7);
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        _objc_storeStrong(&local_d0);
        _objc_storeStrong(&local_c8,0);
      }
    }
  }
  return;
}

