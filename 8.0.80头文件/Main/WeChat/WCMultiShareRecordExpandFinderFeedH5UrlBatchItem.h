@interface WCMultiShareRecordExpandFinderFeedH5UrlBatchItem : NSObject
{
    BOOL _addTimeNickName; // +0x8
    BOOL _prefixLineBreak; // +0x9
    unsigned long long _objectId; // +0x10
    MMTextItemProvider * _item; // +0x18
    NSString * _digest; // +0x20
    unsigned long long _indentLevel; // +0x28
    NSString * _customNickName; // +0x30
    NSString * _customTimeDesc; // +0x38
}
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (BOOL)addTimeNickName;
- (void)setAddTimeNickName:(BOOL)arg1;
- (unsigned long long)indentLevel;
- (void)setIndentLevel:(unsigned long long)arg1;
- (id)customNickName;
- (void)setCustomNickName:(id)arg1;
- (id)customTimeDesc;
- (void)setCustomTimeDesc:(id)arg1;
- (BOOL)prefixLineBreak;
- (void)setPrefixLineBreak:(BOOL)arg1;
- (void).cxx_destruct;
@end
