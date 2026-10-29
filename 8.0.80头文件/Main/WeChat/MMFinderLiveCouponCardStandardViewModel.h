@interface MMFinderLiveCouponCardStandardViewModel : MMFinderLiveCouponCardViewModel
{
    BOOL _isCgiRequesting; // +0x8
}
- (Class)slotViewClass;
- (id)title;
- (id)valueWording;
- (id)subInfoTexts;
- (id)actionButtonTitle;
- (void)handleExposed;
- (void)handleActionButtonClicked;
- (void)reportActionClicked;
- (void)handleCgiActionClicked;
- (void)handleCgiSuccessWithResponse:(id)arg1;
- (void)handleCgiFailWithErrorCode:(long long)arg1 errorDesc:(id)arg2;
- (void)claimCouponWithStockId:(id)arg1;
- (void)handleClaimSuccessWithJumpInfo:(id)arg1;
- (void)handleClaimFailWithStockId:(id)arg1 errorCode:(long long)arg2 errorDesc:(id)arg3;
- (BOOL)isCgiRequesting;
- (void)setIsCgiRequesting:(BOOL)arg1;
@end
