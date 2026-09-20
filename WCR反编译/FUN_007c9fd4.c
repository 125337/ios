// FUN_007c9fd4 @ 007c9fd4

void FUN_007c9fd4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  local_38 = 0;
  if (((DAT_026f46b8 & 1) != 0) && ((DAT_028cce20 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_30;
      FUN_007ca748();
      if ((uVar3 & 1) == 0) {
        local_28 = 0;
        local_48 = 1;
      }
      else {
        uVar4 = local_30;
        FUN_007ca964();
        uVar3 = local_30;
        if ((uVar4 & 1) == 0) {
          local_28 = 0;
          local_48 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_50 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          bVar1 = false;
          if (uVar3 == 0) {
            uVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_attributedText_0269fcf8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = uVar4 != 0;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          if (bVar1) {
            uVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_attributedText_0269fcf8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_58;
            local_58 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          uVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          bVar1 = true;
          if (uVar3 != 0) {
            uVar3 = local_58;
            FUN_007caf14();
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar3 == 0;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          if (bVar1) {
            local_28 = 0;
          }
          else {
            uVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_traitCollection_026caba8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            FUN_007cb9b8();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_38;
            local_38 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar3 = local_38;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar3;
          }
          local_48 = 1;
          _objc_storeStrong(&local_58);
          _objc_storeStrong(&local_50,0);
        }
      }
      goto LAB_007ca4e4;
    }
  }
  local_28 = 0;
  local_48 = 1;
LAB_007ca4e4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

