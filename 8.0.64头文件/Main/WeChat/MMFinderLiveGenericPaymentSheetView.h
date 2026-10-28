@interface MMFinderLiveGenericPaymentSheetView : MMPageSheetBaseView <ILinkEventExt>
{
    id <MMFinderLiveGenericPaymentSheetViewDelegate> _sheetDelegate; // +0x8
    MMFinderLiveGenericPaymentConfig * _config; // +0x10
    NSArray * _items; // +0x18
    NSArray * _itemViews; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _subtitleLabel; // +0x30
    MMUIMaskContainerView * _scrollContainerView; // +0x38
    UIScrollView * _itemScrollView; // +0x40
    UILabel * _itemDescLabel; // +0x48
    MMUIButton * _agreementCheckbox; // +0x50
    RichTextView * _agreementTextView; // +0x58
    UIButton * _payButton; // +0x60
    UILabel * _itemAdditionalDescLabel; // +0x68
}
- (id)initWithConfig:(id)arg1 items:(id)arg2;
- (void)selectItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)selectedIndex;
- (void)setupPageSheetConfig;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)initUI;
- (double)getPageSheetContentHeight;
- (double)relayoutItemViewsAndReturnDescLeft;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (double)getAgreementTextMaxWidth;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onPayButtonClicked;
- (void)panelDidClickQuestionView:(id)arg1;
- (void)onCheckBoxClicked;
- (void)onItemViewTapped:(id)arg1;
- (void)selectItemView:(id)arg1;
- (void)onItemSelected:(id)arg1;
- (void)shakeView:(id)arg1;
- (id)sheetDelegate;
- (void)setSheetDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)itemScrollView;
- (void)setItemScrollView:(id)arg1;
- (id)itemDescLabel;
- (void)setItemDescLabel:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)agreementTextView;
- (void)setAgreementTextView:(id)arg1;
- (id)payButton;
- (void)setPayButton:(id)arg1;
- (id)itemAdditionalDescLabel;
- (void)setItemAdditionalDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
