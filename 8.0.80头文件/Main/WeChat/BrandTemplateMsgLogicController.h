@interface BrandTemplateMsgLogicController : BaseMsgContentLogicController
{
    TemplateMsgExposeLogic * m_exposeLogic; // +0xe0
    NSString * _templateSessionId; // +0xe8
    TemplateMsgSubLogicEnterParams * _enterParams; // +0xf0
    BrandTemplateMsgContentViewController * _templateVC; // +0xf8
}
- (void)onWillEnterRoom;
- (void)initViewController;
- (id)pageSheetModeTitle;
- (unsigned int)getMsgCountToLoad;
- (BOOL)CanShowBanner;
- (BOOL)isShowHeadImage:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (unsigned int)getStartCreateTime;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)filterAndLimitMessagesWithArray:(id)arg1 maxCount:(long long)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (id)templateSessionId;
- (void)setTemplateSessionId:(id)arg1;
- (id)enterParams;
- (void)setEnterParams:(id)arg1;
- (id)templateVC;
- (void)setTemplateVC:(id)arg1;
- (void).cxx_destruct;
@end
