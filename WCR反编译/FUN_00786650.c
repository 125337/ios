// FUN_00786650 @ 00786650

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00786650(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  ulong local_2a0;
  uint local_24c;
  uint local_218;
  ulong local_160;
  ulong local_108;
  undefined4 local_100;
  byte local_e9;
  ulong local_e8;
  ulong local_e0;
  bool local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_5);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_6);
  local_e9 = param_7;
  if (((local_e0 == 0) || (uVar2 = local_e0, FUN_00785dec(), (uVar2 & 1) != 0)) ||
     (uVar2 = local_e0, FUN_00785f78(local_e0,local_e8), (uVar2 & 1) != 0)) {
    local_d1 = false;
    local_100 = 1;
  }
  else {
    uVar3 = local_e0;
    FUN_00784bac();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = &cf_textmessagecellview;
    local_c0 = &cf_appfilemessagecellview;
    local_b8 = &cf_voicemessagecellview;
    local_b0 = &cf_imagemessage;
    local_a8 = &cf_picmessage;
    local_a0 = &cf_videomessage;
    local_98 = &cf_sightmessage;
    local_90 = &cf_appmessage;
    local_88 = &cf_emoticon;
    local_80 = &cf_locationmessage;
    local_78 = &cf_refer;
    local_70 = &cf_quote;
    local_68 = &cf_bubble;
    local_60 = &cf_msgcontent;
    local_58 = &cf_messagecontent;
    local_50 = &cf_contentnode;
    local_48 = &cf_richtext;
    local_40 = &cf_yyasyncimageview;
    local_38 = &cf_bubbleimage;
    local_30 = &cf_chatbackground;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_108 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,
               0x14);
    _objc_retainAutoreleasedReturnValue();
    FUN_00784ccc();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar2 = local_e0;
    if ((uVar3 & 1) == 0) {
      if ((local_e9 & 1) == 0) {
        local_d1 = false;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar3 = local_108;
        local_218 = 1;
        if ((uVar2 & 1) == 0) {
          local_d0 = &cf_label;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_d0,1);
          _objc_retainAutoreleasedReturnValue();
          FUN_00784ccc();
          local_218 = (uint)uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        if ((local_218 & 1) == 0) {
          uVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar2 = local_e0;
          local_24c = 1;
          if (uVar5 != 0) {
            puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
            local_24c = (uint)uVar2;
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar2 = local_e0;
          if ((local_24c & 1) == 0) {
            local_d1 = false;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
            bVar1 = local_e8 == 0;
            if (bVar1) {
              local_2a0 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              local_160 = local_2a0;
            }
            else {
              local_2a0 = local_e8;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_convertRect_toView__0269ded8,local_2a0);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_160);
            }
            dVar6 = param_1;
            _CGRectGetWidth(param_1,param_2,param_3,param_4);
            _CGRectGetHeight(param_1,param_2,param_3,param_4);
            local_d1 = 120.0 <= dVar6 * param_1;
          }
        }
        else {
          local_d1 = false;
        }
      }
    }
    else {
      local_d1 = true;
    }
    local_100 = 1;
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

