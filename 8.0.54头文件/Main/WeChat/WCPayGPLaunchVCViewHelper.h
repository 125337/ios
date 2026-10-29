@interface WCPayGPLaunchVCViewHelper : NSObject
+ (double)getModeChangeCellHeightWithCurentLaunchType:(unsigned long long)arg1;
+ (double)commonCellHeight;
+ (double)commonCellWidth;
+ (double)calcCellHeightWithLeftContent:(id)arg1 rightContent:(id)arg2 hasArrow:(BOOL)arg3 minHeight:(double)arg4 breakLeft:(BOOL)arg5;
+ (double)getCommonAATotalAmountEditCellHeight;
+ (double)getCommonAATotalMemberEditCellHeight:(id)arg1;
+ (double)getCustomizeAAPayerTipsCellHeight;
+ (double)getCustomizeAAGroupMemberCountTipsCellHeight;
+ (double)getActivityAAPayerCountCellHeight;
+ (double)getActivityAAPayerDetailCellHeightWithNickname:(id)arg1 amount:(double)arg2;
+ (void)setupThemeEdtiViewContent:(id)arg1 themeContent:(id)arg2 remarkImage:(id)arg3 remarkImgUrl:(id)arg4 remarkImgSign:(id)arg5;
+ (void)setupModeChangeCellContent:(id)arg1 curlaunchType:(unsigned long long)arg2;
+ (void)setupTotalAmountCellContent:(id)arg1 amountString:(id)arg2;
+ (void)setupToalMemberCellContent:(id)arg1 content:(id)arg2 title:(id)arg3;
+ (void)setupCustomizePayerTipsCellContent:(id)arg1;
+ (void)setupCustomizeGroupMemberTipsCellContent:(id)arg1 richContent:(id)arg2;
+ (void)setupActivityAATitleCellContent:(id)arg1 selectedMemberCount:(long long)arg2;
+ (void)setupActivityAADetailCellContent:(id)arg1 payerNickname:(id)arg2 amount:(double)arg3 isLastCell:(BOOL)arg4;
@end

