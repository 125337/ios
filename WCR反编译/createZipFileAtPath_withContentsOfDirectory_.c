// createZipFileAtPath:withContentsOfDirectory: @ 01d5ea4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

bool WCRefineFrameZipCreator::createZipFileAtPath_withContentsOfDirectory_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined *local_298;
  undefined *local_290;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  ID local_168;
  int local_15c;
  undefined *local_158;
  byte local_149;
  undefined8 local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  SEL local_108;
  ID local_100;
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableData_026ce660;
  local_120 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_128 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_120;
  local_130 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_enumeratorAtPath__026ad0c8,local_118);
  _objc_retainAutoreleasedReturnValue();
  local_140 = (undefined *)0x0;
  local_138 = puVar3;
  do {
    puVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_nextObject_026a2c88);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_140;
    local_140 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      local_174 = (int)puVar2;
      _memset(auStack_1c0,0,0x40);
      puVar2 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_290 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_f8,0x10)
      ;
      if (local_290 != (undefined *)0x0) {
        lVar19 = *local_1b0;
        local_298 = (undefined *)0x0;
        do {
          do {
            if (*local_1b0 - lVar19 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar19,puVar2);
            }
            IVar5 = local_100;
            puVar3 = local_128;
            uVar20 = *(ulong *)(local_1b8 + (long)local_298 * 8);
            local_180 = uVar20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar20,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileName);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_compressedSize);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            uVar13 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_uncompressedSize);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)();
            uVar15 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_crc);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar15;
            (*(code *)PTR__objc_msgSend_02578628)();
            uVar17 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_offset);
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar17;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_writeCentralDirectoryHeader_file_026c49a0,puVar3,uVar20,
                       uVar12 & 0xffffffff,uVar14 & 0xffffffff,uVar16 & 0xffffffff,uVar18);
            (*(code *)PTR__objc_release_02578630)(uVar17);
            (*(code *)PTR__objc_release_02578630)(uVar15);
            (*(code *)PTR__objc_release_02578630)(uVar13);
            (*(code *)PTR__objc_release_02578630)(uVar11);
            (*(code *)PTR__objc_release_02578630)(uVar20);
            local_298 = local_298 + 1;
          } while (local_298 < local_290);
          local_290 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_f8,
                     0x10);
          local_298 = (undefined *)0x0;
        } while (local_290 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar3 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      IVar5 = local_100;
      puVar2 = local_128;
      iVar1 = (int)puVar3 - local_174;
      puVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_writeEndOfCentralDirectory_entry_026c49a8,puVar2,(uint)puVar3 & 0xffff,
                 iVar1,local_174);
      puVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_writeToFile_atomically__0269f928,local_110,1);
      local_15c = 1;
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_110,0);
      if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
        return (bool)puVar2;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
    }
    uVar4 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_stringByAppendingPathComponent__026cab30,local_140);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_120;
    local_148 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar4,&local_149);
    if ((((ulong)puVar2 & 1) == 0) || ((local_149 & 1) != 0)) {
LAB_01d5efdc:
      local_15c = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_148)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_15c = 2;
      }
      else {
        IVar5 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_compressData__026c4988,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_168 = IVar5;
        if (IVar5 == 0) {
          local_15c = 2;
        }
        else {
          IVar5 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_crc32ForData__026c4990,local_158);
          local_16c = (undefined4)IVar5;
          puVar6 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          IVar5 = local_100;
          puVar3 = local_128;
          puVar2 = local_140;
          local_170 = SUB84(puVar6,0);
          IVar7 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
          puVar6 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar5,PTR_s_writeLocalFileHeader_fileName_co_026c4998,puVar3,puVar2,
                     IVar7 & 0xffffffff,puVar6,local_16c);
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_appendData__026a9df8,local_168);
          puVar6 = local_130;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_78 = &cf_fileName;
          local_50 = local_140;
          local_70 = &cf_compressedSize;
          IVar5 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_numberWithUnsignedInteger__0269e4d0,IVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_68 = &cf_uncompressedSize;
          puVar8 = local_158;
          local_48 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_numberWithUnsignedInteger__0269e4d0,puVar8);
          _objc_retainAutoreleasedReturnValue();
          local_60 = &cf_crc;
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_40 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_16c);
          _objc_retainAutoreleasedReturnValue();
          local_58 = &cf_offset;
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_38 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_170);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_15c = 0;
        }
        _objc_storeStrong(&local_168,0);
      }
      _objc_storeStrong(&local_158,0);
      if (local_15c == 0) goto LAB_01d5efdc;
    }
    _objc_storeStrong(&local_148,0);
  } while( true );
}

