@interface VoiceTransTextMessageViewModelV2 : TextMessageViewModel
{
    BOOL _expanded; // +0xa0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (BOOL)shouldDisplayCollapsedPlaceholder;
- (id)cellViewClassName;
- (BOOL)isLongSplitMessage;
- (id)contentText;
- (CGSize)contentTextSize;
- (double)tableOffsetToScroll;
- (void)adjustTableOffset:(double)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
@end
