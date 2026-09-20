// prepareWrapForDisplay: @ 010988d4

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonStore::prepareWrapForDisplay_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  segment_command *psVar4;
  segment_command *psVar5;
  ulong uVar6;
  segment_command *local_68;
  segment_command *local_60;
  ulong local_58;
  segment_command *local_50;
  segment_command *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  segment_command *local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (segment_command *)param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,DAT_0280e178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_30;
      _objc_getAssociatedObject(local_30,DAT_0280e170);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         uVar2 == 0)) {
        local_11 = 0;
        local_34 = 1;
      }
      else {
        psVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_itemForRelative_isPack__026ae328,local_40,0);
        _objc_retainAutoreleasedReturnValue();
        psVar5 = local_20;
        local_48 = psVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_ensureOfficialCacheForItem__026ae440,psVar4);
        if (((ulong)psVar5 & 1) == 0) {
          local_11 = 0;
          local_34 = 1;
        }
        else {
          psVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_md5_026a3da0);
          _objc_retainAutoreleasedReturnValue();
          local_50 = psVar4;
          (*(code *)PTR__objc_msgSend_02578628)(psVar4,PTR_s_length_0269cca0);
          if (psVar4 == &segment_command_00000020) {
            local_58 = 0;
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
            if ((uVar2 & 1) != 0) {
              uVar6 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_emojiInfo_026a3d98);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_58;
              local_58 = uVar6;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            if ((local_58 != 0) &&
               (uVar2 = local_58,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setMd5__026ac158),
               (uVar2 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setMd5__026ac158,local_50);
            }
            psVar4 = local_50;
            FUN_0108f988();
            _objc_retainAutoreleasedReturnValue();
            local_60 = psVar4;
            (*(code *)PTR__objc_msgSend_02578628)(psVar4,PTR_s_length_0269cca0);
            if (psVar4 == (segment_command *)0x0) {
              psVar4 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_filePathForItem__026ae430,local_48);
              _objc_retainAutoreleasedReturnValue();
              local_68 = psVar4;
              (*(code *)PTR__objc_msgSend_02578628)(psVar4,PTR_s_length_0269cca0);
              if (psVar4 != (segment_command *)0x0) {
                psVar5 = (segment_command *)PTR__OBJC_CLASS___NSData_026ce1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                           local_68);
                _objc_retainAutoreleasedReturnValue();
                psVar4 = local_60;
                local_60 = psVar5;
                (*(code *)PTR__objc_release_02578630)(psVar4);
              }
              _objc_storeStrong(&local_68,0);
            }
            psVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
            puVar3 = PTR_s_setM_imageData__026ae448;
            if (psVar4 != (segment_command *)0x0) {
              uVar2 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setM_imageData__026ae448)
              ;
              if ((uVar2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_setValue_forKey__0269d300,local_60,&cf_m_imageData);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar3,local_60);
              }
            }
            uVar2 = local_30;
            uVar1 = DAT_0280e178;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_11 = 1;
            local_34 = 1;
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_58,0);
          }
          else {
            local_11 = 0;
            local_34 = 1;
          }
          _objc_storeStrong(&local_50,0);
        }
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

