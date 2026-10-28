@interface WCFinderGetBulletCommentCGIParams : NSObject
{
    int _selectedSource; // +0x8
    int _commentScene; // +0xc
    NSString * _objectId; // +0x10
    NSString * _objectNonceId; // +0x18
    unsigned long long _startTimestamp; // +0x20
    NSData * _lastBuffer; // +0x28
    NSArray * _needCommentIds; // +0x30
}
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (int)selectedSource;
- (void)setSelectedSource:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)needCommentIds;
- (void)setNeedCommentIds:(id)arg1;
- (void).cxx_destruct;
@end
