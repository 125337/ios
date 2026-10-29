@interface WCHardLinkService : MMUserService <MMServiceProtocol>
{
    WCHardLinkMergeOperation * _mergeOperation; // +0x8
}
+ (void)publishHardLinkEvent:(id)arg1 to:(id)arg2 newInode:(unsigned long long)arg3 oldInode:(unsigned long long)arg4;
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
