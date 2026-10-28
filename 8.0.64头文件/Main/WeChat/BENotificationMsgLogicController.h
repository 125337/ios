@interface BENotificationMsgLogicController : BaseMsgContentLogicController
{
    WAContactGetter * m_contactGetter; // +0x100
    TemplateMsgExposeLogic * m_exposeLogic; // +0x108
    CMessageWrap * _firstUnReadMsgWhenInitData; // +0x110
    NSMutableSet * _expandedMsgLocalIDSet; // +0x118
    NSMutableArray * _needResetAlphaCellViewList; // +0x120
    NSMutableSet * _expandSystemMsgSet; // +0x128
}
- (void)initViewController;
- (void)dealloc;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)ViewDidAppear;
- (void)ViewWillDisappear;
- (unsigned int)getMsgCountToLoad;
- (id)GetFirstUnReadMessage;
- (id)chatSplitWording;
- (BOOL)isShowHeadImage:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (void)onReaderFolderCellWillExpand:(id)arg1;
- (void)onReaderFolderCellDidExpand:(id)arg1;
- (void)onReaderFolderCellWillCollapse:(id)arg1;
- (void)onReaderFolderCellDidCollapse:(id)arg1;
- (void)clickTimeNodeRightButton:(id)arg1;
- (void)tryExpandReaderMessageFolder:(id)arg1;
- (void)dataWillInit;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)performDeleteMsg:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (BOOL)shouldLocateToFirstMsgWhenViewDidAppear;
- (void)setHasShowUnreadTip:(unsigned long long)arg1;
- (void)onClickUnreadTip:(unsigned long long)arg1;
- (id)getEarlierMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getLaterMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getMessageWrapLocalIDListStr:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenChatView:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)onOpenWeappProfileWithAppid:(id)arg1 appBrandType:(unsigned int)arg2 msgWrap:(id)arg3;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)reportTemplateMsg:(id)arg1 opType:(long long)arg2;
- (void)onInsertTempNotiMsg:(id)arg1;
- (void)onEditTempNotiMsg:(id)arg1;
- (void)onDeleteTempNotiMsg:(long long)arg1 username:(id)arg2 svrId:(long long)arg3;
- (id)firstUnReadMsgWhenInitData;
- (void)setFirstUnReadMsgWhenInitData:(id)arg1;
- (id)expandedMsgLocalIDSet;
- (void)setExpandedMsgLocalIDSet:(id)arg1;
- (id)needResetAlphaCellViewList;
- (void)setNeedResetAlphaCellViewList:(id)arg1;
- (id)expandSystemMsgSet;
- (void)setExpandSystemMsgSet:(id)arg1;
- (void).cxx_destruct;
@end
