@interface CameraScanGoodsAdInfo : NSObject
{
    BOOL _isAllResourcesOK; // +0x8
    unsigned int _adHandID; // +0xc
    NSString * _adUxInfo; // +0x10
    NSURL * _markDotImageURL; // +0x18
    NSURL * _introduceImageURL; // +0x20
    NSURL * _bottomBgImageURL; // +0x28
}
- (id)adTraceID;
- (id)adUxInfo;
- (void)setAdUxInfo:(id)arg1;
- (unsigned int)adHandID;
- (void)setAdHandID:(unsigned int)arg1;
- (id)markDotImageURL;
- (void)setMarkDotImageURL:(id)arg1;
- (id)introduceImageURL;
- (void)setIntroduceImageURL:(id)arg1;
- (id)bottomBgImageURL;
- (void)setBottomBgImageURL:(id)arg1;
- (BOOL)isAllResourcesOK;
- (void)setIsAllResourcesOK:(BOOL)arg1;
- (void).cxx_destruct;
@end

