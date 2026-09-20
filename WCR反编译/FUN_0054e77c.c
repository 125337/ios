// FUN_0054e77c @ 0054e77c

void FUN_0054e77c(byte param_1)

{
  byte bVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  ulong uVar8;
  undefined8 ***local_2b0;
  undefined8 ***local_2a8;
  undefined8 ***local_1a0;
  undefined8 ***local_198;
  byte local_18a;
  byte local_189;
  undefined8 ***local_188;
  undefined8 ***local_180;
  undefined1 local_173;
  byte local_172;
  byte local_171;
  undefined8 ***local_170;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  undefined8 ***local_118;
  undefined8 ***local_110;
  undefined8 ***local_108;
  undefined8 ***local_100;
  undefined8 ***local_f8;
  int local_ec;
  undefined8 ***local_e8;
  undefined8 ***local_e0 [3];
  ulong local_c8;
  undefined8 ***local_c0;
  byte local_b1;
  undefined8 ***local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_b1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (ulong)(local_b1 & 1);
  local_c0 = ppppuVar6;
  FUN_0054f6cc();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar4 = (undefined8 ****)local_c0;
  local_c8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_objectForKey__0269e048,&cf_WCRefineMomentsFakeFriendCache);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_e0[0] = ppppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  ppppuVar6 = (undefined8 ****)local_e0[0];
  if (((ulong)ppppuVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)ppppuVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_removeObjectForKey__0269d700,&cf_WCRefineMomentsFakeFriendCache);
      ppppuVar6 = (undefined8 ****)local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_synchronize_026a0798);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_objectForKey__0269e048,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_e8 = ppppuVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar3 = (ulong)ppppuVar6 & 0xffffffff;
    if (((ulong)ppppuVar6 & 1) == 0) {
LAB_0054e9b4:
      local_ec = 0;
    }
    else {
      ppppuVar6 = (undefined8 ****)local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      pppuVar2 = local_e8;
      uVar3 = 0;
      if (ppppuVar6 == (undefined8 ****)0x0) goto LAB_0054e9b4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pppuVar2;
      uVar3 = 1;
      local_ec = 1;
    }
    ppppuVar6 = &local_e8;
    _objc_storeStrong(uVar3,ppppuVar6,0);
    if (local_ec != 0) goto LAB_0054f630;
  }
  FUN_0054c4ec();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = ppppuVar6;
  if (ppppuVar6 == (undefined8 ****)0x0) {
    ppppuVar6 = *(undefined8 *****)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_ec = 1;
    local_b0 = ppppuVar6;
  }
  else {
    local_100 = (undefined8 ****)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (ppppuVar6,PTR_s_respondsToSelector__026ca818,PTR_s_getAllContactUserName_026a4ed8);
    if (((ulong)ppppuVar6 & 1) != 0) {
      ppppuVar6 = (undefined8 ****)local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_getAllContactUserName_026a4ed8);
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = local_100;
      local_100 = ppppuVar6;
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
    }
    ppppuVar6 = (undefined8 ****)local_100;
    local_108 = (undefined8 ****)0x0;
    puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    ppppuVar4 = (undefined8 ****)local_100;
    if (((ulong)ppppuVar6 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)ppppuVar4 & 1) != 0) {
        _objc_storeStrong(&local_108,local_100);
      }
    }
    else {
      ppppuVar6 = (undefined8 ****)local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_allObjects_0269d228);
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = local_108;
      local_108 = ppppuVar6;
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
    }
    ppppuVar6 = (undefined8 ****)local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
    if (ppppuVar6 == (undefined8 ****)0x0) {
      ppppuVar6 = *(undefined8 *****)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_ec = 1;
      local_b0 = ppppuVar6;
    }
    else {
      FUN_0054b198();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_110 = ppppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_118 = ppppuVar4;
      _memset(auStack_160,0,0x40);
      pppuVar2 = local_108;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a8 = pppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pppuVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                 0x10);
      if ((undefined8 ****)local_2a8 != (undefined8 ****)0x0) {
        lVar7 = *local_150;
        local_2b0 = (undefined8 ****)0x0;
        do {
          do {
            if (*local_150 - lVar7 != 0) {
              _objc_enumerationMutation(*local_150 - lVar7,pppuVar2);
            }
            uVar8 = *(ulong *)(local_158 + (long)local_2b0 * 8);
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_120 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar3 = local_120;
            if ((uVar8 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_168 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
              if (uVar3 == 0) {
                local_ec = 3;
              }
              else {
                uVar3 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_isEqualToString__0269ccc8,local_110);
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_containsString__0269d0b0,&cf__chatroom);
                  if ((uVar3 & 1) == 0) {
                    ppppuVar6 = (undefined8 ****)local_f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f8,PTR_s_getContactByName__0269d178,local_168);
                    _objc_retainAutoreleasedReturnValue();
                    local_170 = ppppuVar6;
                    if (ppppuVar6 == (undefined8 ****)0x0) {
                      local_ec = 3;
                    }
                    else {
                      local_171 = 0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (ppppuVar6,PTR_s_respondsToSelector__026ca818,
                                 PTR_s_isBrandContact_0269d9c8);
                      if (((ulong)ppppuVar6 & 1) != 0) {
                        ppppuVar6 = (undefined8 ****)local_170;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_170,PTR_s_isBrandContact_0269d9c8);
                        local_171 = (byte)ppppuVar6;
                      }
                      if ((local_171 & 1) == 0) {
                        local_172 = 0;
                        ppppuVar6 = (undefined8 ****)local_170;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_170,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_isChatroom_0269e248);
                        if (((ulong)ppppuVar6 & 1) != 0) {
                          ppppuVar6 = (undefined8 ****)local_170;
                          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isChatroom_0269e248)
                          ;
                          local_172 = (byte)ppppuVar6;
                        }
                        if ((local_172 & 1) == 0) {
                          ppppuVar6 = (undefined8 ****)local_170;
                          FUN_0054f6fc(local_170,&cf_m_isPlugin,0);
                          local_173 = SUB81(ppppuVar6,0);
                          if (((ulong)ppppuVar6 & 1) == 0) {
                            ppppuVar6 = (undefined8 ****)local_170;
                            FUN_0054f8e4(local_170,&cf_m_uiType,0);
                            local_180 = ppppuVar6;
                            if (((ppppuVar6 == (undefined8 ****)((long)&MACH_HEADER.magic + 1)) ||
                                (ppppuVar6 == (undefined8 ****)((long)&MACH_HEADER.magic + 2))) ||
                               ((undefined1 *)((long)ppppuVar6 + -3) == (undefined1 *)0x0)) {
                              local_ec = 3;
                            }
                            else {
                              ppppuVar4 = (undefined8 ****)local_170;
                              FUN_0054f8e4((undefined1 *)((long)ppppuVar6 + -3),local_170,
                                           &cf_m_uiFriendScene,0);
                              local_189 = 0;
                              ppppuVar6 = (undefined8 ****)local_f8;
                              local_188 = ppppuVar4;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_f8,PTR_s_respondsToSelector__026ca818,
                                         PTR_s_isInContactList__0269efe0);
                              if (((ulong)ppppuVar6 & 1) != 0) {
                                ppppuVar6 = (undefined8 ****)local_f8;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_f8,PTR_s_isInContactList__0269efe0,local_168);
                                local_189 = (byte)ppppuVar6;
                              }
                              if ((local_b1 & 1) == 0) {
                                bVar1 = 1;
                                if ((undefined8 ****)local_188 != (undefined8 ****)0x0) {
                                  bVar1 = local_189 ^ 1;
                                }
                                local_18a = bVar1 & 1;
                                if ((bVar1 & 1) != 0) {
                                  local_ec = 3;
                                  goto LAB_0054f270;
                                }
                              }
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_118,PTR_s_addObject__0269d180,local_168);
                              local_ec = 0;
                            }
                          }
                          else {
                            local_ec = 3;
                          }
                        }
                        else {
                          local_ec = 3;
                        }
                      }
                      else {
                        local_ec = 3;
                      }
                    }
LAB_0054f270:
                    _objc_storeStrong(&local_170,0);
                  }
                  else {
                    local_ec = 3;
                  }
                }
                else {
                  local_ec = 3;
                }
              }
              _objc_storeStrong(&local_168,0);
            }
            local_2b0 = (undefined8 ***)((long)local_2b0 + 1);
          } while (local_2b0 < local_2a8);
          local_2a8 = pppuVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pppuVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8
                     ,0x10);
          local_2b0 = (undefined8 ****)0x0;
        } while ((undefined8 ****)local_2a8 != (undefined8 ****)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
      ppppuVar6 = (undefined8 ****)local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
      if (ppppuVar6 != (undefined8 ****)0x0) {
        local_198 = (undefined8 ***)0x0;
        ppppuVar6 = (undefined8 ****)local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKey__0269e048,&cf_WCRefineMomentsFakeFriendCache);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_1a0 = ppppuVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)ppppuVar6 & 1) == 0) {
          ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          pppuVar2 = local_198;
          local_198 = ppppuVar6;
          (*(code *)PTR__objc_release_02578630)(pppuVar2);
        }
        else {
          ppppuVar6 = (undefined8 ****)local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_mutableCopy_0269d8a0);
          pppuVar2 = local_198;
          local_198 = ppppuVar6;
          (*(code *)PTR__objc_release_02578630)(pppuVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKey__026ca9e8,local_118,local_c8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_setObject_forKey__026ca9e8,local_198,
                   &cf_WCRefineMomentsFakeFriendCache);
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_synchronize_026a0798);
        _objc_storeStrong(&local_1a0);
        _objc_storeStrong(&local_198,0);
      }
      pppuVar2 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pppuVar2;
      local_ec = 1;
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f8,0);
LAB_0054f630:
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

