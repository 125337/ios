// _encodeAPNG @0x98b50

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCMYYImageEncoder::_encodeAPNG(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ulong uVar7;
  double dVar8;
  double in_d1;
  double dVar9;
  double dVar10;
  undefined8 local_238;
  undefined4 local_204;
  Bytef *local_200;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  uint *local_1e8;
  uint local_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 *local_1b8;
  undefined8 local_1b0;
  int local_1a4;
  int local_1a0;
  int iStack_19c;
  ulong local_198;
  undefined8 local_190;
  undefined4 local_188;
  uint *local_180;
  uint local_174;
  int local_170;
  byte local_16a;
  byte local_169;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  long local_120;
  long local_118;
  double local_110;
  double local_108;
  long local_100;
  double local_f8;
  double local_f0;
  int local_e4;
  long local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  SEL local_b0;
  ID local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  Bytef local_90 [30];
  undefined4 local_72;
  undefined4 local_6e;
  Bytef local_6a [30];
  undefined4 local_4c;
  undefined4 local_48;
  Bytef aBStack_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b0 = param_2;
  local_a8 = param_1;
  local_b8 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  local_c0 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  local_c8 = 0;
  local_d0 = 0;
  for (local_d4 = 0; uVar7 = (ulong)local_d4,
      uVar1 = _objc_msgSend_count(*(undefined8 *)(local_a8 + 8),local_238), uVar7 < uVar1;
      local_d4 = local_d4 + 1) {
    local_e0 = _objc_msgSend__newCGImageFromIndex_decoded_(local_a8,local_238,(long)local_d4,1);
    if (local_e0 == 0) {
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
    uVar1 = _CGImageGetWidth(local_e0);
    uVar7 = _CGImageGetHeight(local_e0);
    dVar9 = (double)uVar7;
    local_f8 = (double)_CGSizeMake((double)uVar1);
    uVar3 = local_c0;
    local_f0 = dVar9;
    _objc_msgSend_valueWithCGSize_(local_f8,dVar9,&_OBJC_CLASS___NSValue,local_238);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObject_(uVar3,local_238);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    dVar9 = (double)NEON_ucvtf(local_c8);
    if (dVar9 < local_f8) {
      local_c8 = (long)local_f8;
    }
    dVar9 = (double)NEON_ucvtf(local_d0);
    if (dVar9 < local_f0) {
      local_d0 = (long)local_f0;
    }
    local_100 = _WCMYYCGImageCreateEncodedData(0x3ff0000000000000,local_e0,8);
    _CFRelease(local_e0);
    if (local_100 == 0) {
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
    _objc_msgSend_addObject_(local_b8,local_238,local_100);
    _CFRelease(local_100);
    if ((local_f8 < 1.0) || (in_d1 = 1.0, local_f0 < 1.0)) {
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
  }
  _objc_msgSend_firstObject(local_c0,local_238);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_110 = (double)_objc_msgSend_CGSizeValue(uVar3,local_238);
  local_108 = in_d1;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  dVar9 = (double)NEON_ucvtf(local_c8);
  if ((local_110 < dVar9) || (dVar9 = (double)NEON_ucvtf(local_d0), local_108 < dVar9)) {
    local_118 = _objc_msgSend__newCGImageFromIndex_decoded_(local_a8,local_238,0,1);
    lVar5 = local_c8;
    lVar4 = local_d0;
    if (local_118 == 0) {
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
    uVar3 = _WCMYYCGColorSpaceGetDeviceRGB();
    lVar4 = _CGBitmapContextCreate(0,lVar5,lVar4,8,0,uVar3,&DAT_00002002);
    local_120 = lVar4;
    if (lVar4 == 0) {
      _CFRelease(local_118);
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
    dVar8 = (double)NEON_ucvtf(local_d0);
    dVar8 = dVar8 - local_108;
    dVar9 = local_110;
    dVar10 = local_108;
    local_140 = _CGRectMake(0);
    local_138 = dVar8;
    local_130 = dVar9;
    local_128 = dVar10;
    _CGContextDrawImage(local_140,dVar8,dVar9,dVar10,lVar4,local_118);
    _CFRelease(local_118);
    local_148 = _CGBitmapContextCreateImage(local_120);
    _CFRelease(local_120);
    if (local_148 == 0) {
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
    local_150 = _WCMYYCGImageCreateEncodedData(0x3ff0000000000000,local_148,8);
    if (local_150 == 0) {
      _CFRelease(local_148);
      local_a0 = 0;
      local_e4 = 1;
      goto LAB_00099818;
    }
    _objc_msgSend_setObject_atIndexedSubscript_(local_b8,local_238,local_150,0);
    _CFRelease(local_150);
  }
  _objc_msgSend_objectAtIndexedSubscript_(local_b8,local_238,0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_158 = uVar3;
  _objc_retainAutorelease();
  uVar3 = _objc_msgSend_bytes(uVar3,local_238);
  uVar2 = _objc_msgSend_length(local_158,local_238);
  local_160 = _wcm_yy_png_info_create(uVar3,uVar2);
  if (local_160 == 0) {
    local_a0 = 0;
    local_e4 = 1;
  }
  else {
    local_168 = _objc_opt_new(&_OBJC_CLASS___NSMutableData);
    local_169 = 0;
    local_16a = 0;
    local_170 = 0;
    local_30 = 0x474e5089;
    local_2c = 0xa1a0a0d;
    _objc_msgSend_appendBytes_length_(local_168,local_238,&local_30,8);
    for (local_174 = 0; local_174 < *(uint *)(local_160 + 0x18); local_174 = local_174 + 1) {
      local_180 = (uint *)(*(long *)(local_160 + 0x10) + (long)(int)local_174 * 0x10);
      if (((local_169 & 1) == 0) && (local_180[1] == 0x54414449)) {
        local_169 = 1;
        aBStack_44[0] = '\0';
        aBStack_44[1] = '\0';
        aBStack_44[2] = '\0';
        aBStack_44[3] = '\0';
        local_48 = 0;
        uStack_3c = 0;
        local_40 = 0;
        local_38 = 0;
        local_48 = _wcm_yy_swap_endian_uint32(8);
        builtin_memcpy(aBStack_44,"acTL",4);
        _objc_msgSend_count(local_b8,local_238);
        local_40 = _wcm_yy_swap_endian_uint32();
        uStack_3c = _wcm_yy_swap_endian_uint32(*(undefined8 *)(local_a8 + 0x28));
        _crc32(0,aBStack_44,0xc);
        local_38 = _wcm_yy_swap_endian_uint32();
        _objc_msgSend_appendBytes_length_(local_168,local_238,&local_48,0x14);
        local_190 = 0;
        local_188 = 0;
        _local_1a0 = CONCAT44((int)local_110,local_170);
        local_198 = (ulong)(uint)(int)local_108;
        _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(local_a8 + 0x10),local_238,0);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_doubleValue(uVar3,local_238);
        _wcm_yy_png_delay_wcm_to_fraction((long)&local_190 + 4,(long)&local_190 + 6);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        local_188 = CONCAT22(local_188._2_2_,1);
        _memset(&local_6e,0,0x26);
        local_6e = _wcm_yy_swap_endian_uint32(0x1a);
        builtin_memcpy(local_6a,"fcTL",4);
        _wcm_yy_png_chunk_fcTL_write(&local_1a0,local_6a + 4);
        _crc32(0,local_6a,0x1e);
        local_4c = _wcm_yy_swap_endian_uint32();
        _objc_msgSend_appendBytes_length_(local_168,local_238,&local_6e,0x26);
        local_170 = local_170 + 1;
      }
      if ((((local_16a & 1) == 0) && ((local_169 & 1) != 0)) && (local_180[1] != 0x54414449)) {
        local_16a = 1;
        for (local_1a4 = 1; uVar7 = (ulong)local_1a4,
            uVar1 = _objc_msgSend_count(local_b8,local_238), uVar7 < uVar1;
            local_1a4 = local_1a4 + 1) {
          _objc_msgSend_objectAtIndexedSubscript_(local_b8,local_238,(long)local_1a4);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          local_1b0 = uVar3;
          _objc_retainAutorelease();
          uVar3 = _objc_msgSend_bytes(uVar3,local_238);
          uVar2 = _objc_msgSend_length(local_1b0,local_238);
          local_1b8 = (undefined4 *)_wcm_yy_png_info_create(uVar3,uVar2);
          if (local_1b8 == (undefined4 *)0x0) {
            _wcm_yy_png_info_release(local_160);
            local_a0 = 0;
            local_e4 = 1;
          }
          else {
            local_1c8 = 0;
            local_1c0 = 0;
            _local_1d8 = CONCAT44(*local_1b8,local_170);
            local_1d0 = (ulong)(uint)local_1b8[1];
            _objc_msgSend_objectAtIndexedSubscript_
                      (*(undefined8 *)(local_a8 + 0x10),local_238,(long)local_1a4);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_doubleValue(uVar3,local_238);
            _wcm_yy_png_delay_wcm_to_fraction((long)&local_1c8 + 4,(long)&local_1c8 + 6);
            (*(code *)PTR__objc_release_00110458)(uVar3);
            local_1c0 = CONCAT22(local_1c0._2_2_,1);
            _memset(&local_94,0,0x26);
            local_94 = _wcm_yy_swap_endian_uint32(0x1a);
            builtin_memcpy(local_90,"fcTL",4);
            _wcm_yy_png_chunk_fcTL_write(&local_1d8,local_90 + 4);
            _crc32(0,local_90,0x1e);
            local_72 = _wcm_yy_swap_endian_uint32();
            _objc_msgSend_appendBytes_length_(local_168,local_238,&local_94,0x26);
            local_170 = local_170 + 1;
            for (local_1dc = 0; local_1dc < (uint)local_1b8[6]; local_1dc = local_1dc + 1) {
              local_1e8 = (uint *)(*(long *)(local_1b8 + 4) + (long)(int)local_1dc * 0x10);
              if (local_1e8[1] == 0x54414449) {
                local_1ec = _wcm_yy_swap_endian_uint32(local_1e8[2] + 4);
                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_1ec);
                local_1f0 = 0x54416466;
                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_1f0,4);
                local_1f4 = _wcm_yy_swap_endian_uint32(local_170);
                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_1f4,4);
                uVar2 = local_168;
                uVar3 = local_1b0;
                _objc_retainAutorelease();
                lVar4 = _objc_msgSend_bytes(uVar3,local_238);
                _objc_msgSend_appendBytes_length_
                          (uVar2,local_238,lVar4 + (ulong)*local_1e8 + 8,local_1e8[2]);
                uVar3 = local_168;
                _objc_retainAutorelease();
                lVar4 = _objc_msgSend_bytes(uVar3,local_238);
                lVar5 = _objc_msgSend_length(local_168,local_238);
                local_200 = (Bytef *)(((lVar4 + lVar5) - (ulong)local_1e8[2]) + -8);
                _crc32(0,local_200,local_1e8[2] + 8);
                local_204 = _wcm_yy_swap_endian_uint32();
                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_204,4);
                local_170 = local_170 + 1;
              }
            }
            _wcm_yy_png_info_release(local_1dc - local_1b8[6],local_1b8);
            local_e4 = 0;
          }
          _objc_storeStrong(&local_1b0,0);
          if (local_e4 != 0) goto LAB_000997f8;
        }
      }
      uVar2 = local_158;
      uVar3 = local_168;
      _objc_retainAutorelease();
      lVar4 = _objc_msgSend_bytes(uVar2,local_238);
      _objc_msgSend_appendBytes_length_
                (uVar3,local_238,lVar4 + (ulong)*local_180,local_180[2] + 0xc);
    }
    _wcm_yy_png_info_release(local_160);
    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_168);
    local_e4 = 1;
LAB_000997f8:
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_158,0);
LAB_00099818:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar6 = _objc_autoreleaseReturnValue(0,local_a0);
  return IVar6;
}

