// pasteOneItemFrom:to:mode:replaceExisting: @ 0199a3a8

/* Function Stack Size: 0x2c bytes */

bool WCRefineFileManagerViewController::pasteOneItemFrom_to_mode_replaceExisting_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,bool param_6)

{
  long lVar1;
  undefined *puVar2;
  int local_90;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_51;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  long_long local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_41 = (byte)param_6;
  lVar1 = local_30;
  local_40 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
    local_48 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_30);
    if (((ulong)puVar2 & 1) == 0) {
      local_11 = 0;
      local_48 = 1;
    }
    else {
      local_51 = local_40 == 2;
      if ((local_41 & 1) == 0) {
        local_60 = 0;
        if ((bool)local_51) {
          local_68 = 0;
          puVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_moveItemAtPath_toPath_error__0269f940,local_30,local_38,
                     &local_68);
          local_90 = (int)puVar2;
          _objc_storeStrong(&local_60,local_68);
        }
        else {
          local_70 = 0;
          puVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_30,local_38,
                     &local_70);
          local_90 = (int)puVar2;
          _objc_storeStrong(&local_60,local_70);
        }
        local_11 = local_90 != 0;
        local_48 = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        lVar1 = local_30;
        FUN_0199a634(local_30,local_38,local_51,0);
        local_11 = (byte)lVar1 & 1;
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

