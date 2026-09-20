// FUN_01da8cf8 @ 01da8cf8

void FUN_01da8cf8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar5 = local_20;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_wcr_label_font_color__026c4e70,lVar5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextAlignment__026caa90);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNumberOfLines__026ca9d8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLineBreakMode__026ca988,4);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
    uVar6 = 0;
    uVar4 = 0x4070c00000000000;
    uVar8 = 0x4032000000000000;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,uVar4,uVar8,local_38,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addSubview__026ca4c0,local_38);
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(double *)(lVar5 + 0x18) = *(double *)(lVar5 + 0x18) + 18.0;
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_20,0);
  return;
}

