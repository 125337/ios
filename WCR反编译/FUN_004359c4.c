// FUN_004359c4 @ 004359c4

void FUN_004359c4(ulong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_b8;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  undefined4 local_7c;
  ulong local_78;
  ulong local_70 [3];
  byte local_51;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_51 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = 1;
  if (((ulong)puVar3 & 1) != 0) {
    bVar1 = local_51 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((bVar1 & 1) == 0) {
    uVar4 = local_48;
    FUN_00436dfc(local_48,"m_arrMsgCanBeOprate");
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = uVar4;
    FUN_0043829c();
    uVar5 = local_70[0];
    local_78 = uVar4;
    if (uVar4 < 0x65) {
      (*DAT_028ca940)(local_48,local_50,local_51 & 1);
      local_7c = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar5 & 1) == 0) {
        (*DAT_028ca940)(local_48,local_50,local_51 & 1);
        local_7c = 1;
      }
      else {
        uVar4 = local_70[0];
        FUN_0043859c(local_70[0],100);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
        uVar5 = local_78;
        if (uVar4 < 2) {
          (*DAT_028ca940)(local_48,local_50,local_51 & 1);
          local_7c = 1;
        }
        else {
          uVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
          FUN_004388a8(uVar5,uVar4);
          FUN_004389c8();
          uVar5 = local_88;
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          uVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
          local_90 = uVar4 - 1;
          local_38 = 1;
          local_30 = 1;
          local_98 = 1;
          local_40 = local_90;
          local_28 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_subarrayWithRange__0269d848,1,local_90);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = DAT_028ca880;
          DAT_028ca880 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          _objc_storeWeak(&DAT_028ca898,local_48);
          uVar5 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_178 = uVar4;
          if (uVar4 == 0) {
            local_a8 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_178 = local_b8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = local_178;
          if (uVar4 == 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          FUN_00438a34(local_48,"m_arrMsgCanBeOprate",local_a0);
          (*DAT_028ca940)(local_48,local_50,local_51 & 1);
          _objc_storeStrong(&local_a0,0);
          local_7c = 0;
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(local_70,0);
  }
  else {
    (*DAT_028ca940)(local_48,local_50,local_51 & 1);
  }
  return;
}

