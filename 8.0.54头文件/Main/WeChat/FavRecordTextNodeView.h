@interface FavRecordTextNodeView : FavRecordBaseNodeView <MMTipsViewControllerDelegate, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, ILinkEventExt, ITranslateRecordMgrExt>
{
    RichTextView * m_textDescLabel; // +0x50
    MMTipsViewController * m_oTranslateIntroView; // +0x58
    UIView * m_translateView; // +0x60
    RichTextView * m_translateRichTextView; // +0x68
    MMUIActivityIndicatorView * m_oTranslateLoadingView; // +0x70
    UILabel * m_translateSuccessLabel; // +0x78
    UIImageView * m_translateSuccessIconView; // +0x80
    NSArray * m_translateMenus; // +0x88
    UIButton * m_warningBtn; // +0x90
    FavRecordReferView * m_referView; // +0x98
}
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)initTranslateView;
- (void)initTranslateRichTextView;
- (void)updateTranslateStatusButton;
- (void)updateTranslateSuccessView;
- (void)setTranslateText;
- (id)getTranslateMenuItems;
- (BOOL)isNetworkAvailable;
- (void)addContentSubView;
- (void)initTextDescLabel;
- (void)initMsgReferView;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (void)onLongPressWithoutRchTextCoverView;
- (void)removeRichTextCoverView;
- (void)onLongTouch;
- (void)onLongPressWithRchTextCoverView;
- (id)getMMMenuItems;
- (void)setTranslateSearchEntity;
- (id)getMMTranslateMenuItems;
- (void)onTouchCancel;
- (id)getThumbImageView;
- (void)onMenuControllerWillHide:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onClickTransFeedback:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onTextFavorite:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)setTextSearchEntity;
- (void)showMenu;
- (id)getMenuItems;
- (BOOL)isShowTranslateMenu;
- (void)showTranslateViewMenus;
- (void)onTranslateRecordItem:(id)arg1;
- (void)translateRecordItem;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)onWebSearch:(id)arg1;
- (void)hideMenu;
- (void)updateBkgImage:(BOOL)arg1;
- (void)updateBkgImageToNormal;
- (void)updateBkgImage:(BOOL)arg1 andView:(id)arg2;
- (BOOL)translatePreventLongPressLink;
- (BOOL)shouldShowTopicText;
- (void)onSingleTapRTCV;
- (id)getViewController;
- (void)onRichTextViewExit;
- (id)getCurrentViewController;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onTranslateRecordItemMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateRecordItemMessageChanged:(id)arg1;
- (void)onTapMsgReferView;
- (void)onLongPressMsgReplyView;
- (id)accessibilityLabel;
- (void).cxx_destruct;
@end

