@interface WCHardLinkService : MMUserService <MMServiceProtocol>
{
    WCHardLinkMergeOperation * _mergeOperation; // +0x8
}
+ (id)getRelatedMemoryKV;
+ (BOOL)getStateOfHardLinkDone;
+ (void)setStateOfHardLinkDone:(BOOL)arg1;
+ (void)setCurrentLink:(id)arg1 with:(id)arg2;
+ (void)removeLinkInfo;
+ (id)getBeLinkedInfo;
+ (id)getLinkToInfo;
- (void)dealloc;
- (void)tryToHardLinkSameFile;
- (id)mergeOperation;
- (void)setMergeOperation:(id)arg1;
- (void).cxx_destruct;
@end

