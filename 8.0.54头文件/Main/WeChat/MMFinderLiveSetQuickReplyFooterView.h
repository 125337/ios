@interface MMFinderLiveSetQuickReplyFooterView : UITableViewHeaderFooterView <MMGrowTextViewDelegate, UITextViewDelegate>
{
    id /* block */ _addButtonBlock; // +0x8
    UIView * _addContentView; // +0x10
    MMUIImageView * _addImageView; // +0x18
    MMUILabel * _addLabel; // +0x20
    MMUIButton * _addButton; // +0x28
}
+ (id)identifier;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)addContentView;
- (id)addImageView;
- (id)addLabel;
- (id)addButton;
- (void)addButtonClick:(id)arg1;
- (void)setAddButtonBlock:(id /* block */)arg1;
- (void)setAddImageView:(id)arg1;
- (void)setAddLabel:(id)arg1;
- (void)setAddButton:(id)arg1;
- (void).cxx_destruct;
@end

