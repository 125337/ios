@interface WCAdCanvasDynamicExtInfoModel : NSObject
{
    int _isTransparent; // +0x8
    int _adCanvasType; // +0xc
    NSString * _page; // +0x10
    NSString * _cardId; // +0x18
    NSString * _clickIndex; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)setExtInfo:(id)arg1 withCardId:(id)arg2;
+ (id)setExtInfo:(id)arg1 withClickIndex:(long long)arg2;
+ (id)setExtInfo:(id)arg1 jsonKey:(id)arg2 value:(id)arg3 modelSetter:(id /* block */)arg4;
- (int)isTransparent;
- (void)setIsTransparent:(int)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)clickIndex;
- (void)setClickIndex:(id)arg1;
- (int)adCanvasType;
- (void)setAdCanvasType:(int)arg1;
- (void).cxx_destruct;
@end
