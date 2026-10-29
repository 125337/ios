@interface TextStateViewCountReportConfig : NSObject <NSCopying>
{
    NSString * _statusId; // +0x8
    NSString * _sessionId; // +0x10
    unsigned long long _enterScene; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isReportable;
- (id)statusId;
- (void)setStatusId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
