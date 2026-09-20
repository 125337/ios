// FUN_0015219c @ 0015219c

void FUN_0015219c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_98;
  ulong local_58;
  cfstringStruct *local_50;
  undefined1 local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  if (local_18 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_msgAttachmentBeautifyEnabled_0269f440);
      if (((ulong)pcVar4 & 1) == 0) {
        FUN_001525dc(local_18);
        local_28 = 1;
      }
      else {
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgAttachmentBgFolder_0269f530);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_98 = &cf__;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = local_98;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_38;
        FUN_00152a30();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_18;
        local_40 = pcVar4;
        FUN_00152c80();
        local_41 = (undefined1)uVar3;
        pcVar4 = local_40;
        FUN_00152ddc(local_40,local_38,(uint)uVar3 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
        if (pcVar4 == (cfstringStruct *)0x0) {
          FUN_001525dc(local_18);
          local_28 = 1;
        }
        else {
          uVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_50;
          pcVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgAttachmentBgVideoMuted_0269f538);
          uVar6 = uVar3;
          FUN_00153898(uVar3,pcVar4,(ulong)pcVar5 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          bVar1 = local_58 != 0;
          if (bVar1) {
            FUN_00154810(local_18,local_58);
          }
          local_28 = (uint)!bVar1;
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_40,0);
        _objc_storeStrong(&local_38,0);
      }
      _objc_storeStrong(&local_30,0);
      goto LAB_00152550;
    }
  }
  local_28 = 1;
LAB_00152550:
  _objc_storeStrong(&local_18,0);
  return;
}

