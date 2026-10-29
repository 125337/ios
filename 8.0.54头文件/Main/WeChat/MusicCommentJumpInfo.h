@interface MusicCommentJumpInfo : NSObject
{
    unsigned long long _refCommentId; // +0x8
    NSString * _entityId; // +0x10
    NSString * _appName; // +0x18
}
- (unsigned long long)refCommentId;
- (void)setRefCommentId:(unsigned long long)arg1;
- (id)entityId;
- (void)setEntityId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (void).cxx_destruct;
@end

