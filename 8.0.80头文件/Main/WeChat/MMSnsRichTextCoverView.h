@interface MMSnsRichTextCoverView : MMRichTextCoverView
{
    BOOL _bFromTranlateText; // +0x8
    BOOL _bEnableDoubleTapNaturalLanguageSelection; // +0x9
    BOOL _bEnableDoubleTapParagraphSelection; // +0xa
    WCTimeLineCellView * _timelineCellView; // +0x10
}
- (BOOL)isLeftCursorVisible;
- (BOOL)isRightCursorVisible;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onSelectTextWithLongPress;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)showMenuWithItems:(id)arg1;
- (BOOL)locationFromMaxRange;
- (void)onBecomeActive;
- (id)mmsns_hostViewController;
- (id)timelineCellView;
- (void)setTimelineCellView:(id)arg1;
- (BOOL)bFromTranlateText;
- (void)setBFromTranlateText:(BOOL)arg1;
- (BOOL)bEnableDoubleTapNaturalLanguageSelection;
- (void)setBEnableDoubleTapNaturalLanguageSelection:(BOOL)arg1;
- (BOOL)bEnableDoubleTapParagraphSelection;
- (void)setBEnableDoubleTapParagraphSelection:(BOOL)arg1;
- (void).cxx_destruct;
@end
