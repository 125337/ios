// FUN_0006db48 @ 0006db48

byte FUN_0006db48(undefined8 param_1,ulong *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  int iVar6;
  cfstringStruct *local_170;
  cfstringStruct *local_b0;
  long local_a8;
  cfstringStruct *local_a0;
  byte local_92;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  int local_48;
  ulong *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar4 = local_30;
  local_38 = param_2;
  if (local_30 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = local_30;
      _WCRNameplateViewIsProtected();
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98);
        if (pcVar4 == (cfstringStruct *)0x24f6e5) {
          local_21 = 0;
          local_48 = 1;
        }
        else {
          pcVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_21 = 0;
            local_48 = 1;
          }
          else {
            pcVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            puVar1 = (undefined1 *)((long)&pcVar5[-0x127b8].field3_0x18 + 4);
            if (puVar1 == (undefined1 *)0x0) {
              local_21 = 0;
              local_48 = 1;
            }
            else {
              pcVar4 = local_30;
              FUN_0006cc88(puVar1);
              if (((ulong)pcVar4 & 1) == 0) {
                local_51 = 0;
                local_61 = 0;
                local_71 = 0;
                pcVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = false;
                if (pcVar4 == (cfstringStruct *)0x0) {
                  pcVar5 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_highlightedImage_0269dee0);
                  _objc_retainAutoreleasedReturnValue();
                  local_51 = 1;
                  bVar2 = false;
                  local_50 = pcVar5;
                  if (pcVar5 == (cfstringStruct *)0x0) {
                    pcVar5 = local_30;
                    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
                    _objc_retainAutoreleasedReturnValue();
                    local_61 = 1;
                    local_60 = pcVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_71 = 1;
                    bVar2 = pcVar5 == (cfstringStruct *)0x0;
                    local_70 = pcVar5;
                  }
                }
                if ((local_71 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_70);
                }
                if ((local_61 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_60);
                }
                if ((local_51 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_50);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                if (bVar2) {
                  local_21 = 0;
                  local_48 = 1;
                }
                else {
                  local_170 = local_30;
                  FUN_00071ca0();
                  _objc_retainAutoreleasedReturnValue();
                  local_91 = false;
                  bVar2 = local_170 == (cfstringStruct *)0x0;
                  local_80 = local_170;
                  if (bVar2) {
                    local_170 = &cf___;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_class_0269cd60);
                    _NSStringFromClass();
                    _objc_retainAutoreleasedReturnValue();
                    local_90 = local_170;
                  }
                  local_91 = !bVar2;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_88 = local_170;
                  if ((local_91 & 1U) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_90);
                  }
                  pcVar4 = local_88;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_88,PTR_s_containsString__0269d0b0,&cf_ContactsViewController);
                  if (((ulong)pcVar4 & 1) == 0) {
                    local_21 = 0;
                    local_48 = 1;
                  }
                  else {
                    pcVar4 = local_30;
                    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98);
                    puVar1 = (undefined1 *)((long)&pcVar4[-0x12a].field1_0x8 + 1);
                    if (puVar1 == (undefined1 *)0x0) {
                      local_21 = 0;
                      local_48 = 1;
                    }
                    else {
                      pcVar4 = local_30;
                      FUN_0006d064(puVar1,local_30,0);
                      if (((ulong)pcVar4 & 1) == 0) {
                        local_92 = 0;
                        pcVar4 = local_30;
                        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
                        _objc_retainAutoreleasedReturnValue();
                        local_a0 = pcVar4;
                        for (local_a8 = 0; local_a0 != (cfstringStruct *)0x0 && local_a8 < 8;
                            local_a8 = local_a8 + 1) {
                          pcVar4 = local_a0;
                          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_class_0269cd60);
                          _NSStringFromClass();
                          _objc_retainAutoreleasedReturnValue();
                          local_b0 = pcVar4;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (pcVar4,PTR_s_containsString__0269d0b0,&cf_ContactsItemView);
                          if ((((ulong)pcVar4 & 1) == 0) &&
                             (pcVar4 = local_b0,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_b0,PTR_s_containsString__0269d0b0,
                                        &cf_NewContactsItemCell), ((ulong)pcVar4 & 1) == 0)) {
                            pcVar4 = local_b0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_b0,PTR_s_isEqualToString__0269ccc8,&cf_MMHeadImageView)
                            ;
                            if (((ulong)pcVar4 & 1) == 0) {
                              pcVar4 = local_b0;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_b0,PTR_s_isEqualToString__0269ccc8,
                                         &cf_WCFinderHeadImageView);
                              if (((ulong)pcVar4 & 1) == 0) {
                                pcVar4 = local_a0;
                                (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_tag_026cab98);
                                if (pcVar4 == (cfstringStruct *)0x24f6e4) {
                                  local_21 = 0;
                                  local_48 = 1;
                                }
                                else {
                                  pcVar5 = local_a0;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_a0,PTR_s_superview_026cab50);
                                  _objc_retainAutoreleasedReturnValue();
                                  pcVar4 = local_a0;
                                  local_a0 = pcVar5;
                                  (*(code *)PTR__objc_release_02578630)(pcVar4);
                                  local_48 = 0;
                                }
                              }
                              else {
                                local_21 = 0;
                                local_48 = 1;
                              }
                            }
                            else {
                              local_21 = 0;
                              local_48 = 1;
                            }
                          }
                          else {
                            local_92 = 1;
                            local_48 = 2;
                          }
                          _objc_storeStrong(&local_b0,0);
                          if (local_48 != 0) {
                            iVar6 = local_48 + -2;
                            if (iVar6 != 0) goto LAB_0006e58c;
                            break;
                          }
                        }
                        pcVar4 = local_80;
                        if ((local_92 & 1) == 0) {
                          iVar6 = 1;
                          local_21 = 0;
                          local_48 = 1;
                        }
                        else {
                          if (local_38 != (ulong *)0x0) {
                            _objc_retainAutorelease();
                            *local_38 = (ulong)pcVar4;
                          }
                          iVar6 = 1;
                          local_21 = 1;
                          local_48 = 1;
                        }
LAB_0006e58c:
                        _objc_storeStrong(iVar6,&local_a0,0);
                      }
                      else {
                        local_21 = 0;
                        local_48 = 1;
                      }
                    }
                  }
                  _objc_storeStrong(&local_88);
                  _objc_storeStrong(&local_80,0);
                }
              }
              else {
                local_21 = 0;
                local_48 = 1;
              }
            }
          }
        }
      }
      else {
        local_21 = 0;
        local_48 = 1;
      }
      goto LAB_0006e5ec;
    }
  }
  local_21 = 0;
  local_48 = 1;
LAB_0006e5ec:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

