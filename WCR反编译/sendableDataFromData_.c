// sendableDataFromData: @ 0107b6c0

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::sendableDataFromData_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  ID IVar4;
  char *local_b0;
  char *local_88;
  char *local_70;
  cfstringStruct *local_68;
  char *local_60;
  char *local_58;
  ID local_50;
  char *local_48;
  char *local_40;
  int local_34;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (char *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 < (char *)((long)&MACH_HEADER.magic + 3)) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar2 = "EmoticonUtil";
    _objc_getClass(pcVar1 + -3);
    local_40 = pcVar2;
    if (((pcVar2 == (char *)0x0) ||
        ((*(code *)PTR__objc_msgSend_02578628)
                   (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isWxAMData__026ac018),
        ((ulong)pcVar2 & 1) == 0)) ||
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isWxAMData__026ac018,local_30),
       ((ulong)pcVar1 & 1) == 0)) {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_extensionForData__026ac368,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8,&cf_gif);
      if ((((IVar4 & 1) == 0) &&
          (IVar4 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_png),
          (IVar4 & 1) == 0)) &&
         (IVar4 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_jpg),
         (IVar4 & 1) == 0)) {
        pcVar1 = local_30;
        _CGImageSourceCreateWithData(local_30,0);
        local_58 = pcVar1;
        if ((pcVar1 == (char *)0x0) || (_CGImageSourceGetCount(), pcVar1 == (char *)0x0)) {
          if (local_58 != (char *)0x0) {
            _CFRelease(local_58);
          }
          local_18 = (char *)0x0;
          local_34 = 1;
        }
        else {
          pcVar1 = local_58;
          _CGImageSourceGetCount();
          local_68 = &cf_com_compuserve_gif;
          if (pcVar1 < (char *)((long)&MACH_HEADER.magic + 2)) {
            local_68 = &cf_public_png;
          }
          pcVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
          local_60 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar2;
          _CGImageDestinationCreateWithData(pcVar2,local_68,local_60,0);
          if (pcVar2 == (char *)0x0) {
            _CFRelease(local_58);
            local_18 = (char *)0x0;
          }
          else {
            if ((local_60 != (char *)0x0 && local_60 + -1 != (char *)0x0) &&
               (pcVar1 = local_58, _CGImageSourceCopyProperties(local_60 + -1,local_58,0),
               pcVar1 != (char *)0x0)) {
              _CGImageDestinationSetProperties(pcVar2,pcVar1);
              _CFRelease(pcVar1);
            }
            for (local_88 = (char *)0x0; local_88 < local_60; local_88 = local_88 + 1) {
              _CGImageDestinationAddImageFromSource(pcVar2,local_58,local_88,0);
            }
            pcVar1 = pcVar2;
            _CGImageDestinationFinalize((long)local_88 - (long)local_60);
            _CFRelease(pcVar2);
            _CFRelease(local_58);
            if ((((ulong)pcVar1 & 1) == 0) ||
               (pcVar1 = local_70,
               (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
               pcVar1 == (char *)0x0)) {
              local_b0 = (char *)0x0;
            }
            else {
              local_b0 = local_70;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_b0;
          }
          local_34 = 1;
          _objc_storeStrong(&local_70,0);
        }
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_34 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_createGifFromWxAMData__026ac020);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_createGifFromWxAMData__026ac020,local_30);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_48 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0)
           , pcVar1 = local_48, pcVar2 == (char *)0x0)) {
          local_34 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          local_34 = 1;
        }
        _objc_storeStrong(&local_48,0);
        if (local_34 != 0) goto LAB_0107bb84;
      }
      local_18 = (char *)0x0;
      local_34 = 1;
    }
  }
LAB_0107bb84:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

