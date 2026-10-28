@interface WCPayOverseaTransferViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, WCPayCurrencyInputViewDelegate, MMWebViewDelegate, UIScrollViewDelegate, WCPayNoticeBannerViewDelegate, WCPayCommentTextViewDelegate>
{
    id <WCPayOverseaTransferViewControllerDelegate> m_delegate; // +0x98
    BOOL m_bIsViewHidden; // +0xa0
    BOOL _m_isKeyBoardHide; // +0xa1
    BOOL _m_bKeyboardHasShown; // +0xa2
    UIScrollView * _m_scrollView; // +0xa8
    UIView * _m_headerView; // +0xb0
    MMHeadImageView * _m_headImageView; // +0xb8
    WCPayWebImageView * _webHeadImageView; // +0xc0
    UILabel * _m_displayNameLabel; // +0xc8
    UIView * _m_panelView; // +0xd0
    UILabel * _m_inputTitleLabel; // +0xd8
    WCPayCurrencyInputView * _m_currencyInputView; // +0xe0
    UIView * _m_lineView; // +0xe8
    WCPayCommentTextView * _m_commentTextView; // +0xf0
    UIView * _m_currencyShowView; // +0xf8
    MMUILabel * _m_fixCurrencyLabel; // +0x100
    MMUILabel * _m_fixFeeLabel; // +0x108
    UIView * _m_footerView; // +0x110
    UIButton * _m_confirmButton; // +0x118
    WCPayNoticeBannerView * _m_noticeBannerView; // +0x120
    WCBizLoadingView * _m_bizLoadingView; // +0x128
    MMTipsViewController * _m_tipsView; // +0x130
    NSDictionary * _m_payResp; // +0x138
    WCPayBannerNotice * _m_bannerNotice; // +0x140
    double _confirmBtnY; // +0x148
}
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)resignInputKeyboard;
- (void)reportIdKeyOverseaTransferViewOpen;
- (void)reportOverseaTransferEnter;
- (void)setViewHidden:(BOOL)arg1;
- (void)updateNoticeBannerView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateViewData;
- (void)didReceiveMemoryWarning;
- (void)onBack;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateScrollView;
- (void)updateHeaderView;
- (void)updateFooterView;
- (void)updateHeadImageView;
- (void)updateDisplayNameLabel;
- (void)updatePanelView;
- (void)updateInputTitleLabel;
- (void)updateCurrencyShowView;
- (void)updateCurrencyInputView;
- (void)updateLineView;
- (void)updateCommentTextView;
- (void)updateConfirmButton;
- (void)onButtonConfirm;
- (void)updateConfirmButtonStatus;
- (void)onInputTextChangeToString:(id)arg1;
- (void)onWCPayCommentTextViewAlertViewAppear;
- (void)onWCPayCommentTextViewAlertViewDisappear;
- (id)trimString:(id)arg1 ToLenght:(unsigned long long)arg2;
- (void)onWCPayNoticeBannerView:(id)arg1 clickWithUrl:(id)arg2;
- (void)reportCancel;
- (void)reportConfirm;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)webHeadImageView;
- (void)setWebHeadImageView:(id)arg1;
- (id)m_displayNameLabel;
- (void)setM_displayNameLabel:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (id)m_inputTitleLabel;
- (void)setM_inputTitleLabel:(id)arg1;
- (id)m_currencyInputView;
- (void)setM_currencyInputView:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_commentTextView;
- (void)setM_commentTextView:(id)arg1;
- (id)m_currencyShowView;
- (void)setM_currencyShowView:(id)arg1;
- (id)m_fixCurrencyLabel;
- (void)setM_fixCurrencyLabel:(id)arg1;
- (id)m_fixFeeLabel;
- (void)setM_fixFeeLabel:(id)arg1;
- (id)m_footerView;
- (void)setM_footerView:(id)arg1;
- (id)m_confirmButton;
- (void)setM_confirmButton:(id)arg1;
- (id)m_noticeBannerView;
- (void)setM_noticeBannerView:(id)arg1;
- (id)m_bizLoadingView;
- (void)setM_bizLoadingView:(id)arg1;
- (id)m_tipsView;
- (void)setM_tipsView:(id)arg1;
- (id)m_payResp;
- (void)setM_payResp:(id)arg1;
- (BOOL)m_isKeyBoardHide;
- (void)setM_isKeyBoardHide:(BOOL)arg1;
- (id)m_bannerNotice;
- (void)setM_bannerNotice:(id)arg1;
- (double)confirmBtnY;
- (void)setConfirmBtnY:(double)arg1;
- (BOOL)m_bKeyboardHasShown;
- (void)setM_bKeyboardHasShown:(BOOL)arg1;
- (void).cxx_destruct;
@end
