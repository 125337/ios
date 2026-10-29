@interface CBTTimelineFlutterReuseState : NSObject
{
    NSData * _uplinkedWrapData; // +0x8
    NSString * _lastModifyId; // +0x10
    NSString * _lastPendingMsgContent; // +0x18
}
- (id)uplinkedWrapData;
- (void)setUplinkedWrapData:(id)arg1;
- (id)lastModifyId;
- (void)setLastModifyId:(id)arg1;
- (id)lastPendingMsgContent;
- (void)setLastPendingMsgContent:(id)arg1;
- (void).cxx_destruct;
@end
