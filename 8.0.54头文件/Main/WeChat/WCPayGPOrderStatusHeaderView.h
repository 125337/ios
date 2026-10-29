@interface WCPayGPOrderStatusHeaderView : MMUIView <ILinkEventExt, RichTextLayoutDelegate>
{
    BOOL _isExpandThemeContent; // +0x8
    CContact * _chatroomContact; // +0x10
    AAQueryDetailRes * _orderDetailData; // +0x18
    NSString * _remarkContent; // +0x20
    MMUIView * _contentView; // +0x28
    RichTextView * _picRichTextView; // +0x30
    RichTextView * _remarkTextView; // +0x38
    double _themeContentHeight; // +0x40
    double _themeContentLineNumber; // +0x48
    NSString * _payerSolitaireContent; // +0x50
    id /* block */ _onClickPayMoneyBtn; // +0x58
    id /* block */ _onClickViewRemarkImage; // +0x60
    id /* block */ _onClickRemindPayerBtn; // +0x68
    id /* block */ _onClickSetPayerRemarkBtn; // +0x70
    id /* block */ _onClickExpandThemeBtn; // +0x78
}
- (id)initHeaderViewWithContainerWidth:(double)arg1 orderStatusRespData:(id)arg2 chatroomContact:(id)arg3 remarkContent:(id)arg4 expandAllContent:(BOOL)arg5 payerSolitaireContent:(id)arg6;
- (void)setupContentView;
- (void)setupTitleContentView;
- (void)setupContentViewWhenOrderStatusUnNormalWithOriginY:(double)arg1;
- (void)setupReceiverContentViewWithOriginY:(double)arg1;
- (void)setupPayerContentViewWithOriginY:(double)arg1;
- (void)setupOthersContentViewWithOriginY:(double)arg1 withTipsContent:(id)arg2;
- (id)genOrderTitleLabel;
- (id)genOrderMainContentLabel;
- (id)genOrderTipsLabel;
- (void)payBtnPress:(id)arg1;
- (BOOL)isCommonAAType;
- (BOOL)isCustomizeAAType;
- (BOOL)isActivityAAType;
- (id)getLauncherContact;
- (void)expandBtnClick;
- (BOOL)isSingleChatAndCustomizeAAPaid;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)refreshRemarkTextViewWithContent:(id)arg1;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)chatroomContact;
- (void)setChatroomContact:(id)arg1;
- (id)orderDetailData;
- (void)setOrderDetailData:(id)arg1;
- (id)remarkContent;
- (void)setRemarkContent:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)picRichTextView;
- (void)setPicRichTextView:(id)arg1;
- (id)remarkTextView;
- (void)setRemarkTextView:(id)arg1;
- (BOOL)isExpandThemeContent;
- (void)setIsExpandThemeContent:(BOOL)arg1;
- (double)themeContentHeight;
- (void)setThemeContentHeight:(double)arg1;
- (double)themeContentLineNumber;
- (void)setThemeContentLineNumber:(double)arg1;
- (id)payerSolitaireContent;
- (void)setPayerSolitaireContent:(id)arg1;
- (id /* block */)onClickPayMoneyBtn;
- (void)setOnClickPayMoneyBtn:(id /* block */)arg1;
- (id /* block */)onClickViewRemarkImage;
- (void)setOnClickViewRemarkImage:(id /* block */)arg1;
- (id /* block */)onClickRemindPayerBtn;
- (void)setOnClickRemindPayerBtn:(id /* block */)arg1;
- (id /* block */)onClickSetPayerRemarkBtn;
- (void)setOnClickSetPayerRemarkBtn:(id /* block */)arg1;
- (id /* block */)onClickExpandThemeBtn;
- (void)setOnClickExpandThemeBtn:(id /* block */)arg1;
- (void).cxx_destruct;
@end

