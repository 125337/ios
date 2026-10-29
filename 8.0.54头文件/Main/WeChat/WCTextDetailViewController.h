@interface WCTextDetailViewController : MMUIViewController <RichTextLayoutDelegate, ILinkEventExt, ITranslateSnsMgrExt>
{
    UIScrollView * _bgScrollView; // +0x68
    WCDataItem * _dataItem; // +0x70
    NSString * _copyedText; // +0x78
    RichTextView * _contentDescView; // +0x80
    NSString * _contentDesc; // +0x88
    RichTextView * m_translateView; // +0x90
    UIButton * m_translateStatusView; // +0x98
    UIView * m_translateLineView; // +0xa0
    int eTranslateStatus; // +0xa8
    WCUserComment * m_userComment; // +0xb0
    BOOL m_isAdComment; // +0xb8
    unsigned int m_scene; // +0xbc
    WCMomentsClickHandler * _clickHandler; // +0xc0
}
+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (id)initWithCommentUserInfo:(id)arg1 fromDataItem:(id)arg2 isAdComment:(BOOL)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupTitle;
- (void)reloadView;
- (void)viewDidLayoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)clickHandler;
- (void)onCopy:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onExpose:(id)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2 isWord:(BOOL)arg3 withView:(id)arg4;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)GetTranslateSnsKeyID;
- (void)onTranslate:(id)arg1;
- (void)_doTranslate;
- (void)onCancelTranslate:(id)arg1;
- (void)onCancelTranslateInTranslatedArea:(id)arg1;
- (void)onChangeTranslateLanguage:(id)arg1;
- (double)initContentTranslateView:(id)arg1 andSuperScrollView:(id)arg2;
- (double)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)momentsContactMgr:(id)arg1 didUpdateContact:(id)arg2;
- (void)reportMenuAction:(long long)arg1;
- (BOOL)isCorrectTranslateDataWrap:(id)arg1;
- (BOOL)isTimelineTranslateDataWrap:(id)arg1;
- (BOOL)isCommentTranslateDataWrap:(id)arg1;
- (id)getSnsTranslateDataWrap;
- (id)getContentDesc;
- (BOOL)canShowFavBtn;
- (void).cxx_destruct;
@end

