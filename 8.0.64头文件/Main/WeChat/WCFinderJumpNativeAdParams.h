@interface WCFinderJumpNativeAdParams : NSObject
{
    BOOL _noStore; // +0x8
    BOOL _preLoad; // +0x9
    unsigned long long _canvasId; // +0x10
    NSString * _uxinfo; // +0x18
    NSString * _canvasDynamicInfo; // +0x20
    NSArray * _relatedPageIds; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (unsigned long long)canvasId;
- (void)setCanvasId:(unsigned long long)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (BOOL)noStore;
- (void)setNoStore:(BOOL)arg1;
- (BOOL)preLoad;
- (void)setPreLoad:(BOOL)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)relatedPageIds;
- (void)setRelatedPageIds:(id)arg1;
- (void).cxx_destruct;
@end
