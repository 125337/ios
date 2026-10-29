@interface WCFinderSlideTextForRemarkVCParams : NSObject
{
    BOOL _linkStyle; // +0x8
    BOOL _isPushed; // +0x9
    NSString * _content; // +0x10
    NSString * _topTitle; // +0x18
    NSString * _finishWording; // +0x20
    long long _maxCharLength; // +0x28
    NSString * _guideIconUrl; // +0x30
    NSString * _guidePreTips; // +0x38
    double _guideBubbleMaxWidth; // +0x40
    double _customHalfScreenHeight; // +0x48
    _NSRange _selectedRange; // +0x50
}
+ (id)paramsWithShopJumpInfo:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (id)finishWording;
- (void)setFinishWording:(id)arg1;
- (long long)maxCharLength;
- (void)setMaxCharLength:(long long)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (id)guideIconUrl;
- (void)setGuideIconUrl:(id)arg1;
- (id)guidePreTips;
- (void)setGuidePreTips:(id)arg1;
- (double)guideBubbleMaxWidth;
- (void)setGuideBubbleMaxWidth:(double)arg1;
- (BOOL)linkStyle;
- (void)setLinkStyle:(BOOL)arg1;
- (double)customHalfScreenHeight;
- (void)setCustomHalfScreenHeight:(double)arg1;
- (BOOL)isPushed;
- (void)setIsPushed:(BOOL)arg1;
- (void).cxx_destruct;
@end

