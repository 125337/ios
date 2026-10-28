@interface MMFinderLiveShopShelfTipsPageView : UIView <MMFinderLiveShopShelfSubPageHeaderViewDelegate>
{
    id /* block */ _backAction; // +0x8
    MMFinderLiveShopShelfSubPageHeaderView * _headerView; // +0x10
    RichTextView * _textView; // +0x18
}
- (id)initWithTitle:(id)arg1 wording:(id)arg2 backAction:(id /* block */)arg3;
- (void)layoutSubviews;
- (void)onHeaderViewBackButtonClicked;
- (id /* block */)backAction;
- (void)setBackAction:(id /* block */)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end
