// ##### _BBReferLayoutMessageTime @ 00361204
// #####################################

void _BBReferLayoutMessageTime
               (undefined1 param_1 [16],undefined8 param_2,double param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  int local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  char local_139;
  undefined *local_138;
  char local_129;
  long local_128;
  char local_119;
  long local_118;
  undefined *local_110;
  undefined8 local_108;
  char local_f9;
  undefined8 local_f8;
  undefined *local_f0;
  char local_e1;
  undefined *local_e0;
  char local_d1;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b3;
  byte local_b2;
  char local_b1;
  int local_b0;
  
  uVar1 = 0;
  if (DAT_004c1084 != 0) {
    uVar1 = DAT_004c1080 / DAT_004c1084;
  }
  local_194 = 0x6d8a4c1b;
LAB_003612f0:
  iVar8 = 0x3353e76c;
  if (local_194 < -0x4a326c2) {
    if (local_194 < -0x35b0c23b) {
      if (local_194 < -0x65ec21bf) {
        if (-0x785089a1 < local_194) {
          if (local_194 < -0x73ebfc0a) {
            if (local_194 == -0x785089a0) {
              DAT_004c0421 = local_b2 ^ 0x20;
              DAT_004c0422 = DAT_004c0402 ^ 0x3c;
              iVar8 = -0x3432ce75;
            }
            else {
              if (local_194 != -0x767a2ac7) {
                if (local_194 == -0x757d0bc6) {
                  uVar6 = (uint)((ulong)((DAT_004c1138 & DAT_004c113c) * 0x381dfa9 >> 5) * 0x858847
                                >> 0x32) ^ 0x6698242f;
                  _objc_release(local_f8);
                  bVar2 = 0xcd9e9797 < uVar6;
                  bVar3 = uVar6 == 0xcd9e9798;
                  iVar8 = -0x16b7a396;
                  iVar7 = -0x24510b3b;
                  goto LAB_00363694;
                }
                goto LAB_003612f0;
              }
              local_f0 = PTR_s_viewModel_0048b4a8;
              _objc_msgSend(param_5);
              local_f8 = _objc_retainAutoreleasedReturnValue();
              iVar8 = 0x7b15bd23;
            }
          }
          else if (local_194 < -0x6b8ddd7d) {
            if (local_194 == -0x73ebfc0a) {
              uVar6 = DAT_004c1178 | DAT_004c117c;
              _objc_release(local_f8);
              bVar3 = ((uVar6 | 0xfffffcff) & 0x8000540) == 0x82355d63;
              iVar7 = -0x47c341c6;
              iVar8 = 0x53c45003;
              goto LAB_003637e4;
            }
            if (local_194 != -0x6dd2e4c3) goto LAB_003612f0;
            iVar8 = 0x1fa4a946;
          }
          else {
            iVar8 = -0x117fe89c;
            if (local_194 != -0x6b8ddd7d) {
              iVar8 = -0x569df01b;
              iVar7 = -0x67120b44;
              goto LAB_00362680;
            }
          }
          goto LAB_00363b30;
        }
        if (-0x7c0e7d6c < local_194) {
          if (local_194 < -0x7a2f596c) {
            iVar8 = 0x213e21d8;
            if (local_194 != -0x7c0e7d6b) {
              if (local_194 != -0x7b9f817f) goto LAB_003612f0;
              uVar6 = 0;
              if (DAT_004c10f4 != 0) {
                uVar6 = DAT_004c10f0 / DAT_004c10f4;
              }
              bVar3 = 0xed9b96d0 < uVar6 / 0x32f75297 + 0xb1e3f6e;
              iVar8 = -0xf4d4712;
              iVar7 = -0x1fe9ccc3;
LAB_00362f28:
              if (bVar3) {
                iVar8 = iVar7;
              }
            }
          }
          else {
            if (local_194 == -0x7a2f596c) {
              bVar3 = local_129 == '\0';
              iVar7 = -0x7337704;
              iVar8 = -0x2385ecc0;
              goto LAB_003637e4;
            }
            if (local_194 != -0x78e83b45) goto LAB_003612f0;
            iVar8 = -0x34d24528;
          }
          goto LAB_00363b30;
        }
        if (local_194 == -0x7f6a166a) {
          uVar6 = DAT_004c1148 | DAT_004c114c;
          _objc_msgSend(local_c0,PTR_s_refer_0048bb30);
          local_108 = _objc_retainAutoreleasedReturnValue();
          local_110 = PTR_s_superview_0048a800;
          _objc_msgSend();
          local_118 = _objc_retainAutoreleasedReturnValue();
          bVar3 = (uint)((ulong)(uVar6 / 0xb29144cf | 0xc0e0560a) * 0x11c866bd >> 0x3b) ==
                  0x447ce5cb;
          iVar7 = 0x6b59ceab;
          iVar8 = -0x149eb1bd;
        }
        else {
          if (local_194 == -0x7cf8a5bd) {
            bVar3 = local_f9 == '\0';
            iVar7 = 0x3a61c12b;
            iVar8 = 0x3a3cf7e4;
            goto LAB_003637e4;
          }
          if (local_194 != -0x7c78da3d) goto LAB_003612f0;
          bVar3 = local_b1 == '\0';
          iVar7 = -0x117fe89c;
          iVar8 = 0x641320c9;
        }
      }
      else {
        if (local_194 < -0x44eef52d) {
          if (local_194 < -0x551ca95d) {
            if (local_194 == -0x65ec21bf) {
              _objc_msgSend(local_148,local_110);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_5,PTR_s_valueForKey__0048b4d8,
                            &PTR____CFConstantStringClassReference_004c0430);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              uVar11 = _objc_msgSend(uVar5,PTR_s_CGRectValue_00489d08);
              _objc_msgSend(local_c8,local_110);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar11,uVar4,PTR_s_convertRect_toView__00489d30,uVar5);
              iVar8 = 0x7bf9ac91;
            }
            else if (local_194 == -0x5ea10a56) {
              _objc_release(local_f8);
              iVar8 = 0x4925e9a4;
            }
            else {
              if (local_194 != -0x569df01b) goto LAB_003612f0;
              iVar8 = -0x7c78da3d;
            }
          }
          else if (local_194 < -0x48cf2315) {
            iVar8 = 0x213e21d8;
            if (local_194 != -0x551ca95d) {
              if (local_194 == -0x531cbd43) {
                local_b0 = DAT_004d1c20;
                bVar3 = (int)((long)((ulong)(DAT_004c1088 * DAT_004c108c + 0x12b8550a) * 0xb8ba699d)
                             >> 0x3f) == -0x6a65b7be;
                iVar7 = -0x531cbd43;
                iVar8 = -0x11302cb9;
                goto LAB_003637e4;
              }
              goto LAB_003612f0;
            }
          }
          else if (local_194 == -0x48cf2315) {
            uVar6 = 0;
            if (DAT_004c10e4 != 0) {
              uVar6 = DAT_004c10e0 / DAT_004c10e4;
            }
            iVar8 = 0x6a8effdb;
            if ((uVar6 + 0xfd905af & 0x5f84008) < 0x53cecf13) {
              iVar8 = -0x1b793f04;
            }
          }
          else {
            if (local_194 != -0x47c341c6) goto LAB_003612f0;
            _objc_release(local_f8);
            iVar8 = -0x73ebfc0a;
          }
          goto LAB_00363b30;
        }
        if (local_194 < -0x3fd3d55c) {
          if (local_194 < -0x429a1b8f) {
            if (local_194 == -0x44eef52d) {
              DAT_004c0410 = DAT_004c03f0 ^ 0x50;
              DAT_004c0411 = DAT_004c03f1 ^ 0x11;
              DAT_004c0412 = DAT_004c03f2 ^ 0x19;
              DAT_004c0413 = DAT_004c03f3 ^ 0xc9;
              DAT_004c0414 = DAT_004c03f4 ^ 0xf3;
              DAT_004c0415 = DAT_004c03f5 ^ 0x92;
              DAT_004c0416 = DAT_004c03f6 ^ 0xfb;
              DAT_004c0417 = DAT_004c03f7 ^ 0xfe;
              DAT_004c0418 = DAT_004c03f8 ^ 0xa5;
              DAT_004c0419 = DAT_004c03f9;
              DAT_004c041a = DAT_004c03fa ^ 0xa9;
              DAT_004c041b = DAT_004c03fb ^ 0x96;
              DAT_004c041c = DAT_004c03fc ^ 0xe2;
              DAT_004c041d = DAT_004c03fd ^ 10;
              DAT_004c041e = DAT_004c03fe ^ 0x59;
              DAT_004c041f = DAT_004c03ff ^ 0x8c;
              DAT_004c0420 = DAT_004c0400 ^ 0x55;
              iVar8 = -0x3b5b536b;
            }
            else {
              if (local_194 != -0x4366fa74) goto LAB_003612f0;
              _objc_msgSend(local_c8,local_110);
              local_128 = _objc_retainAutoreleasedReturnValue();
              iVar8 = 0x7bd522cb;
            }
          }
          else if (local_194 == -0x429a1b8f) {
            local_e1 = _objc_msgSend(local_c0,local_e0);
            iVar8 = -0x4a326c2;
          }
          else {
            if (local_194 != -0x41c9b8f2) goto LAB_003612f0;
            _objc_release(param_5);
            iVar8 = -0x46d2e4;
          }
          goto LAB_00363b30;
        }
        if (-0x3b5b536c < local_194) {
          if (local_194 != -0x3b5b536b) {
            if (local_194 == -0x3a8a5e54) {
              _objc_release(local_108);
              bVar3 = false;
              iVar7 = -0x3a8a5e54;
              iVar8 = -0x78e83b45;
              goto LAB_003637e4;
            }
            goto LAB_003612f0;
          }
          DAT_004c0410 = DAT_004c03f0 ^ 0x50;
          DAT_004c0411 = DAT_004c03f1 ^ 0x11;
          DAT_004c0412 = DAT_004c03f2 ^ 0x19;
          DAT_004c0413 = DAT_004c03f3 ^ 0xc9;
          DAT_004c0414 = DAT_004c03f4 ^ 0xf3;
          DAT_004c0415 = DAT_004c03f5 ^ 0x92;
          DAT_004c0416 = DAT_004c03f6 ^ 0xfb;
          DAT_004c0417 = DAT_004c03f7 ^ 0xfe;
          DAT_004c0418 = DAT_004c03f8 ^ 0xa5;
          DAT_004c0419 = DAT_004c03f9;
          DAT_004c041a = DAT_004c03fa ^ 0xa9;
          DAT_004c041b = DAT_004c03fb ^ 0x96;
          DAT_004c041c = DAT_004c03fc ^ 0xe2;
          DAT_004c041d = DAT_004c03fd ^ 10;
          DAT_004c041e = DAT_004c03fe ^ 0x59;
          DAT_004c041f = DAT_004c03ff ^ 0x8c;
          DAT_004c0420 = DAT_004c0400 ^ 0x55;
          iVar8 = -0x6dd2e4c3;
          if ((DAT_004c10a8 + DAT_004c10ac + 0x36c58463U | 0x7790c1ab) < 0x7865b171) {
            iVar8 = -0x3b5b536b;
          }
          local_b2 = DAT_004c0401;
          goto LAB_00363b30;
        }
        if (local_194 != -0x3fd3d55c) {
          if (local_194 != -0x3d026735) goto LAB_003612f0;
          iVar8 = 0x7fa6c5b;
          goto LAB_00363b30;
        }
        bVar3 = ((DAT_004c1188 - DAT_004c118c) * 0x3e783206 ^ 0x140422U | 0xcec8e95d) == 0x35181043;
        iVar7 = -0x32319885;
        iVar8 = -0x7a2f596c;
      }
LAB_003637e4:
      if (bVar3) {
        iVar8 = iVar7;
      }
      goto LAB_00363b30;
    }
    if (local_194 < -0x1f1f23d2) {
      if (local_194 < -0x2dbe6881) {
        if (local_194 < -0x3393783f) {
          if (local_194 == -0x35b0c23b) {
            bVar3 = local_139 == '\0';
            iVar8 = 0x213e21d8;
            iVar7 = 0x2ad160cc;
            goto LAB_00363804;
          }
          if (local_194 == -0x34d24528) {
            bVar3 = 0xcb2fcf49 < (DAT_004c1170 & DAT_004c1174 ^ 0x81773e11) + 0x85210e8e;
            iVar7 = -0x47c341c6;
            iVar8 = -0x73ebfc0a;
            goto LAB_00363524;
          }
          if (local_194 == -0x3432ce75) {
            DAT_004c0421 = local_b2 ^ 0x20;
            DAT_004c0422 = DAT_004c0402 ^ 0x3c;
            local_b3 = DAT_004c0403 ^ 0x79;
            bVar3 = (DAT_004c10b8 + DAT_004c10bc | 0x3dfffa5fU) * -0x4497fa2c == 0x47290818;
            iVar8 = -0x3432ce75;
            iVar7 = -0x3d026735;
            goto LAB_00361fc0;
          }
          goto LAB_003612f0;
        }
        if (local_194 < -0x32319885) {
          if (local_194 != -0x3393783f) {
            if (local_194 == -0x32334175) {
              uVar6 = (DAT_004c1160 + DAT_004c1164 & 0x708cfa2fU) * 0x6200d842 + 0xce73ca36;
              bVar2 = 0x43b89d06 < uVar6;
              bVar3 = uVar6 == 0x43b89d07;
              iVar7 = -0x3a8a5e54;
              iVar8 = -0x1f1f23d2;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
          DAT_004c0423 = local_b3;
          iVar8 = -0x3133371a;
        }
        else {
          iVar8 = -0x3fd3d55c;
          if (local_194 != -0x32319885) {
            if (local_194 != -0x3133371a) goto LAB_003612f0;
            DAT_004c0423 = local_b3;
            iVar8 = -0x6b8ddd7d;
          }
        }
      }
      else if (local_194 < -0x24510b3b) {
        if (local_194 == -0x2dbe6881) {
          uVar6 = ((DAT_004c11e8 ^ DAT_004c11ec) & 0xf5ed2105 ^ 0xeecdd9cf) * -0xf60c193;
          _objc_release(local_160);
          _objc_release(local_158);
          _objc_release(local_150);
          _objc_release(local_148);
          _objc_msgSend(local_c8,PTR_s_frame_00489610);
          dVar9 = (double)_CGRectGetMaxX(local_190,uStack_188,local_170,uStack_168);
          _objc_msgSend(param_5,local_f0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          dVar10 = (double)FUN_00363b7c();
          _objc_release(uVar4);
          _objc_msgSend((dVar9 - dVar10) - param_3,local_c8,PTR_s_setFrame__004894f8);
          bVar2 = 0x543f9e3b < uVar6;
          bVar3 = uVar6 == 0x543f9e3c;
          iVar7 = 0x9234b32;
          iVar8 = 0x18c39d74;
LAB_00363968:
          if (!bVar2 || bVar3) {
            iVar8 = iVar7;
          }
        }
        else if (local_194 == -0x28c84567) {
          iVar8 = 0x403dbde1;
        }
        else {
          if (local_194 != -0x28279c19) goto LAB_003612f0;
          iVar8 = 0xfa18464;
        }
      }
      else if (local_194 < -0x22c83a23) {
        if (local_194 == -0x24510b3b) {
          iVar8 = -0x7c0e7d6b;
        }
        else {
          if (local_194 != -0x2385ecc0) goto LAB_003612f0;
          _objc_release(local_118);
          _objc_release(local_108);
          iVar8 = -0x5ea10a56;
        }
      }
      else {
        if (local_194 != -0x22c83a23) {
          iVar8 = -0xf4d4712;
          iVar7 = -0x1fe9ccc3;
          goto LAB_00362680;
        }
        uVar6 = 0;
        if (DAT_004c1154 != 0) {
          uVar6 = DAT_004c1150 / DAT_004c1154;
        }
        if (0xae66f2c5 < ((uVar6 ^ 0x87f02c08) & 0xb7f27d2c ^ 0x903cbe86)) {
          iVar8 = 0x4cc8e7d2;
        }
      }
      goto LAB_00363b30;
    }
    if (local_194 < -0x101feedd) {
      if (local_194 < -0x16b7a396) {
        if (local_194 == -0x1f1f23d2) {
          _objc_release(local_108);
          iVar8 = -0x3a8a5e54;
        }
        else {
          if (local_194 != -0x1b793f04) {
            if (local_194 == -0x16ce5313) {
              uVar6 = ((DAT_004c1100 - DAT_004c1104) * -0x22b87548 ^ 0xc810e80dU) / 0x55322cb;
              bVar2 = 0xdccafa54 < uVar6;
              bVar3 = uVar6 == 0xdccafa55;
              iVar7 = -0x429a1b8f;
              iVar8 = 0x16f07497;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
          uVar6 = DAT_004c10e8 - DAT_004c10ec;
          local_d1 = _objc_msgSend(local_c0,local_d0);
          iVar8 = 0x7d18e309;
          if ((int)((long)((ulong)((uVar6 ^ 0x7ada9498) * 0x595bc8a7) * 0xc9c432a3) >> 0x3f) ==
              0x52f8ecda) {
            iVar8 = -0x1b793f04;
          }
        }
      }
      else if (local_194 < -0x117fe89c) {
        if (local_194 == -0x16b7a396) {
          _objc_release(local_f8);
LAB_00362e4c:
          iVar8 = -0x757d0bc6;
        }
        else {
          if (local_194 != -0x149eb1bd) goto LAB_003612f0;
          iVar8 = -0x22c83a23;
        }
      }
      else if (local_194 == -0x117fe89c) {
        iVar8 = -0x10016a3f;
        if ((DAT_004c10d0 ^ DAT_004c10d4) != 0xd9abd032) {
          iVar8 = 0x24e4ddf7;
        }
      }
      else {
        if (local_194 != -0x11302cb9) goto LAB_003612f0;
        iVar8 = 0x2cf66f6b;
      }
      goto LAB_00363b30;
    }
    if (-0xc08745b < local_194) {
      if (local_194 < -0x98a80bd) {
        if (local_194 != -0xc08745a) {
          if (local_194 == -0xb6e06c6) {
            uVar6 = (DAT_004c1090 + DAT_004c1094) * -0x34da7caf + 0x8d442331U ^ 0x475b6c91;
            bVar2 = 0xd5ad1c43 < uVar6;
            bVar3 = uVar6 == 0xd5ad1c44;
            iVar7 = -0x569df01b;
            iVar8 = -0x67120b44;
            goto LAB_00363968;
          }
          goto LAB_003612f0;
        }
        iVar8 = -0x3fd3d55c;
      }
      else if (local_194 == -0x98a80bd) {
        local_138 = PTR_s_isHidden_0048ba60;
        iVar8 = 0x59c81bdb;
        if (((uint)((ulong)((DAT_004c1198 & DAT_004c119c) + 0xf182c075 >> 1) * 0x442aa3c1 >> 0x3d) |
            0x426f2160) == 0x644a938f) {
          iVar8 = -0x98a80bd;
        }
      }
      else {
        if (local_194 != -0x7337704) goto LAB_003612f0;
        iVar8 = 0x2609c6ff;
        if (((DAT_004c1190 ^ DAT_004c1194) + 0xe18757eb | 0x729ac377) != 0x6a8637a4) {
          iVar8 = -0x98a80bd;
        }
      }
      goto LAB_00363b30;
    }
    if (local_194 < -0xf4d4712) {
      if (local_194 == -0x101feedd) {
        iVar8 = -0x531cbd43;
      }
      else {
        if (local_194 != -0x10016a3f) goto LAB_003612f0;
        DAT_004d1c20 = 1;
        uVar4 = _objc_retain(param_5);
        _objc_getAssociatedObject(uVar4,&DAT_004d1bb0);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_5,PTR_s_b_MsgTimeView_0048b4b8);
        _objc_retainAutoreleasedReturnValue();
        iVar8 = 0x24e4ddf7;
      }
      goto LAB_00363b30;
    }
    if (local_194 == -0xf4d4712) {
      uVar6 = (DAT_004c10f8 & DAT_004c10fc) * -0x144c9ff + 0x739e1dd5;
      local_e0 = PTR_s_timeSameRow_0048bb28;
      bVar2 = 0xc855aaed < uVar6;
      bVar3 = uVar6 == 0xc855aaee;
      iVar8 = -0x1fe9ccc3;
      iVar7 = 0x7e635d5f;
      goto LAB_00363694;
    }
    if (local_194 != -0xd18e8bc) goto LAB_003612f0;
    uVar6 = (DAT_004c11d0 ^ DAT_004c11d4) + 0xcb0521ce & 0xd23e6f8a | 0x12144102;
    bVar2 = 0x1bdcd2be < uVar6;
    bVar3 = uVar6 == 0x1bdcd2bf;
    iVar8 = -0x65ec21bf;
    iVar7 = 0x7bf9ac91;
  }
  else {
    if (0x403dbde0 < local_194) {
      if (local_194 < 0x6a8effdb) {
        if (local_194 < 0x53a84b88) {
          if (local_194 < 0x4b0416dc) {
            if (local_194 == 0x403dbde1) {
              uVar6 = (DAT_004c11e0 | DAT_004c11e4) * 0x4f1c755a + 0x1541d006;
              bVar2 = 0xa26db8f < uVar6;
              bVar3 = uVar6 == 0xa26db90;
              iVar8 = -0x2dbe6881;
              iVar7 = 0x9234b32;
              goto LAB_00363694;
            }
            if (local_194 != 0x4767b73c) {
              if (local_194 == 0x4925e9a4) {
                bVar3 = (DAT_004c11f0 & DAT_004c11f4 & 0x8d6dec1f) == 0xbcdd56d4;
                iVar8 = 0x74649707;
                iVar7 = 0x1a9c9e64;
                goto LAB_00363804;
              }
              goto LAB_003612f0;
            }
            _objc_release(local_c8);
            _objc_release(local_c0);
            iVar8 = 0x7380b615;
          }
          else if (local_194 < 0x4fa91110) {
            if (local_194 != 0x4b0416dc) {
              iVar8 = 0x3353e76c;
              iVar7 = 0x4cc8e7d2;
              goto LAB_00362680;
            }
            iVar8 = -0xd18e8bc;
          }
          else {
            if (local_194 != 0x4fa91110) {
              if (local_194 == 0x4fffdb5e) {
                iVar8 = 0x218e1e0d;
                goto LAB_00363b30;
              }
              goto LAB_003612f0;
            }
            iVar8 = 0x71437257;
          }
        }
        else if (local_194 < 0x5946344a) {
          if (local_194 == 0x53a84b88) {
            uVar6 = DAT_004c11c8 & DAT_004c11cc;
            _objc_msgSend(local_c0,PTR_s_background_0048bb38);
            local_148 = _objc_retainAutoreleasedReturnValue();
            bVar3 = (uVar6 + 0xf53d6806 & 0x8f9ad8f3) == 0x2391f049;
            iVar7 = 0x53a84b88;
            iVar8 = 0x4b0416dc;
            goto LAB_003637e4;
          }
          if (local_194 != 0x53c45003) {
            if (local_194 == 0x54392e7b) {
              bVar3 = (DAT_004c11b8 - DAT_004c11bc) * -0x7fa9252d == -0x4e35096d;
              iVar8 = 0x9600ccf;
              iVar7 = -0x35b0c23b;
              goto LAB_00361fc0;
            }
            goto LAB_003612f0;
          }
          iVar8 = 0x2572a14d;
        }
        else if (local_194 < 0x633a2374) {
          if (local_194 == 0x5946344a) {
            local_d0 = PTR_s_merged_0048bb20;
            iVar8 = -0x48cf2315;
          }
          else {
            if (local_194 != 0x59c81bdb) goto LAB_003612f0;
            iVar8 = 0x6f2e235;
          }
        }
        else if (local_194 == 0x633a2374) {
          iVar8 = -0x41c9b8f2;
          if ((uint)((ulong)((DAT_004c1210 - DAT_004c1214 ^ 0xf12f0238U) + 0xbb60dc71) * 0x4e3fe039
                    >> 0x3e) < 0x111c67b3) {
            iVar8 = -0x46d2e4;
          }
        }
        else {
          if (local_194 != 0x641320c9) goto LAB_003612f0;
          iVar8 = -0x44eef52d;
          if (0x3f20e184 < ((DAT_004c10a0 | DAT_004c10a4 | 0x48b28bc) ^ 0x647725f5) + 0x3c483168) {
            iVar8 = -0x3b5b536b;
          }
        }
      }
      else if (local_194 < 0x7b15bd23) {
        if (local_194 < 0x7380b615) {
          if (0x6d8a4c1a < local_194) {
            if (local_194 == 0x6d8a4c1b) {
              bVar3 = 0x2e7e2821 <
                      (uint)((ulong)uVar1 * 0xbecb59c5 >> 0x3e) * -0x56ad9871 + 0x9c55aa7d;
              iVar7 = -0x531cbd43;
              iVar8 = -0x101feedd;
              goto LAB_00363524;
            }
            if (local_194 == 0x71437257) {
              return;
            }
            goto LAB_003612f0;
          }
          if (local_194 == 0x6a8effdb) {
            _objc_msgSend(local_c0,local_d0);
            iVar8 = -0x1b793f04;
            goto LAB_00363b30;
          }
          if (local_194 != 0x6b59ceab) goto LAB_003612f0;
          _objc_msgSend(local_c0,PTR_s_refer_0048bb30);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,PTR_s_superview_0048a800);
          _objc_retainAutoreleasedReturnValue();
          iVar8 = -0x7f6a166a;
        }
        else {
          if (0x758f1608 < local_194) {
            if (local_194 == 0x758f1609) {
              bVar3 = local_e1 == '\0';
              iVar7 = 0x213e21d8;
              iVar8 = -0x767a2ac7;
              goto LAB_003637e4;
            }
            if (local_194 == 0x761a6687) {
              uVar6 = (DAT_004c1110 + DAT_004c1114 ^ 0xc1c1c1c1U) & 0x46334b2 ^ 0xf9445eae;
              bVar2 = 0xa6c60cc0 < uVar6;
              bVar3 = uVar6 == 0xa6c60cc1;
              iVar7 = -0x386e380;
              iVar8 = 0x7ecb60a1;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
          if (local_194 == 0x7380b615) {
            uVar6 = 0;
            if (DAT_004c120c != 0) {
              uVar6 = DAT_004c1208 / DAT_004c120c;
            }
            _objc_release(local_c8);
            _objc_release(local_c0);
            bVar3 = 0xff31a061 < (uVar6 * 0x5408d21e + 0x47dc2812 | 0xf994d185);
            iVar7 = 0x4767b73c;
            iVar8 = 0x8e07a1c;
LAB_00363524:
            if (bVar3) {
              iVar8 = iVar7;
            }
            goto LAB_00363b30;
          }
          if (local_194 != 0x74649707) goto LAB_003612f0;
          uVar6 = 0;
          if (DAT_004c11fc != 0) {
            uVar6 = DAT_004c11f8 / DAT_004c11fc;
          }
          bVar3 = (uVar6 & 0xbaee9dbf | 0x1aae14bb) == 0xaaf09f6;
          iVar8 = 0x1a9c9e64;
          iVar7 = -0x551ca95d;
LAB_00361fc0:
          if (!bVar3) {
            iVar8 = iVar7;
          }
        }
      }
      else if (local_194 < 0x7bf9ac91) {
        if (local_194 == 0x7b15bd23) {
          iVar8 = 0x2d65fd32;
        }
        else if (local_194 == 0x7b18b590) {
          iVar8 = 0x5946344a;
        }
        else {
          if (local_194 != 0x7bd522cb) goto LAB_003612f0;
          local_129 = local_128 == 0;
          iVar8 = -0xc08745a;
        }
      }
      else {
        if (0x7e635d5e < local_194) {
          if (local_194 == 0x7e635d5f) {
            iVar8 = -0x16ce5313;
            goto LAB_00363b30;
          }
          if (local_194 == 0x7ecb60a1) {
            uVar6 = ((DAT_004c1118 & DAT_004c111c) + 0xc90dfe41) / 0x2bc2ec2a | 0x9cce9529;
            bVar2 = 0xea270b91 < uVar6;
            bVar3 = uVar6 == 0xea270b92;
            iVar8 = -0x386e380;
            iVar7 = 0x758f1609;
            goto LAB_00363694;
          }
          goto LAB_003612f0;
        }
        if (local_194 != 0x7bf9ac91) {
          if (local_194 == 0x7d18e309) {
            bVar3 = local_d1 == '\0';
            iVar7 = 0x213e21d8;
            iVar8 = -0x7b9f817f;
            goto LAB_003637e4;
          }
          goto LAB_003612f0;
        }
        uVar6 = DAT_004c11d8 - DAT_004c11dc;
        _objc_msgSend(local_148,local_110);
        local_150 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_5,PTR_s_valueForKey__0048b4d8,
                      &PTR____CFConstantStringClassReference_004c0430);
        local_158 = _objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_msgSend(local_158,PTR_s_CGRectValue_00489d08);
        _objc_msgSend(local_c8,local_110);
        local_160 = _objc_retainAutoreleasedReturnValue();
        local_190 = _objc_msgSend(uVar4,local_150,PTR_s_convertRect_toView__00489d30,local_160);
        iVar8 = -0x65ec21bf;
        uStack_188 = param_2;
        local_170 = param_3;
        uStack_168 = param_4;
        if (((uVar6 & 0xe20c5609) + 0xe16c1a31 ^ 0xe75e71fc) < 0xb069398a) {
          iVar8 = -0x28c84567;
        }
      }
      goto LAB_00363b30;
    }
    if (local_194 < 0x1a9c9e64) {
      if (local_194 < 0x9234b32) {
        if (local_194 < -0x46d2e4) {
          if (local_194 == -0x4a326c2) {
            iVar8 = 0x761a6687;
          }
          else {
            iVar8 = 0x7ecb60a1;
            if (local_194 != -0x386e380) {
              if (local_194 != -0x24f8b31) goto LAB_003612f0;
              _objc_msgSend(local_c0,PTR_s_background_0048bb38);
              _objc_retainAutoreleasedReturnValue();
              iVar8 = 0x53a84b88;
            }
          }
        }
        else if (local_194 < 0x7fa6c5b) {
          if (local_194 != -0x46d2e4) {
            if (local_194 == 0x6f2e235) {
              bVar3 = (uint)((ulong)(DAT_004c11a0 - DAT_004c11a4 | 0xfe5f5719) * 0xdd81b65 >> 0x3b)
                      == 0x11ae83b3;
              iVar7 = 0x374d65b0;
              iVar8 = 0x113ecdbf;
              goto LAB_00363464;
            }
            goto LAB_003612f0;
          }
          uVar6 = DAT_004c1218 & DAT_004c121c;
          _objc_release(param_5);
          iVar8 = 0x4fa91110;
          if (0xcc33367c < (uVar6 | 0x5efb77db) + 0x731ea64f) {
            iVar8 = -0x46d2e4;
          }
        }
        else if (local_194 == 0x7fa6c5b) {
          bVar3 = (uint)((ulong)(uint)(DAT_004c10c0 + DAT_004c10c4) * 0x5d80a45b >> 0x3d) *
                  -0x6afdaf7a == 0x17ceba86;
          iVar8 = -0x3133371a;
          iVar7 = -0x3393783f;
LAB_00363804:
          if (bVar3) {
            iVar8 = iVar7;
          }
        }
        else {
          if (local_194 != 0x8e07a1c) goto LAB_003612f0;
          iVar8 = 0x633a2374;
        }
      }
      else if (local_194 < 0x113ecdbf) {
        if (local_194 == 0x9234b32) {
          _objc_release(local_160);
          _objc_release(local_158);
          _objc_release(local_150);
          _objc_release(local_148);
          _objc_msgSend(local_c8,PTR_s_frame_00489610);
          dVar9 = (double)_CGRectGetMaxX(local_190,uStack_188,local_170,uStack_168);
          _objc_msgSend(param_5,local_f0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          dVar10 = (double)FUN_00363b7c();
          _objc_release(uVar4);
          _objc_msgSend((dVar9 - dVar10) - param_3,local_c8,PTR_s_setFrame__004894f8);
          iVar8 = -0x2dbe6881;
        }
        else {
          iVar8 = 0x54392e7b;
          if (local_194 != 0x9600ccf) {
            if (local_194 == 0xfa18464) {
              uVar6 = -(int)((long)((ulong)(((DAT_004c11b0 ^ DAT_004c11b4) & 0xdeaa04cf) +
                                           0x1cb6d295) * 0xae489187) >> 0x3f);
              bVar2 = 0x47b07e16 < uVar6;
              bVar3 = uVar6 == 0x47b07e17;
              iVar7 = 0x54392e7b;
              iVar8 = 0x9600ccf;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
        }
      }
      else if (local_194 < 0x16f07497) {
        if (local_194 != 0x113ecdbf) {
          if (local_194 == 0x11898f4d) {
            uVar6 = DAT_004c1128 | DAT_004c112c;
            local_f9 = _BBReferUsesMergedTime(local_f8);
            bVar3 = (uVar6 & 0x5009086) == 0xbdc2ee8;
            iVar7 = 0x1f75da1f;
            iVar8 = -0x7cf8a5bd;
            goto LAB_003637e4;
          }
          goto LAB_003612f0;
        }
        _objc_msgSend(local_c8,local_138);
        _objc_release(local_128);
        _objc_release(local_118);
        _objc_release(local_108);
        _objc_release(local_f8);
        iVar8 = 0x374d65b0;
      }
      else {
        if (local_194 != 0x16f07497) {
          iVar8 = 0x213e21d8;
          iVar7 = 0x18c39d74;
          goto LAB_00362680;
        }
        _objc_msgSend(local_c0,local_e0);
        iVar8 = -0x429a1b8f;
      }
      goto LAB_00363b30;
    }
    if (local_194 < 0x2609c6ff) {
      if (local_194 < 0x213e21d8) {
        iVar8 = 0x74649707;
        if (local_194 != 0x1a9c9e64) {
          if (local_194 != 0x1f75da1f) {
            if (local_194 == 0x1fa4a946) {
              bVar3 = (DAT_004c10b0 + DAT_004c10b4 + 0x1dff076dU & 0x20581140) == 0x23d59d4c;
              iVar7 = -0x3432ce75;
              iVar8 = -0x785089a0;
              goto LAB_00363464;
            }
            goto LAB_003612f0;
          }
          _BBReferUsesMergedTime(local_f8);
          iVar8 = 0x11898f4d;
        }
      }
      else {
        if (local_194 < 0x24e4ddf7) {
          if (local_194 == 0x213e21d8) {
            bVar3 = 0xc7ed4587 <
                    (uint)((ulong)((DAT_004c1200 & DAT_004c1204 | 0x49edade) ^ 0xe65aeae1) *
                           0xb0bfdc7b >> 0x3f);
            iVar8 = 0x7380b615;
            iVar7 = 0x4767b73c;
            goto LAB_00362f28;
          }
          if (local_194 == 0x218e1e0d) {
            bVar3 = local_119 == '\0';
            iVar7 = -0x4366fa74;
            iVar8 = -0x32334175;
            goto LAB_003637e4;
          }
          goto LAB_003612f0;
        }
        if (local_194 == 0x24e4ddf7) {
          uVar6 = DAT_004c10d8 | DAT_004c10dc;
          DAT_004d1c20 = 1;
          uVar4 = _objc_retain(param_5);
          _objc_getAssociatedObject(uVar4,&DAT_004d1bb0);
          local_c0 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_5,PTR_s_b_MsgTimeView_0048b4b8);
          local_c8 = _objc_retainAutoreleasedReturnValue();
          iVar8 = 0x24e4ddf7;
          if ((uVar6 ^ 0xe8980ad3) + 0x16aafc21 < 0xdf98b632) {
            iVar8 = 0x7b18b590;
          }
        }
        else {
          iVar8 = 0x213e21d8;
          iVar7 = 0x2572a14d;
LAB_00362680:
          if (local_194 != iVar7) goto LAB_003612f0;
        }
      }
      goto LAB_00363b30;
    }
    if (0x3353e76b < local_194) {
      if (local_194 < 0x3a3cf7e4) {
        if (local_194 != 0x3353e76c) {
          if (local_194 == 0x374d65b0) {
            uVar6 = 0;
            if (DAT_004c11ac != 0) {
              uVar6 = DAT_004c11a8 / DAT_004c11ac;
            }
            uVar6 = ((uVar6 ^ 0xffe3436) / 0x314013a) * -0x51bc6e69;
            local_139 = _objc_msgSend(local_c8,local_138);
            _objc_release(local_128);
            _objc_release(local_118);
            _objc_release(local_108);
            _objc_release(local_f8);
            bVar2 = 0xb33b3575 < uVar6;
            bVar3 = uVar6 == 0xb33b3576;
            iVar8 = 0x113ecdbf;
            iVar7 = -0x28279c19;
            goto LAB_00363694;
          }
          goto LAB_003612f0;
        }
        uVar6 = 0;
        if (DAT_004c115c != 0) {
          uVar6 = DAT_004c1158 / DAT_004c115c;
        }
        local_119 = local_118 == 0;
        if ((uVar6 & 0x90314509 | 0x10214509) < 0xa2867376) {
          iVar8 = 0x4fffdb5e;
        }
      }
      else {
        if (local_194 != 0x3a3cf7e4) {
          if (local_194 == 0x3a61c12b) goto LAB_00362e4c;
          goto LAB_003612f0;
        }
        bVar3 = (DAT_004c1140 + DAT_004c1144 + 0x697e6b84U) / 0xcbea73a == 0x702064ad;
        iVar7 = -0x7f6a166a;
        iVar8 = 0x6b59ceab;
LAB_00363464:
        if (!bVar3) {
          iVar8 = iVar7;
        }
      }
      goto LAB_00363b30;
    }
    if (0x2cf66f6a < local_194) {
      if (local_194 != 0x2cf66f6b) {
        if (local_194 == 0x2d65fd32) {
          uVar6 = (DAT_004c1120 + DAT_004c1124 + 0xc663b533U | 0x1375d85) * 0x42af07ea;
          bVar2 = 0x7c18a997 < uVar6;
          bVar3 = uVar6 == 0x7c18a998;
          iVar8 = 0x1f75da1f;
          iVar7 = 0x11898f4d;
          goto LAB_00363694;
        }
        goto LAB_003612f0;
      }
      local_b1 = local_b0 == 0;
      iVar8 = -0xb6e06c6;
      goto LAB_00363b30;
    }
    iVar8 = -0x98a80bd;
    if (local_194 == 0x2609c6ff) goto LAB_00363b30;
    if (local_194 != 0x2ad160cc) goto LAB_003612f0;
    uVar6 = DAT_004c11c0 * DAT_004c11c4 + 0xb7e313e0U ^ 0xc2dacd3a;
    bVar2 = 0x6d7ed81 < uVar6;
    bVar3 = uVar6 == 0x6d7ed82;
    iVar8 = 0x53a84b88;
    iVar7 = -0x24f8b31;
  }
LAB_00363694:
  if (!bVar2 || bVar3) {
    iVar8 = iVar7;
  }
LAB_00363b30:
  local_194 = iVar8;
  goto LAB_003612f0;
}



// #####################################