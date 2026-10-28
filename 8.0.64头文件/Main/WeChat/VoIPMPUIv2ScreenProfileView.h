@interface VoIPMPUIv2ScreenProfileView : VoIPMPUIv2View
{
    BOOL _isCleared; // +0x8
    BOOL _isTalking; // +0x9
    BOOL _isFloated; // +0xa
    BOOL _isFold; // +0xb
    BOOL _isSplit; // +0xc
    BOOL _isMiniInAppActived; // +0xd
    BOOL _isSplitPrepartion; // +0xe
    CContact * _contact; // +0x10
    unsigned long long _splitLocation; // +0x18
    VoIPMPUIv2ImageView * _blurView; // +0x20
    MultiTalkHDHeadView * _headImageView; // +0x28
    double _subviewsScale; // +0x30
    double _panelHeight; // +0x38
}
- (void)setContact:(id)arg1;
- (void)layoutBlurView;
- (void)layoutHeadView;
- (void)layoutBackground;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)contact;
- (unsigned long long)splitLocation;
- (void)setSplitLocation:(unsigned long long)arg1;
- (BOOL)isCleared;
- (void)setIsCleared:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (BOOL)isFloated;
- (void)setIsFloated:(BOOL)arg1;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (double)subviewsScale;
- (void)setSubviewsScale:(double)arg1;
- (double)panelHeight;
- (void)setPanelHeight:(double)arg1;
- (BOOL)isSplit;
- (void)setIsSplit:(BOOL)arg1;
- (BOOL)isMiniInAppActived;
- (void)setIsMiniInAppActived:(BOOL)arg1;
- (BOOL)isSplitPrepartion;
- (void)setIsSplitPrepartion:(BOOL)arg1;
- (void).cxx_destruct;
@end
