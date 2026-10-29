@interface WCAdDynamicCanvasServerData : NSObject <PBCoding>
{
    NSString * _adCanvasXml; // +0x8
    NSString * _dynamicCanvasData; // +0x10
    unsigned long long _cacheTime; // +0x18
    WCAdCanvasLoadParams * _loadParams; // +0x20
}
+ (void)PBArrayAdd_adCanvasXml;
+ (void)PBArrayAdd_dynamicCanvasData;
+ (void)PBArrayAdd_cacheTime;
+ (void)initialize;
+ (id)fromPBCodingBuffer:(id)arg1;
- (id)getPBPropertyTable;
- (id)toPBCodingBuffer;
- (BOOL)isValid;
- (id)adCanvasXml;
- (void)setAdCanvasXml:(id)arg1;
- (id)dynamicCanvasData;
- (void)setDynamicCanvasData:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)loadParams;
- (void)setLoadParams:(id)arg1;
- (void).cxx_destruct;
@end

