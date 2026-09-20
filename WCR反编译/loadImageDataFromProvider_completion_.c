// loadImageDataFromProvider:completion: @ 01b6e4e4

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonLibraryViewController::loadImageDataFromProvider_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  long local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_138;
  int local_12c;
  long local_128;
  ulong local_120;
  SEL local_118;
  ID local_110;
  undefined1 auStack_108 [128];
  undefined8 local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = 0;
  local_118 = param_2;
  local_110 = param_1;
  _objc_storeStrong(&local_120,param_3,param_3,param_4,param_5);
  local_128 = 0;
  _objc_storeStrong(&local_128,param_4);
  if (local_128 == 0) {
    local_12c = 1;
  }
  else if (local_120 == 0) {
    (**(code **)(local_128 + 0x10))(local_128,0);
    local_12c = 1;
  }
  else {
    local_58 = &cf_com_compuserve_gif;
    local_50 = &cf_org_webmproject_webp;
    local_48 = &cf_public_png;
    local_40 = &cf_public_jpeg;
    local_38 = &cf_public_heic;
    local_30 = &cf_public_image;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)PTR__UTTypeGIF_025785d0;
    local_138 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_org_webmproject_webp;
    uVar5 = *(undefined8 *)PTR__UTTypePNG_02578600;
    local_88 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)PTR__UTTypeJPEG_025785f0;
    local_78 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__UTTypeHEIC_025785d8;
    local_70 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)PTR__UTTypeImage_025785e0;
    local_68 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_identifier_026a4a88);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_60 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,6
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_138;
    local_138 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    _memset(auStack_180,0,0x40);
    puVar3 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_108,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar11 = *local_170;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar11 != 0) {
            _objc_enumerationMutation(*local_170 - lVar11,puVar3);
          }
          local_140 = *(undefined8 *)(local_178 + (long)local_210 * 8);
          uVar10 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_hasItemConformingToTypeIdentifie_026b5980,local_140);
          uVar2 = local_120;
          lVar1 = local_128;
          uVar4 = local_140;
          if ((uVar10 & 1) != 0) {
            local_1a8 = PTR___NSConcreteStackBlock_02578660;
            local_1a0 = 0xc2000000;
            local_19c = 0;
            local_198 = FUN_01b6ea28;
            local_190 = &DAT_0258b388;
            (*(code *)PTR__objc_retain_02578638)();
            local_188 = lVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_loadDataRepresentationForTypeIde_026bfab0,uVar4,&local_1a8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            local_12c = 1;
            _objc_storeStrong(&local_188,0);
            goto LAB_01b6e990;
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_108,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    local_12c = 0;
LAB_01b6e990:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_12c == 0) {
      (**(code **)(local_128 + 0x10))(local_128,0);
      local_12c = 0;
    }
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

