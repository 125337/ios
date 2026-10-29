@interface TextTranslatePageSheet : MMPageSheetBaseView <ExpandableTextViewDelegate, ILinkEventExt, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, UIScrollViewDelegate, QuickReplyFullscreenAnimateExt>
{
    BOOL _disableLongPressMenu; // +0x8
    BOOL _disableForward; // +0x9
    BOOL _disableSelectAll; // +0xa
    BOOL _useSystemMenu; // +0xb
    BOOL _preferUseSystemLoupe; // +0xc
    int _scene; // +0x10
    UIView * _containerView; // +0x18
    UIScrollView * _contentScrollView; // +0x20
    ExpandableTextView * _originTextView; // +0x28
    UIView * _seperatorLine; // +0x30
    RichTextView * _translateTextView; // +0x38
    MMUIActivityIndicatorView * _translateLoadingView; // +0x40
    UIView * _bottomView; // +0x48
    UIImageView * _successIconView; // +0x50
    UILabel * _successLabel; // +0x58
    UIButton * _changeLanguageButton; // +0x60
    NSString * _originText; // +0x68
    TextTranslateCgi * _translateCgi; // +0x70
}
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (void)pageSheetDidShow;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)initConfig;
- (void)initView;
- (void)layoutUI;
- (void)updateUI;
- (void)startTranslate;
- (void)exitSelectState;
- (void)sdkReport:(id)arg1 viewId:(id)arg2;
- (id)containerView;
- (id)contentScrollView;
- (id)originTextView;
- (id)seperatorLine;
- (id)translateTextView;
- (id)translateLoadingView;
- (id)bottomView;
- (id)successIconView;
- (id)successLabel;
- (id)changeLanguageButton;
- (void)onClickChangeLanguageButton;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onRichTextViewExit;
- (id)getCurrentViewController;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)onSingleTapRTCV;
- (void)onRemoveRTCV;
- (id)getViewController;
- (id)getScrollView;
- (void)onExpandableTextViewExpand:(BOOL)arg1;
- (void)onQuickReplyFullscreenAnimateStart;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)disableLongPressMenu;
- (void)setDisableLongPressMenu:(BOOL)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (BOOL)disableSelectAll;
- (void)setDisableSelectAll:(BOOL)arg1;
- (BOOL)useSystemMenu;
- (void)setUseSystemMenu:(BOOL)arg1;
- (BOOL)preferUseSystemLoupe;
- (void)setPreferUseSystemLoupe:(BOOL)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setOriginTextView:(id)arg1;
- (void)setSeperatorLine:(id)arg1;
- (void)setTranslateTextView:(id)arg1;
- (void)setTranslateLoadingView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setSuccessIconView:(id)arg1;
- (void)setSuccessLabel:(id)arg1;
- (void)setChangeLanguageButton:(id)arg1;
- (id)originText;
- (void)setOriginText:(id)arg1;
- (id)translateCgi;
- (void)setTranslateCgi:(id)arg1;
- (void).cxx_destruct;
@end
