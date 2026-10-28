@interface WCAdHalfRandomCardGetCardIdResultModel : WCAdChannelReportExtendInfoModel
{
    int _result; // +0x8
    NSString * _canvasId; // +0x10
    NSString * _pageId; // +0x18
    NSString * _cardId; // +0x20
}
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (int)result;
- (void)setResult:(int)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (void).cxx_destruct;
@end
