@interface WCAdCanvasCombineShareInfo : NSObject
{
    BOOL _isInteractiveCanvas; // +0x8
    unsigned int _originAdType; // +0xc
    NSString * _type; // +0x10
    NSString * _pageId; // +0x18
    NSString * _uxInfo; // +0x20
    NSString * _canvasDynamicInfo; // +0x28
    NSString * _originSnsId; // +0x30
    NSString * _originUxInfo; // +0x38
    NSString * _originAid; // +0x40
    NSString * _originTraceId; // +0x48
    NSString * _originAdCanvasExt; // +0x50
    NSString * _originSKAdItems; // +0x58
    WCADCanvasGiveHBCardInfo * _giveHBCardInfo; // +0x60
}
- (id)type;
- (void)setType:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)originSnsId;
- (void)setOriginSnsId:(id)arg1;
- (id)originUxInfo;
- (void)setOriginUxInfo:(id)arg1;
- (unsigned int)originAdType;
- (void)setOriginAdType:(unsigned int)arg1;
- (id)originAid;
- (void)setOriginAid:(id)arg1;
- (id)originTraceId;
- (void)setOriginTraceId:(id)arg1;
- (id)originAdCanvasExt;
- (void)setOriginAdCanvasExt:(id)arg1;
- (id)originSKAdItems;
- (void)setOriginSKAdItems:(id)arg1;
- (BOOL)isInteractiveCanvas;
- (void)setIsInteractiveCanvas:(BOOL)arg1;
- (id)giveHBCardInfo;
- (void)setGiveHBCardInfo:(id)arg1;
- (void).cxx_destruct;
@end
