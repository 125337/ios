// FUN_003c8f34 @ 003c8f34

void FUN_003c8f34(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_a8;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (DAT_028ca288 == local_28) {
    local_2c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar5 = local_28;
    if (((ulong)puVar4 & 1) == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar5;
      FUN_003c9b84();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar5;
      if (uVar5 == 0) {
        local_2c = 1;
      }
      else {
        _objc_getAssociatedObject(uVar5,&DAT_028ca295);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar5 == 0) {
          local_2c = 1;
        }
        else {
          uVar5 = local_40;
          _objc_getAssociatedObject(local_40,&DAT_028ca296);
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar5;
          if (uVar5 == 0) {
            local_2c = 1;
          }
          else {
            FUN_003c9db4();
            local_51 = 0;
            bVar2 = false;
            uVar1 = (uVar5 & 1) != 0;
            if ((bool)uVar1) {
              uVar5 = local_40;
              _objc_getAssociatedObject(local_40,&DAT_028ca297);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = uVar5 != 0;
              local_51 = uVar1;
              local_50 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar5);
              uVar1 = local_51;
            }
            local_51 = uVar1;
            if (bVar2) {
              FUN_003c9dc0(local_38,local_40);
              local_2c = 1;
            }
            else {
              FUN_003ca2ec(local_38);
              FUN_003ca3d4(local_40,0);
              uVar5 = local_40;
              _objc_getAssociatedObject(local_40,&DAT_028ca298);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = local_40;
              local_60 = uVar5;
              _objc_getAssociatedObject(local_40,&DAT_028ca299);
              _objc_retainAutoreleasedReturnValue();
              local_68 = local_a8;
              if (local_a8 == 0) {
                local_a8 = 2;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_integerValue_026ca750);
              }
              uVar5 = local_40;
              local_70 = local_a8;
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              FUN_00367110(uVar5,&cf_bAutoUpdate);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              uVar5 = local_40;
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              FUN_00367110(uVar5,&cf_bAlwayShowDefaultImage);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              FUN_00367110(local_40,&cf_defaultImage,local_48);
              uVar6 = local_40;
              FUN_003ca4e8();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_40;
              local_78 = uVar6;
              if (uVar6 == 0) {
                puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                if ((uVar5 & 1) != 0) {
                  _objc_storeStrong(&local_78,local_40);
                }
              }
              uVar5 = local_78;
              puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_setTintColor__026caab0,local_60);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_setContentMode__026ca8e0,local_70);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_setAccessibilityLabel__0269e968,&cf_4YP);
                uVar5 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978);
                if ((uVar5 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setImage__026ca978,local_48);
                }
              }
              uVar5 = local_40;
              _objc_getAssociatedObject(local_40,&DAT_028ca29a);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (uVar5 != 0) {
                FUN_003ca9fc(local_40);
              }
              _objc_storeStrong(&local_78);
              _objc_storeStrong(&local_68,0);
              _objc_storeStrong(&local_60,0);
              local_2c = 0;
            }
          }
          _objc_storeStrong(&local_48,0);
        }
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

