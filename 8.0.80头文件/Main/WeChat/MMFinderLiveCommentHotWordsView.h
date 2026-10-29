@interface MMFinderLiveCommentHotWordsView : UIView <CAAnimationDelegate>
{
    RichTextView * _wordLabel; // +0x8
    MMLiveScrollNumView * _numView; // +0x10
    UILabel * _multiplayLabel; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    CAShapeLayer * _maskLayer; // +0x28
    UIView * _hotWordsSignBGView; // +0x30
    UIImageView * _hotWordsSignImageView; // +0x38
    UILabel * _hotWordsSignTitleLabel; // +0x40
    unsigned long long _style; // +0x48
    long long _currentCount; // +0x50
    long long _targetCount; // +0x58
    long long _step; // +0x60
}
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)recreateGradientLayerIfNeeded;
- (void)recreateMaskLayerIfNeeded;
- (void)initViews;
- (id)numFont;
- (void)configWithWord:(id)arg1 count:(long long)arg2;
- (void)setTargetCount:(long long)arg1;
- (void)setCurrentCount:(long long)arg1;
- (void)updateLabelWithCount:(long long)arg1;
- (long long)eliminateForbiddenCount:(long long)arg1;
- (void)animateToCount:(long long)arg1 duration:(double)arg2;
- (id)currentWord;
- (void)rescheduleAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)wordLabel;
- (void)setWordLabel:(id)arg1;
- (id)numView;
- (void)setNumView:(id)arg1;
- (id)multiplayLabel;
- (void)setMultiplayLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)hotWordsSignBGView;
- (void)setHotWordsSignBGView:(id)arg1;
- (id)hotWordsSignImageView;
- (void)setHotWordsSignImageView:(id)arg1;
- (id)hotWordsSignTitleLabel;
- (void)setHotWordsSignTitleLabel:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (long long)currentCount;
- (long long)targetCount;
- (long long)step;
- (void)setStep:(long long)arg1;
- (void).cxx_destruct;
@end
