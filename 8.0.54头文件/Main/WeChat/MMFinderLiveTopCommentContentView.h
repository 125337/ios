@interface MMFinderLiveTopCommentContentView : UIView
{
    BOOL _innerShouldDisplay; // +0x8
    BOOL _outerShouldDisplay; // +0x9
    double _topCommentMaxWidth; // +0x10
    double _topCommentMaxHeight; // +0x18
    double _topCommentMinWidth; // +0x20
    double _topCommentMinHeight; // +0x28
    MMLiveCommentPubbleCell * _displayPubbleCell; // +0x30
    double _currentLayoutStandardWidth; // +0x38
    double _currentLayoutFontScale; // +0x40
}
- (void)layoutSubviews;
- (BOOL)judgeLayoutStandardWidthChanged;
- (BOOL)judgeLayoutFontScaleChanged;
- (void)initDefaultLayoutStandardWidth;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutStandardWidth;
- (void)updateLayoutFontScale;
- (void)updateUIForLayoutFontScaleChanged;
- (void)updateDisplay;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (double)getPubbleWidth:(id)arg1;
- (double)topCommentMaxWidth;
- (void)setTopCommentMaxWidth:(double)arg1;
- (double)topCommentMaxHeight;
- (void)setTopCommentMaxHeight:(double)arg1;
- (double)topCommentMinWidth;
- (void)setTopCommentMinWidth:(double)arg1;
- (double)topCommentMinHeight;
- (void)setTopCommentMinHeight:(double)arg1;
- (id)displayPubbleCell;
- (void)setDisplayPubbleCell:(id)arg1;
- (double)currentLayoutStandardWidth;
- (void)setCurrentLayoutStandardWidth:(double)arg1;
- (double)currentLayoutFontScale;
- (void)setCurrentLayoutFontScale:(double)arg1;
- (BOOL)innerShouldDisplay;
- (void)setInnerShouldDisplay:(BOOL)arg1;
- (BOOL)outerShouldDisplay;
- (void)setOuterShouldDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end

