@interface WCFinderFeedArrayModifier : NSObject
{
    vector<ModifyItem, std::allocator<ModifyItem>> changes; // +0x8
}
- (void)clear;
- (void)append:(id)arg1;
- (void)insertHead:(id)arg1;
- (void)insert:(id)arg1 after:(id)arg2;
- (void)replaceAll:(id)arg1;
- (void)remove:(id)arg1;
- (void)replace:(id)arg1 target:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
