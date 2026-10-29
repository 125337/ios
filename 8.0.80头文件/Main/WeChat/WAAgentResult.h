@interface WAAgentResult : NSObject
{
    NSString * _sessionId; // +0x8
    UIImage * _snapshotImage; // +0x10
    NSString * _resultPagePath; // +0x18
    NSString * _rawRelativePagePath; // +0x20
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)resultPagePath;
- (void)setResultPagePath:(id)arg1;
- (id)rawRelativePagePath;
- (void)setRawRelativePagePath:(id)arg1;
- (void).cxx_destruct;
@end
