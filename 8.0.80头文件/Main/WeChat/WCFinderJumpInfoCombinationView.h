@interface WCFinderJumpInfoCombinationView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoCombinationViewDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    unsigned long long _displayStyleIndex; // +0x28
    UIView * _lastStyleView; // +0x30
    double _maxTextAreaWidth; // +0x38
    double _maxWidth; // +0x40
    MMTimer * _timer; // +0x48
    CGRect _targetRect; // +0x50
}
- (id)init;
- (void)dealloc;
- (id)currentDisplayStyle;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)prepareForAnimationToStyleWithIndex:(unsigned long long)arg1;
- (void)changeToJumpInfoWithIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)changeToShow:(BOOL)arg1;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)displayJumpInfoStyleWithIndex:(unsigned long long)arg1;
- (void)updateUIInfoWithStyle:(id)arg1 animated:(BOOL)arg2;
- (void)layoutUI;
- (void)notifyToShow;
- (void)startNextStyleTimer;
- (void)notifyToNextStyle;
- (void)onActionButtonDidClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (unsigned long long)displayStyleIndex;
- (void)setDisplayStyleIndex:(unsigned long long)arg1;
- (CGRect)targetRect;
- (void)setTargetRect:(CGRect)arg1;
- (id)lastStyleView;
- (void)setLastStyleView:(id)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
