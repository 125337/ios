@interface VoipDescriptionButton : MMUIButton
{
    BOOL _isInScreenSharingAudienceMode; // +0x8
    BOOL _isStatusLoading; // +0x9
    BOOL _isUsingMPUI; // +0xa
    UILabel * m_bottomDescriptionLabel; // +0x10
    double _labelYOffset; // +0x18
    NSString * _statusText; // +0x20
    UILabel * _statusLabel; // +0x28
    MMUIActivityIndicatorView * _indicatorView; // +0x30
    NSString * _prevStr; // +0x38
}
+ (id)bottomDescriptionLabel;
- (id)getCurString;
- (double)actualHeight;
- (void)layoutSubviews;
- (void)setBottomTextColor:(id)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2 fittingWidth:(double)arg3;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2 fittingWidth:(double)arg3 originFontSize:(double)arg4 labelMaxWidth:(double)arg5 ignoreSpaceChar:(BOOL)arg6;
- (void)setNewConfigBottomDescription:(id)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)setupIndicator;
- (void)showIndicatorLoading:(BOOL)arg1;
- (double)totalHeight;
- (double)titleAlpha;
- (void)setTitleAlpha:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)m_bottomDescriptionLabel;
- (void)setM_bottomDescriptionLabel:(id)arg1;
- (BOOL)isInScreenSharingAudienceMode;
- (void)setIsInScreenSharingAudienceMode:(BOOL)arg1;
- (BOOL)isStatusLoading;
- (void)setIsStatusLoading:(BOOL)arg1;
- (double)labelYOffset;
- (void)setLabelYOffset:(double)arg1;
- (BOOL)isUsingMPUI;
- (void)setIsUsingMPUI:(BOOL)arg1;
- (id)statusText;
- (void)setStatusText:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)prevStr;
- (void)setPrevStr:(id)arg1;
- (void).cxx_destruct;
@end

