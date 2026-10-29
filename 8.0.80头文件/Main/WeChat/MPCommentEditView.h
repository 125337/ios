@interface MPCommentEditView : UIView <MMGrowTextViewDelegate, InputControllerDelegate, MMTableViewDelegate, MMRefreshTableFooterDelegate, MPCommentTableViewLogicDelete>
{
    BOOL _isReplyModeEnable; // +0x8
    BOOL _isSendingComment; // +0x9
    BOOL _isMultiReplySwitchOn; // +0xa
    unsigned int _enterId; // +0xc
    unsigned int _personalCommentId; // +0x10
    unsigned int _itemShowType; // +0x14
    unsigned int _theme; // +0x18
    double _defaultHeight; // +0x20
    id <MPCommentEditViewDelegate> _delegate; // +0x28
    MMUIViewController * _viewController; // +0x30
    NSString * _replyContent; // +0x38
    NSString * _url; // +0x40
    unsigned long long _commentTopicId; // +0x48
    UIView * _navBarView; // +0x50
    MMUILabel * _titleLabel; // +0x58
    MMUIButton * _closeBtn; // +0x60
    MMUIButton * _commitBtn; // +0x68
    MMTableView * _tableView; // +0x70
    UIView * _tableHeaderView; // +0x78
    UIView * _myCommentTitleBarView; // +0x80
    MMUILabel * _myCommentTitleLabel; // +0x88
    MMGrowTextView * _textView; // +0x90
    WCTimeLineFooterView * _footerView; // +0x98
    UIView * _footerViewExtentFGView; // +0xa0
    RichTextView * _replyTipsTextView; // +0xa8
    UIView * _replyTipsBgView; // +0xb0
    MPCommentTableViewLogic * _commentTableViewLogic; // +0xb8
    MPLandingPageCgiHandler * _cgiHandler; // +0xc0
    MPLandingPageOpenParameter * _openParam; // +0xc8
    UIView * _bgMaskView; // +0xd0
    double _contentOffsetYWhenBeginDragging; // +0xd8
    double _textViewAjustHeight; // +0xe0
    WCInputController * _inputController; // +0xe8
    EmoticonBoardView * _emoticonBoardView; // +0xf0
    UIImageView * _inputView; // +0xf8
    MMUIButton * _expressionBtn; // +0x100
    MMUIButton * _collapseBtn; // +0x108
}
- (void)dealloc;
- (id)initWithViewController:(id)arg1 openParam:(id)arg2 enterId:(unsigned int)arg3 theme:(unsigned int)arg4;
- (unsigned int)currentTheme;
- (void)clearAndFetchComment;
- (void)tryFetchMoreComment;
- (void)setHiddenWithAnimation:(BOOL)arg1;
- (void)initCgiHandlerWithEnterId:(unsigned int)arg1;
- (void)initTableViewLogic;
- (void)updateMyCommentList;
- (void)beginEdit;
- (void)endEdit;
- (void)initSubviews;
- (void)initBgMaskView;
- (void)initNavBarView;
- (void)initTableView;
- (void)initTableHeaderView;
- (void)initTableFooterView;
- (void)updateLoadingViewState;
- (void)updateBottomView;
- (void)initInputController;
- (void)initInputToolView;
- (void)initEmoticonView;
- (void)layoutSubviews;
- (void)setTheme:(unsigned int)arg1;
- (void)updateSubviewTheme;
- (void)updateNavBarTheme;
- (void)updateTableViewTheme;
- (void)updateInputControllerTheme;
- (id)inputToolViewBackgroundColor;
- (id)inputToolViewTintColor;
- (id)inputToolViewCloseTintColor;
- (id)replyTextViewStypes:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onRefreshCommentTableView;
- (void)onTopicReplyClick:(id)arg1;
- (void)onCommentReplyClick:(id)arg1 commentReply:(id)arg2;
- (void)setupReplyContentView:(id)arg1 commentId:(unsigned int)arg2;
- (void)onDeleteCommentMsg:(id)arg1;
- (void)onDeleteCommentMsgReply:(id)arg1 commentReply:(id)arg2;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)didCommitText:(id)arg1;
- (void)keyboardWillShow;
- (void)updateHeightWhenKeyboardShowWithAnimated:(BOOL)arg1;
- (double)getVisibleHeight;
- (void)clearTextView;
- (void)onClickCommitBtn;
- (void)onClickCloseBtn;
- (void)onExpressionBtnClicked:(id)arg1;
- (void)onCollapseBtnClicked;
- (void)reloadexpressionBtnImage:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTapCommentEditMaskView;
- (void)resetReplyMode;
- (void)doExposeReport:(unsigned int)arg1;
- (double)defaultHeight;
- (void)setDefaultHeight:(double)arg1;
- (unsigned int)enterId;
- (void)setEnterId:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)isReplyModeEnable;
- (void)setIsReplyModeEnable:(BOOL)arg1;
- (unsigned int)personalCommentId;
- (void)setPersonalCommentId:(unsigned int)arg1;
- (id)replyContent;
- (void)setReplyContent:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned long long)commentTopicId;
- (void)setCommentTopicId:(unsigned long long)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)theme;
- (id)navBarView;
- (void)setNavBarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)commitBtn;
- (void)setCommitBtn:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)myCommentTitleBarView;
- (void)setMyCommentTitleBarView:(id)arg1;
- (id)myCommentTitleLabel;
- (void)setMyCommentTitleLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)footerViewExtentFGView;
- (void)setFooterViewExtentFGView:(id)arg1;
- (id)replyTipsTextView;
- (void)setReplyTipsTextView:(id)arg1;
- (id)replyTipsBgView;
- (void)setReplyTipsBgView:(id)arg1;
- (id)commentTableViewLogic;
- (void)setCommentTableViewLogic:(id)arg1;
- (id)cgiHandler;
- (void)setCgiHandler:(id)arg1;
- (id)openParam;
- (void)setOpenParam:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (double)contentOffsetYWhenBeginDragging;
- (void)setContentOffsetYWhenBeginDragging:(double)arg1;
- (double)textViewAjustHeight;
- (void)setTextViewAjustHeight:(double)arg1;
- (BOOL)isSendingComment;
- (void)setIsSendingComment:(BOOL)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)expressionBtn;
- (void)setExpressionBtn:(id)arg1;
- (id)collapseBtn;
- (void)setCollapseBtn:(id)arg1;
- (BOOL)isMultiReplySwitchOn;
- (void)setIsMultiReplySwitchOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
