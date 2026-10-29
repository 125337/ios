@interface MMMusicLiveLyricDisplayView : UIView
{
    BOOL _disabled; // +0x8
    BOOL _transitionAnimationDisabled; // +0x9
    BOOL _isAnimating; // +0xa
    BOOL _isOpenShadow; // +0xb
    long long _textAlignment; // +0x10
    id <MMMusicLiveLyricDisplayViewDelegate> _delegate; // +0x18
    unsigned long long _scene; // +0x20
    WCListenLyricsLoadingHeaderView * _lyricLoadingView; // +0x28
    MMMusicAutoscrollLabelView * _currentLabel; // +0x30
    MMMusicAutoscrollLabelView * _nextLabel; // +0x38
    NSString * _nextWaitingLyric; // +0x40
}
- (id)initWithScene:(unsigned long long)arg1;
- (void)setupSubviews;
- (void)setupLyricLoadingView;
- (void)setIsOpenShadow:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setLyricFont:(id)arg1;
- (void)setLyricColor:(id)arg1;
- (void)setLyricNumberOfLines:(int)arg1;
- (void)sizeToFit;
- (void)internalSizeToFit:(BOOL)arg1;
- (void)updateLyricsPosition;
- (void)scrollToNextLyric:(id)arg1;
- (void)tryDisplayNextLyric;
- (id)currentLyric;
- (void)setCurrentLyric:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)disabled;
- (BOOL)transitionAnimationDisabled;
- (void)setTransitionAnimationDisabled:(BOOL)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isOpenShadow;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)lyricLoadingView;
- (void)setLyricLoadingView:(id)arg1;
- (id)currentLabel;
- (void)setCurrentLabel:(id)arg1;
- (id)nextLabel;
- (void)setNextLabel:(id)arg1;
- (id)nextWaitingLyric;
- (void)setNextWaitingLyric:(id)arg1;
- (void).cxx_destruct;
@end
