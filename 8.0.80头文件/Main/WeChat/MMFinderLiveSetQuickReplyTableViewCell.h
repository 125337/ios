@interface MMFinderLiveSetQuickReplyTableViewCell : UITableViewCell <MMGrowTextViewDelegate, UITextViewDelegate>
{
    MMFinderLiveQuickReplyModel * _item; // +0x8
    NSIndexPath * _indexPath; // +0x10
    id /* block */ _cleanBlock; // +0x18
    id /* block */ _textViewDidChangeBlock; // +0x20
    MMGrowTextView * _textView; // +0x28
    CAShapeLayer * _shapeLayer; // +0x30
    MMUIButton * _cleanButton; // +0x38
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)makeFirstResponder;
- (void)createUI;
- (void)dealloc;
- (void)layoutUI;
- (void)compleEdit;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (void)fixTopicText:(BOOL)arg1;
- (id)cleanButton;
- (void)onClickcleanButton:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)item;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id /* block */)cleanBlock;
- (void)setCleanBlock:(id /* block */)arg1;
- (id /* block */)textViewDidChangeBlock;
- (void)setTextViewDidChangeBlock:(id /* block */)arg1;
- (void)setTextView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setCleanButton:(id)arg1;
- (void).cxx_destruct;
@end
