@interface WCCommentUniCommentInfo : NSObject
{
    int _bypassBufferType; // +0x8
    NSString * _entityId; // +0x10
    NSString * _appName; // +0x18
    NSData * _bypassBuffer; // +0x20
    NSString * _feedOwnerUsername; // +0x28
}
- (id)entityId;
- (void)setEntityId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)bypassBuffer;
- (void)setBypassBuffer:(id)arg1;
- (int)bypassBufferType;
- (void)setBypassBufferType:(int)arg1;
- (id)feedOwnerUsername;
- (void)setFeedOwnerUsername:(id)arg1;
- (void).cxx_destruct;
@end
