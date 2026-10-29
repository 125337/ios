@interface WCFinderLikeEasterEggFlipAnimationView : UIView
{
    double _flippingShowDuration; // +0x8
    unsigned long long _animationType; // +0x10
    CEmoticonWrap * _emoticon; // +0x18
    unsigned long long _playToken; // +0x20
    UIView * _bgMask; // +0x28
    PAGView * _centerPag; // +0x30
    MMEmoticonView * _emojiView; // +0x38
    PAGView * _ribbonPag; // +0x40
    WCFinderRichTextView * _tipsLabel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 animationType:(unsigned long long)arg2 emoticon:(id)arg3;
- (void)play;
- (void)stop;
- (void)_ensureSubviews;
- (void)_resetStates;
- (void)_runAnimationWithToken:(unsigned long long)arg1;
- (void)_cleanUp;
- (id)_makeBgMask;
- (id)_makeCenterPag;
- (id)_makeEmoticonView;
- (id)_makeRibbonPag;
- (id)_makeTipsLabel;
- (double)flippingShowDuration;
- (void)setFlippingShowDuration:(double)arg1;
- (unsigned long long)animationType;
- (void)setAnimationType:(unsigned long long)arg1;
- (id)emoticon;
- (void)setEmoticon:(id)arg1;
- (unsigned long long)playToken;
- (void)setPlayToken:(unsigned long long)arg1;
- (id)bgMask;
- (void)setBgMask:(id)arg1;
- (id)centerPag;
- (void)setCenterPag:(id)arg1;
- (id)emojiView;
- (void)setEmojiView:(id)arg1;
- (id)ribbonPag;
- (void)setRibbonPag:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
