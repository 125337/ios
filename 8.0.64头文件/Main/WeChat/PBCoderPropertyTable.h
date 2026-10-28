@interface PBCoderPropertyTable : NSObject
{
    NSMutableArray * arrayWrap; // +0x8
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> mapTagToIndex; // +0x10
}
- (id)init;
- (id)getValueTypeTable;
- (const void *)getValueTagIndexMap;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
