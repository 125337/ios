@interface TRTCPublishCdnUrl : NSObject <NSCopying>
{
    BOOL _isInternalLine; // +0x8
    NSString * _rtmpUrl; // +0x10
}
- (PublishCdnUrl)convertToCppParams;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)rtmpUrl;
- (void)setRtmpUrl:(id)arg1;
- (BOOL)isInternalLine;
- (void)setIsInternalLine:(BOOL)arg1;
- (void).cxx_destruct;
@end
