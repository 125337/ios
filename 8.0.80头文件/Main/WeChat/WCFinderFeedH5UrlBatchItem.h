@interface WCFinderFeedH5UrlBatchItem : NSObject
{
    BOOL _isLastAttachFile; // +0x8
    BOOL _addTimeNickName; // +0x9
    unsigned long long _objectId; // +0x10
    MMTextItemProvider * _item; // +0x18
    NSString * _digest; // +0x20
}
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (BOOL)isLastAttachFile;
- (void)setIsLastAttachFile:(BOOL)arg1;
- (BOOL)addTimeNickName;
- (void)setAddTimeNickName:(BOOL)arg1;
- (void).cxx_destruct;
@end
