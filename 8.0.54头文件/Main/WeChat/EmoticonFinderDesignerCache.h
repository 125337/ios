@interface EmoticonFinderDesignerCache : MMObject <PBCoding>
{
    unsigned int _designerUin; // +0x8
    NSMutableArray * _storeItemList; // +0x10
    NSMutableArray * _emojiInfoList; // +0x18
    NSMutableArray * _ipSetList; // +0x20
    unsigned long long _totalEmoticonCount; // +0x28
    unsigned long long _totalEmojiCount; // +0x30
    NSString * _finderUserName; // +0x38
}
+ (void)PBArrayAdd_totalEmoticonCount;
+ (void)PBArrayAdd_totalEmojiCount;
+ (void)PBArrayAdd_storeItemList;
+ (void)PBArrayAdd_emojiInfoList;
+ (void)PBArrayAdd_ipSetList;
+ (void)initialize;
+ (id)getCacheForDesignerUin:(unsigned int)arg1;
+ (BOOL)isCahceExistForDesignerUin:(unsigned int)arg1;
+ (id)getEmoticonFinderDesignerRootDir;
+ (id)getEmoticonFinderDesignerCachePathWithDesignerUin:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveToFile;
- (id)storeItemList;
- (void)setStoreItemList:(id)arg1;
- (id)emojiInfoList;
- (void)setEmojiInfoList:(id)arg1;
- (id)ipSetList;
- (void)setIpSetList:(id)arg1;
- (unsigned long long)totalEmoticonCount;
- (void)setTotalEmoticonCount:(unsigned long long)arg1;
- (unsigned long long)totalEmojiCount;
- (void)setTotalEmojiCount:(unsigned long long)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (void).cxx_destruct;
@end

