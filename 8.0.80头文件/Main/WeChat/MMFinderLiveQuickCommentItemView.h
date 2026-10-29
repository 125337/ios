@interface MMFinderLiveQuickCommentItemView : UIButton
{
    MMFinderLiveQuickCommentItem * _item; // +0x8
    double _rightMargin; // +0x10
    id /* block */ _didTapBlock; // +0x18
}
- (id)initWithItem:(id)arg1 isAnchor:(BOOL)arg2 didTapBlock:(id /* block */)arg3;
- (void)sizeToFit;
- (void)onBtnClicked;
- (id)item;
- (void)setItem:(id)arg1;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (id /* block */)didTapBlock;
- (void)setDidTapBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
