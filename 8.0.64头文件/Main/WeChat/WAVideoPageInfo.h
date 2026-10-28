@interface WAVideoPageInfo : MMObject
{
    BOOL _isFromOpenSDK; // +0x8
    NSString * _videoSource; // +0x10
    NSString * _appThumbUrl; // +0x18
    CGSize _thumbImageSize; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (CGSize)thumbImageSize;
- (void)setThumbImageSize:(CGSize)arg1;
- (id)videoSource;
- (void)setVideoSource:(id)arg1;
- (id)appThumbUrl;
- (void)setAppThumbUrl:(id)arg1;
- (BOOL)isFromOpenSDK;
- (void)setIsFromOpenSDK:(BOOL)arg1;
- (void).cxx_destruct;
@end
