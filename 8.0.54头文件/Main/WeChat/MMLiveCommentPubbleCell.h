@interface MMLiveCommentPubbleCell : MMLiveCommentPubbleView
{
    BOOL _isTop; // +0x8
    BOOL _isNoticeSection; // +0x9
    BOOL _isCommentTableTopState; // +0xa
    MMLiveCommentDataItem * _commentItem; // +0x10
    MMLiveCommentPubbleCellFrame * _cellFrame; // +0x18
    RichTextView * _commentLabel; // +0x20
    long long _section; // +0x28
    id /* block */ _touchButtonBlock; // +0x30
    id /* block */ _contentLinkClickCallback; // +0x38
    MMUIButton * _touchButton; // +0x40
    UIColor * _customBackgroundColor; // +0x48
}
+ (double)standardLiveCommentPubbleCellHeight;
+ (double)liveCommentPubbleCellToCellMargin;
- (id)initWithCellFrame:(id)arg1;
- (BOOL)reuseWithCellFrame:(id)arg1;
- (double)maxCornerRadius;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)updateBackGroundColor;
- (void)beginTopInCommentTable;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)arg1;
- (void)setCellFrame:(id)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)getCommentItem;
- (unsigned long long)getContentLineNum;
- (id)getRectValueForBaseStyle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)updatePubbleCellAlpha;
- (void)scrollViewDidScroll:(id)arg1;
- (void)commentPubbleCellEndToTop:(id)arg1;
- (void)commentPubbleCellBeginNew:(id)arg1;
- (void)updateCellAlphaWithNotification:(id)arg1;
- (void)updateCellAlphaWithTopSectionOffset:(double)arg1 scrollViewOffSet:(double)arg2 changeBGColorOffset:(double)arg3 currentHeight:(double)arg4;
- (void)updateCellBackgroundColorWithNotification:(id)arg1;
- (void)dealloc;
- (id)commentItem;
- (void)setCommentItem:(id)arg1;
- (id)cellFrame;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (BOOL)isTop;
- (void)setIsTop:(BOOL)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (BOOL)isNoticeSection;
- (void)setIsNoticeSection:(BOOL)arg1;
- (id /* block */)touchButtonBlock;
- (void)setTouchButtonBlock:(id /* block */)arg1;
- (id /* block */)contentLinkClickCallback;
- (void)setContentLinkClickCallback:(id /* block */)arg1;
- (id)touchButton;
- (void)setTouchButton:(id)arg1;
- (id)customBackgroundColor;
- (BOOL)isCommentTableTopState;
- (void)setIsCommentTableTopState:(BOOL)arg1;
- (void).cxx_destruct;
@end

