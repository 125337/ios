@interface WCLiveBottomTextButton : WCLiveBlurButton
{
    BOOL _bBottomDescLabelNoLimitedWidth; // +0x88
    BOOL _hideDescLabel; // +0x89
    MMUILabel * _m_bottomDescriptionLabel; // +0x90
    NSString * _m_bottomDescription; // +0x98
    double _bottomLabelOffsetY; // +0xa0
    unsigned long long _buttonTextLocation; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 blurEffectColor:(id)arg2 roundCorner:(BOOL)arg3;
- (void)updateTextLocation:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutBottomDescriptionLabel;
- (void)setBottomTextColor:(id)arg1;
- (void)updateOffsetY:(double)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (id)getBottomDescriptionLabel;
- (void)setHideDescLabel:(BOOL)arg1;
- (id)m_bottomDescriptionLabel;
- (void)setM_bottomDescriptionLabel:(id)arg1;
- (id)m_bottomDescription;
- (void)setM_bottomDescription:(id)arg1;
- (BOOL)bBottomDescLabelNoLimitedWidth;
- (void)setBBottomDescLabelNoLimitedWidth:(BOOL)arg1;
- (BOOL)hideDescLabel;
- (double)bottomLabelOffsetY;
- (void)setBottomLabelOffsetY:(double)arg1;
- (unsigned long long)buttonTextLocation;
- (void)setButtonTextLocation:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

