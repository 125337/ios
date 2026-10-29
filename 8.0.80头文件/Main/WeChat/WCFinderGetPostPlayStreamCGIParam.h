@interface WCFinderGetPostPlayStreamCGIParam : NSObject
{
    int _tabId; // +0x8
    int _fromScene; // +0xc
    unsigned long long _topicID; // +0x10
    NSString * _byPassInfo; // +0x18
    NSString * _jumpInfoNativeByPassInfo; // +0x20
    NSData * _lastBuffer; // +0x28
    NSString * _fromObjectId; // +0x30
    NSString * _fromSessionBuffer; // +0x38
}
- (unsigned long long)topicID;
- (void)setTopicID:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)jumpInfoNativeByPassInfo;
- (void)setJumpInfoNativeByPassInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)fromObjectId;
- (void)setFromObjectId:(id)arg1;
- (int)tabId;
- (void)setTabId:(int)arg1;
- (id)fromSessionBuffer;
- (void)setFromSessionBuffer:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (void).cxx_destruct;
@end
