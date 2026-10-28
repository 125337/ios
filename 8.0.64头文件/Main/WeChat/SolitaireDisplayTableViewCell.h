@interface SolitaireDisplayTableViewCell : MMTableViewCell <MMGrowTextViewDelegate, UITextViewDelegate>
{
    id <SolitaireDisplayTableViewCellDelegate> _delegate; // +0x8
    MMUILabel * _orderNumberLabel; // +0x10
    MMGrowTextView * _contentGrowTextView; // +0x18
    UIView * _contentTextContainerView; // +0x20
    SolitaireItem * _solitaireItem; // +0x28
    NSString * _indexStr; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureCellWith:(id)arg1 withIndexStr:(id)arg2;
- (void)textViewBecomeFirstResponder;
- (BOOL)isExample;
- (id)getGrowTextView;
- (void)layoutSubviews;
- (id)orderNumberLabel;
- (id)contentGrowTextView;
- (id)contentTextContainerView;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)TextViewDidDeleteToNil;
- (void)TextViewHeightDidChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setOrderNumberLabel:(id)arg1;
- (void)setContentGrowTextView:(id)arg1;
- (void)setContentTextContainerView:(id)arg1;
- (id)solitaireItem;
- (void)setSolitaireItem:(id)arg1;
- (id)indexStr;
- (void)setIndexStr:(id)arg1;
- (void).cxx_destruct;
@end
