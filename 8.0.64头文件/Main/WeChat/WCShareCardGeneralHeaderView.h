@interface WCShareCardGeneralHeaderView : WCShareCardGeneralHeaderViewV2
{
    BOOL _bIsShowUseCodeBtn; // +0x8
    BOOL _bIsIphone5ShareCardMode; // +0x9
}
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isShareCard:(BOOL)arg3 isGiftFromUserHeaderView:(BOOL)arg4 isShowUseCodeBtn:(BOOL)arg5 isIphone5ShareCardMode:(BOOL)arg6 cardStatus:(int)arg7 isNeedHideAccecptBtn:(BOOL)arg8 delegate:(id)arg9;
- (void)initView;
- (void)initGeneralCardContentViewWithStartY:(double)arg1;
- (double)initSubViewWhenHasLimitFieldWithTitleBottom:(double)arg1;
- (double)initSubViewWhenHasOperateFieldWithTitleBottom:(double)arg1;
- (double)initSubViewWhenHasNoOperateFieldWithTitleBottom:(double)arg1;
- (double)logoLen;
- (id)getLogoName;
- (BOOL)hasOperateField;
- (BOOL)hasLimitField;
- (void)onClickApplyBtn:(id)arg1;
- (void)onClickOperationBtn:(id)arg1;
- (double)getRealHeight;
- (CGRect)getApplyBtnFrame;
- (BOOL)bIsShowUseCodeBtn;
- (void)setBIsShowUseCodeBtn:(BOOL)arg1;
- (BOOL)bIsIphone5ShareCardMode;
- (void)setBIsIphone5ShareCardMode:(BOOL)arg1;
@end
