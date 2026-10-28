@interface ChatBotVOIPBoardViewWeAppProcessView : UIView <ILinkEventExt>
{
    unsigned int _poiTextShowTime; // +0x8
    NSString * _cur_sessionId; // +0x10
    UIScrollView * _cardView; // +0x18
    double _curTop; // +0x20
    ChatBotVOIPBoardViewWeAppProcessTitleView * _curLoadingTitleView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutCardView;
- (void)insertPOIProcessData:(id)arg1;
- (void)insertProcessData:(id)arg1;
- (void)insertProcessDataInner:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)stopProcess:(BOOL)arg1;
- (id)cur_sessionId;
- (void)setCur_sessionId:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (double)curTop;
- (void)setCurTop:(double)arg1;
- (id)curLoadingTitleView;
- (void)setCurLoadingTitleView:(id)arg1;
- (unsigned int)poiTextShowTime;
- (void)setPoiTextShowTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
