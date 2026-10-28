@interface TemplateMsgFoldLogicController : BaseMsgContentLogicController
{
    WAContactGetter * m_contactGetter; // +0x100
    TemplateMsgExposeLogic * m_exposeLogic; // +0x108
    CMessageWrap * _firstUnReadMsgWhenInitData; // +0x110
    NSMutableDictionary * _unreadFoldMsg; // +0x118
    NSMutableArray * _unreadCannotFoldMsg; // +0x120
    CMessageWrap * _firstUnreadMessageWrap; // +0x128
}
- (void)initViewController;
- (void)dealloc;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)ViewDidAppear;
- (unsigned int)getMsgCountToLoad;
- (BOOL)isShowHeadImage:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (void)onReaderFolderCellWillExpand:(id)arg1;
- (void)onReaderFolderCellDidExpand:(id)arg1;
- (void)onReaderTemplateMsgFolderCellDidClick:(id)arg1;
- (void)onReaderTemplateMsgFolderCellReport:(id)arg1 reportItem:(id)arg2;
- (void)onReaderFolderCellWillCollapse:(id)arg1;
- (void)onReaderFolderCellDidCollapse:(id)arg1;
- (void)clickTimeNodeRightButton:(id)arg1;
- (void)dataWillInit;
- (id)GetFirstUnReadMessage;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)performDeleteMsg:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (BOOL)shouldLocateToFirstMsgWhenViewDidAppear;
- (unsigned int)GetLastLocalID;
- (unsigned int)GetFirstLocalID;
- (id)getEarlierMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getLaterMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getMsgWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5 isEarlier:(BOOL)arg6;
- (id)handleCombineUnreadMessageWrapList:(id)arg1;
- (BOOL)canCombineMessageWrap:(id)arg1;
- (BOOL)isUnreadMsg:(id)arg1;
- (void)openTemplateSubViewController:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenChatView:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)onOpenWeappProfileWithAppid:(id)arg1 appBrandType:(unsigned int)arg2 msgWrap:(id)arg3;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (id)firstUnReadMsgWhenInitData;
- (void)setFirstUnReadMsgWhenInitData:(id)arg1;
- (id)unreadFoldMsg;
- (void)setUnreadFoldMsg:(id)arg1;
- (id)unreadCannotFoldMsg;
- (void)setUnreadCannotFoldMsg:(id)arg1;
- (id)firstUnreadMessageWrap;
- (void)setFirstUnreadMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
