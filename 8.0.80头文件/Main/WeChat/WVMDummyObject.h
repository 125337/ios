@interface WVMDummyObject : NSObject
{
    unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> objcInfo; // +0x8
    int _count; // +0x30
}
- (int)count;
- (void)setCount:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
