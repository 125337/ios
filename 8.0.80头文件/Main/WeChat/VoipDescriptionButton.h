@interface VoipDescriptionButton : MMUIButton
{
    BOOL _isInScreenSharingAudienceMode; // +0x8
    BOOL _isStatusLoading; // +0x9
    BOOL _isMultiTalk; // +0xa
    BOOL _useAudioOptimizedDescription; // +0xb
    BOOL _isUsingMPUI; // +0xc
    BOOL _useBlurEffect; // +0xd
    BOOL _didConfigureBlurEffect; // +0xe
    UILabel * m_bottomDescriptionLabel; // +0x10
    double _labelYOffset; // +0x18
    id /* block */ _audioOptimizedDescriptionHeightDidChange; // +0x20
    NSString * _statusText; // +0x28
    UILabel * _statusLabel; // +0x30
    MMUIActivityIndicatorView * _indicatorView; // +0x38
    NSString * _prevStr; // +0x40
    UIView * _independentBlurView; // +0x48
}
+ (id)bottomDescriptionLabel;
+ (void)shakeWithView:(id)arg1;
+ (void)shakeWithView:(id)arg1 amplitude:(double)arg2 duration:(double)arg3 count:(long long)arg4;
- (void)configBlurEffect:(BOOL)arg1;
- (void)setupTitle:(id)arg1 subTitle:(id)arg2;
- (id)getCurString;
- (double)actualHeight;
- (void)layoutSubviews;
- (void)setBottomTextColor:(id)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2 fittingWidth:(double)arg3;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2 fittingWidth:(double)arg3 originFontSize:(double)arg4 labelMaxWidth:(double)arg5 ignoreSpaceChar:(BOOL)arg6 compactLayout:(BOOL)arg7;
- (void)setNewConfigBottomDescription:(id)arg1 compactLayout:(BOOL)arg2;
- (void)setAudioOptimizedBottomDescription:(id)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)setupIndicator;
- (void)showIndicatorLoading:(BOOL)arg1;
- (void)showAudioOptimizedIndicatorLoading:(BOOL)arg1;
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
- (BOOL)isMultiTalk;
- (void)setIsMultiTalk:(BOOL)arg1;
- (double)labelYOffset;
- (void)setLabelYOffset:(double)arg1;
- (BOOL)useAudioOptimizedDescription;
- (void)setUseAudioOptimizedDescription:(BOOL)arg1;
- (id /* block */)audioOptimizedDescriptionHeightDidChange;
- (void)setAudioOptimizedDescriptionHeightDidChange:(id /* block */)arg1;
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
- (BOOL)useBlurEffect;
- (void)setUseBlurEffect:(BOOL)arg1;
- (BOOL)didConfigureBlurEffect;
- (void)setDidConfigureBlurEffect:(BOOL)arg1;
- (id)independentBlurView;
- (void)setIndependentBlurView:(id)arg1;
- (void).cxx_destruct;
@end
