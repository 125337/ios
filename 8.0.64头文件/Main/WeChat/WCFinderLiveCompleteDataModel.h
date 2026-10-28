@interface WCFinderLiveCompleteDataModel : NSObject
{
    BOOL _showAudienceAvgSecondsSubTitle; // +0x8
    double _totalHeight; // +0x10
    double _basePageViewHeaderHeight; // +0x18
    double _basePageViewHeight; // +0x20
    double _basePageFooterHeight; // +0x28
    double _incomePageViewHeaderHeight; // +0x30
    double _incomePageViewHeight; // +0x38
    double _incomeFooterHeight; // +0x40
}
- (double)totalHeight;
- (void)setTotalHeight:(double)arg1;
- (BOOL)showAudienceAvgSecondsSubTitle;
- (void)setShowAudienceAvgSecondsSubTitle:(BOOL)arg1;
- (double)basePageViewHeaderHeight;
- (void)setBasePageViewHeaderHeight:(double)arg1;
- (double)basePageViewHeight;
- (void)setBasePageViewHeight:(double)arg1;
- (double)basePageFooterHeight;
- (void)setBasePageFooterHeight:(double)arg1;
- (double)incomePageViewHeaderHeight;
- (void)setIncomePageViewHeaderHeight:(double)arg1;
- (double)incomePageViewHeight;
- (void)setIncomePageViewHeight:(double)arg1;
- (double)incomeFooterHeight;
- (void)setIncomeFooterHeight:(double)arg1;
@end
