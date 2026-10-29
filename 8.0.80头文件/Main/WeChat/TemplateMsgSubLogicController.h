@interface TemplateMsgSubLogicController : BaseMsgContentLogicController
{
    WAContactGetter * m_contactGetter; // +0x100
    TemplateMsgExposeLogic * m_exposeLogic; // +0x108
    NSString * _templateSessionId; // +0x110
    TemplateMsgSubViewController * _templateVC; // +0x118
}
- (void)onWillEnterRoom;
- (void)initViewController;
- (void)dealloc;
- (void)setNeedUpdateTitle:(BOOL *)arg1;
- (unsigned int)getMsgCountToLoad;
- (BOOL)isShowHeadImage:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (id)GetFirstUnReadMessage;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenChatView:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)onOpenWeappProfileWithAppid:(id)arg1 appBrandType:(unsigned int)arg2 msgWrap:(id)arg3;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (id)templateSessionId;
- (void)setTemplateSessionId:(id)arg1;
- (id)templateVC;
- (void)setTemplateVC:(id)arg1;
- (void).cxx_destruct;
@end
