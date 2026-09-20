// FUN_00798cd8 @ 00798cd8

void FUN_00798cd8(byte param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_NewMainFrameViewController;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    FUN_007a67c8(pcVar1,PTR_s_tableView_heightForHeaderInSecti_026a2348,FUN_007a6be0,&DAT_028ccb20,
                 &DAT_028ccb28);
    if ((param_1 & 1) != 0) {
      FUN_007a67c8(pcVar1,PTR_s_tableView_estimatedHeightForHead_026a28e8,FUN_007a6cb8,&DAT_028ccb30
                   ,&DAT_028ccb38);
    }
    FUN_007a67c8(pcVar1,PTR_s_tableView_viewForHeaderInSection_026a2358,FUN_007a7000,&DAT_028ccb40,
                 &DAT_028ccb48);
  }
  return;
}

