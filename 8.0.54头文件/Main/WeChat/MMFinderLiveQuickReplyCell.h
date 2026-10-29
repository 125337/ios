@interface MMFinderLiveQuickReplyCell : UICollectionViewCell
{
    MMFinderLiveQuickReplyModel * _model; // +0x8
    UIView * _selectView; // +0x10
    RichTextView * _commentTextView; // +0x18
    MMFinderLiveSFBarrageCellView * _barrageCellView; // +0x20
    RichTextView * _barrageDescTextView; // +0x28
    MMTimer * _countdownTimer; // +0x30
}
+ (double)cellWidthWithModel:(id)arg1 defaultWidth:(double)arg2;
+ (double)cellHeightWithModel:(id)arg1;
+ (CGSize)caculateWithModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateModel:(id)arg1;
- (void)onVisibilityChanged:(BOOL)arg1;
- (void)showBorder:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)changeCellBackGroundColor:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateBarrageCellViewWithCommentItem:(id)arg1;
- (void)initUI;
- (void)layoutUI;
- (void)invalidateCountdownTimer;
- (void)schedulCountdownTimerIfNeeded;
- (void)onTimerFired:(id)arg1;
- (void)reloadBarrageDescTextForStayTime;
- (id)commentTextView;
- (id)selectView;
- (id)getBarrageAccessibility;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setSelectView:(id)arg1;
- (void)setCommentTextView:(id)arg1;
- (id)barrageCellView;
- (void)setBarrageCellView:(id)arg1;
- (id)barrageDescTextView;
- (void)setBarrageDescTextView:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (void).cxx_destruct;
@end

