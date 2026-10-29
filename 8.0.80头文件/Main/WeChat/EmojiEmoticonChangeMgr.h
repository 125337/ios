@interface EmojiEmoticonChangeMgr : NSObject
{
    map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> m_mapEmojiChangeFromSoftbankToUnified; // +0x8
    map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> m_mapEmojiChangeFromUnifiedToSoftbank; // +0x20
}
+ (id)shareInstance;
- (id)init;
- (void)dealloc;
- (id)changeEmojiFromSoftbankToUnified:(id)arg1;
- (unsigned int)countEmojiFromUnified:(id)arg1;
- (unsigned int)countEmojiFromSoftbank:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
