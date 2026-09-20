// deleteSelectedFrames @ 01d73d98

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::deleteSelectedFrames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *local_a8;
  ID local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  lVar3 = *(long *)(param_1 + (long)_selectedExportPaths);
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf__b);
  }
  else {
    lVar3 = *(long *)(local_28 + (long)_selectedExportPaths);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_WCUIAlertView;
    local_38 = lVar3;
    _NSClassFromString();
    local_40 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf___el>f_ynx9_z);
      local_44 = 1;
    }
    else {
      local_50 = (undefined *)0x0;
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (lVar3 == 1) {
        _objc_storeStrong(0,&local_50,&cf_nx_Rd_NWYX_j_gT);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd_Nv);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_50;
        local_50 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      pcVar4 = local_40;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf___elR_nx9_z);
        local_44 = 1;
      }
      else {
        _objc_setAssociatedObject(local_28,&cf_pathsToDeleteForDeleteSelected,local_38,1);
        pcVar4 = &cf_addBtnTitle_target_sel_;
        _NSSelectorFromString();
        pcVar6 = local_58;
        local_60 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf___elmRc);
          local_44 = 1;
        }
        else {
          pcVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_instanceMethodSignatureForSelect_026a0598,local_60);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          local_68 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTarget__0269e1a8,local_58);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSelector__0269e1b0,local_60);
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = &cf_Sm;
          local_80 = 0;
          local_88 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setArgument_atIndex__0269eae8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_88);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_invoke_0269e1b8);
          puVar5 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_90 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTarget__0269e1a8,local_58);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setSelector__0269e1b0,local_60);
          (*(code *)PTR__objc_retain_02578638)();
          IVar2 = local_28;
          local_98 = &cf_nx_;
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = IVar2;
          local_a8 = PTR_s_confirmDeleteSelectedFrames__026b6598;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_98,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_a0,3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setArgument_atIndex__0269eae8,&local_a8,4);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_invoke_0269e1b8);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_80,0);
          _objc_storeStrong(&local_78,0);
          _objc_storeStrong(&local_70,0);
          _objc_storeStrong(&local_68,0);
          pcVar4 = &cf_show;
          _NSSelectorFromString();
          pcVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4);
          if (((ulong)pcVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_showToast__026b3a18,&cf___el>f_y9_z);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_performSelector__026ca7b8,pcVar4);
          }
          local_44 = 0;
        }
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

