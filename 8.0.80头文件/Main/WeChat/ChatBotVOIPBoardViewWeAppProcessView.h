@interface ChatBotVOIPBoardViewWeAppProcessView : UIView <ILinkEventExt>
{
    BOOL _bUseDarkModeColor; // +0x8
    unsigned int _poiTextShowTime; // +0xc
    NSString * _cur_sessionId; // +0x10
    NSString * _chatbotAnswerId; // +0x18
    UIScrollView * _cardView; // +0x20
    double _curTop; // +0x28
    ChatBotVOIPBoardViewWeAppProcessTitleView * _curLoadingTitleView; // +0x30
    LinkWeAppJumpWrap * _waitingLaunchWeAppWrap; // +0x38
    AIWeAppProcessData * _curProccessData; // +0x40
    NSMutableArray * _uncompletedSubButtons; // +0x48
    NSMutableArray * _uncompletedSubProcesses; // +0x50
    NSString * _cur_traceId; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)handleLongPress:(id)arg1;
- (void)menuOption1Tapped;
- (void)menuOption2Tapped;
- (void)complete;
- (void)layoutCardView;
- (void)clearView;
- (void)insertPOIProcessData:(id)arg1;
- (void)insertProcessData:(id)arg1;
- (void)insertProcessDataInner:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)actionButtonClicked:(id)arg1;
- (void)stopProcess:(BOOL)arg1;
- (id)adaptiveColor:(id)arg1;
- (id)cur_sessionId;
- (void)setCur_sessionId:(id)arg1;
- (id)chatbotAnswerId;
- (void)setChatbotAnswerId:(id)arg1;
- (BOOL)bUseDarkModeColor;
- (void)setBUseDarkModeColor:(BOOL)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (double)curTop;
- (void)setCurTop:(double)arg1;
- (id)curLoadingTitleView;
- (void)setCurLoadingTitleView:(id)arg1;
- (unsigned int)poiTextShowTime;
- (void)setPoiTextShowTime:(unsigned int)arg1;
- (id)waitingLaunchWeAppWrap;
- (void)setWaitingLaunchWeAppWrap:(id)arg1;
- (id)curProccessData;
- (void)setCurProccessData:(id)arg1;
- (id)uncompletedSubButtons;
- (void)setUncompletedSubButtons:(id)arg1;
- (id)uncompletedSubProcesses;
- (void)setUncompletedSubProcesses:(id)arg1;
- (id)cur_traceId;
- (void)setCur_traceId:(id)arg1;
- (void).cxx_destruct;
@end
