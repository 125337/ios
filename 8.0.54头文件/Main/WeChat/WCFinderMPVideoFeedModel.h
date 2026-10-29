@interface WCFinderMPVideoFeedModel : NSObject <YYModel>
{
    NSString * _exportID; // +0x8
    NSString * _nonceID; // +0x10
    NSString * _sessionBuffer; // +0x18
}
- (id)initWithVideoDataStr:(id)arg1;
- (id)exportID;
- (void)setExportID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end

