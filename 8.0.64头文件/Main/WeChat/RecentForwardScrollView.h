@interface RecentForwardScrollView : UIView <RecentForwardSheetItemViewDelegate>
{
    NSString * m_title; // +0x8
    UIColor * m_backgroundColor; // +0x10
    double m_headImgWidth; // +0x18
    UIFont * m_titleFont; // +0x20
    double m_titleMarginLeft; // +0x28
    double m_titleMarginTop; // +0x30
    double m_titleLineHeight; // +0x38
    double m_scrollViewMarginLeft; // +0x40
    double m_scrollItemMarginLeft; // +0x48
    BOOL m_showSeperator; // +0x50
    double m_bottomPadding; // +0x58
    UIFont * m_nameLabelFont; // +0x60
    BOOL m_bIgnoreChatRoom; // +0x68
    BOOL m_onlyChatRoom; // +0x69
    BOOL m_bNewEditModel; // +0x6a
    BOOL m_bStartNewEditModelIng; // +0x6b
    BOOL m_isHalfScreen; // +0x6c
    BOOL m_hasDeleteItem; // +0x6d
    NSMutableArray * m_deleteList; // +0x70
    long long m_toUserIndex; // +0x78
    NSString * m_toUserName; // +0x80
    unsigned long long m_startTime; // +0x88
    unsigned int _msgType; // +0x90
    unsigned int _innerAppMsgType; // +0x94
    id <RecentForwardScrollViewDelegate> _delegate; // +0x98
    CContact * _longpressContact; // +0xa0
    long long _maxNumberOfForwardItem; // +0xa8
    UILabel * _titleLabel; // +0xb0
    id _userInfo; // +0xb8
    unsigned long long _scene; // +0xc0
    NSString * _reportUserInfo; // +0xc8
    UILabel * _tipLabel; // +0xd0
    MMActionSheetScrollView * _aScrollView; // +0xd8
    NSMutableArray * _iconViews; // +0xe0
    UIView * _seperator; // +0xe8
    MMUIButton * _deleteForwardChatBtnInNewEditModel; // +0xf0
    MMUIButton * _finishForwardChatBtnInNewEditModel; // +0xf8
    MMUIView * _finishForwardChatBtnInNewEditModelView; // +0x100
    NSString * _forwardSessionId; // +0x108
    NSString * _forwardFinishDeletSessionId; // +0x110
}
+ (BOOL)hasRecentForward;
- (id)init;
- (id)initWithCount:(long long)arg1 title:(id)arg2 backgroundColor:(id)arg3 headImgWidth:(double)arg4 titleFont:(id)arg5 titleMarginLeft:(double)arg6 titleMarginTop:(double)arg7 titleLineHeight:(double)arg8 scrollViewMarginLeft:(double)arg9 scrollItemMarginLeft:(double)arg10 showSeperator:(BOOL)arg11 bottomPadding:(double)arg12 nameLabelFont:(id)arg13 ignoreChatRoom:(BOOL)arg14 bNewEditModel:(BOOL)arg15 onlyChatRoom:(BOOL)arg16;
- (void)initView;
- (void)initDeleteForwardChatBtnInNewEditModel;
- (void)initFinishForwardChatBtnInNewEditModel;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contactsForRecentForwardMenu;
- (void)layoutSubviews;
- (void)onClickDeleteForwardChatBtnInNewEditModel;
- (void)deleteForwardChatNewEditModelAnimation;
- (void)onClickFinishForwardChatBtnInNewEditModel;
- (void)finishDelectChatNewEditModel;
- (void)finishDelectChatNewEditModelAnimation;
- (void)onItemClick:(id)arg1;
- (void)onItemLongPress:(id)arg1;
- (void)onDeleteItem;
- (void)deleteContact:(id)arg1;
- (void)deleteContactAnimation;
- (id)iconViewForContact:(id)arg1;
- (id)getAllIconView;
- (void)setForceDarkMode:(BOOL)arg1;
- (void)didMoveToWindow;
- (void)reportRecentForwardHalfPanelUsage;
- (long long)indexForContact:(id)arg1;
- (unsigned long long)getOneLineCount;
- (id)getDeleteList;
- (void)changeEditingStatus:(BOOL)arg1;
- (BOOL)OnGetStartNewEditModelIngValue;
- (void)OnDidClickSmallDeleteButton:(id)arg1;
- (void)reportLongPressRemoveRecentFrowradChats:(id)arg1;
- (void)reportRemoveRecentFrowradChats:(id)arg1;
- (void)reportClickDeleteForwardChatNewEditModel;
- (void)reportRemoveRecentFrowradChatsInNewEditModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)longpressContact;
- (void)setLongpressContact:(id)arg1;
- (long long)maxNumberOfForwardItem;
- (void)setMaxNumberOfForwardItem:(long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)innerAppMsgType;
- (void)setInnerAppMsgType:(unsigned int)arg1;
- (id)reportUserInfo;
- (void)setReportUserInfo:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)aScrollView;
- (void)setAScrollView:(id)arg1;
- (id)iconViews;
- (void)setIconViews:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (id)deleteForwardChatBtnInNewEditModel;
- (void)setDeleteForwardChatBtnInNewEditModel:(id)arg1;
- (id)finishForwardChatBtnInNewEditModel;
- (void)setFinishForwardChatBtnInNewEditModel:(id)arg1;
- (id)finishForwardChatBtnInNewEditModelView;
- (void)setFinishForwardChatBtnInNewEditModelView:(id)arg1;
- (id)forwardSessionId;
- (void)setForwardSessionId:(id)arg1;
- (id)forwardFinishDeletSessionId;
- (void)setForwardFinishDeletSessionId:(id)arg1;
- (void).cxx_destruct;
@end
