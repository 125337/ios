@interface WCFinderGroupLiveChatHistoryModel : NSObject <PBCoding>
{
    NSData * _lastBuffer; // +0x8
    OrderedDictionary * _cacheChatHistoryDict; // +0x10
    NSMutableDictionary * _tempClientIdAndSeqDict; // +0x18
    NSArray * _cacheChatHistoryItemList; // +0x20
    NSArray * _cacheChatHistoryItemKeyList; // +0x28
}
+ (void)PBArrayAdd_lastBuffer;
+ (void)PBArrayAdd_tempClientIdAndSeqDict;
+ (void)PBArrayAdd_cacheChatHistoryItemList;
+ (void)PBArrayAdd_cacheChatHistoryItemKeyList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)cacheChatHistoryDict;
- (void)setCacheChatHistoryDict:(id)arg1;
- (id)tempClientIdAndSeqDict;
- (void)setTempClientIdAndSeqDict:(id)arg1;
- (id)cacheChatHistoryItemList;
- (void)setCacheChatHistoryItemList:(id)arg1;
- (id)cacheChatHistoryItemKeyList;
- (void)setCacheChatHistoryItemKeyList:(id)arg1;
- (void).cxx_destruct;
@end
