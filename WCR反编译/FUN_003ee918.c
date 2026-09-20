// FUN_003ee918 @ 003ee918

byte FUN_003ee918(double param_1,undefined8 param_2,double *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  double dVar8;
  uint local_154;
  undefined *local_108;
  double local_100;
  double local_f8;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ulong local_c0;
  long local_b8;
  double local_b0;
  ushort local_a4;
  byte local_a1;
  ulong local_a0;
  long local_98;
  ushort local_8c;
  byte local_89;
  ulong local_88;
  ulong local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  double *local_58;
  ulong local_50;
  byte local_41;
  long local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  uVar6 = local_50;
  local_58 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar6 == 0) {
    local_41 = 0;
    local_68 = 1;
    goto LAB_003ef97c;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_80 = 0;
  uVar6 = local_50;
  local_78 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_89 = 1;
  local_f8 = param_1;
  local_88 = uVar6;
  while (local_80 < local_88) {
    uVar6 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,local_80);
    local_8c = (ushort)uVar6;
    uVar2 = (uint)uVar6 & 0xffff;
    FUN_003ed084();
    if ((uVar2 & 1) == 0) {
      if ((local_89 & 1) == 0) {
        uVar2 = (uint)local_8c;
        FUN_003ee8cc();
        puVar4 = local_78;
        if ((uVar2 & 1) == 0) {
          local_41 = 0;
          local_68 = 1;
          goto LAB_003ef93c;
        }
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithCharacters_length__0269fc18,
                   &local_8c,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_80 = local_80 + 1;
        local_89 = 1;
      }
      else {
        local_98 = 1;
        if ((local_8c == 0x2b) || (iVar3 = local_8c - 0x2d, iVar3 == 0)) {
          iVar3 = 1;
          if (local_8c == 0x2d) {
            iVar3 = -1;
          }
          local_98 = (long)iVar3;
          do {
            local_80 = local_80 + 1;
            local_154 = 0;
            if (local_80 < local_88) {
              uVar6 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_characterAtIndex__0269fa18,local_80);
              local_154 = (uint)uVar6;
              FUN_003ed084();
            }
          } while ((local_154 & 1) != 0);
          if (local_88 <= local_80) {
            local_41 = 0;
            local_68 = 1;
            goto LAB_003ef93c;
          }
          uVar6 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,local_80);
          iVar3 = (int)uVar6;
          local_8c = (ushort)uVar6;
        }
        uVar6 = (ulong)local_8c;
        FUN_003ee878(iVar3);
        if ((uVar6 & 1) == 0) {
          local_41 = 0;
          local_68 = 1;
          goto LAB_003ef93c;
        }
        local_a0 = local_80;
        local_a1 = 0;
        while (local_80 < local_88) {
          uVar6 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,local_80);
          local_a4 = (ushort)uVar6;
          if ((local_a4 < 0x30) || (0x39 < local_a4)) {
            if ((local_a4 != 0x2e) || ((local_a1 & 1) != 0)) break;
            local_a1 = 1;
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 1;
          }
        }
        if ((local_80 == local_a0) ||
           ((local_80 == local_a0 + 1 &&
            (uVar6 = local_50,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_characterAtIndex__0269fa18,local_a0), (int)uVar6 == 0x2e)))) {
          local_41 = 0;
          local_68 = 1;
          goto LAB_003ef93c;
        }
        local_b8 = local_80 - local_a0;
        local_38 = local_a0;
        local_30 = local_a0;
        local_c0 = local_a0;
        uVar6 = local_50;
        local_40 = local_b8;
        local_28 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_substringWithRange__0269d138,local_a0,local_b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f8 = local_f8 * (double)local_98;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        puVar4 = local_70;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_b0 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_89 = 0;
      }
    }
    else {
      local_80 = local_80 + 1;
    }
  }
  if (((local_89 & 1) == 0) &&
     (puVar4 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0),
     puVar4 != (undefined *)0x0)) {
    puVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if (puVar4 != puVar5 + -1) goto LAB_003ef078;
    puVar5 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    if (puVar5 == (undefined *)0x0) {
      local_41 = 0;
      local_68 = 1;
    }
    else {
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithObject__0269d538);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar4;
      for (local_d8 = (undefined *)0x0; puVar4 = local_78,
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0), local_d8 < puVar4;
          local_d8 = local_d8 + 1) {
        puVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        sVar1 = (short)puVar5;
        puVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8 + 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar6 = (ulong)puVar5 & 0xffff;
        dVar8 = local_f8;
        FUN_003ef9b8();
        puVar4 = local_d0;
        if ((uVar6 & 1) == 0) {
          puVar5 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_c8;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        else {
          puVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if ((((sVar1 == 0x2a) || (sVar1 == 0xd7)) || (sVar1 == 0x78)) ||
             ((sVar1 == 0x58 || (sVar1 == 0xb7)))) {
            local_f8 = dVar8 * local_f8;
          }
          else {
            if (ABS(local_f8) < DAT_02324130) {
              local_41 = 0;
              goto LAB_003ef8fc;
            }
            local_f8 = dVar8 / local_f8;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_c8;
          puVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_setObject_atIndexedSubscript__0269e970,puVar5,puVar7 + -1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_100 = local_f8;
      for (local_108 = (undefined *)0x0; puVar4 = local_d0, dVar8 = local_100,
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0), local_108 < puVar4;
          local_108 = local_108 + 1) {
        puVar4 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_108);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_108 + 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if ((short)puVar5 == 0x2b) {
          local_100 = local_100 + dVar8;
        }
        else {
          local_100 = local_100 - dVar8;
        }
      }
      if (local_58 != (double *)0x0) {
        *local_58 = local_100;
      }
      local_41 = 1;
LAB_003ef8fc:
      local_68 = 1;
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
    }
  }
  else {
LAB_003ef078:
    local_41 = 0;
    local_68 = 1;
  }
LAB_003ef93c:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_003ef97c:
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

