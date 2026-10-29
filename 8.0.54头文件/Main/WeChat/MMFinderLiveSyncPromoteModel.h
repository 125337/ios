@interface MMFinderLiveSyncPromoteModel : NSObject
{
    BOOL _needReplace; // +0x8
    NSData * _syncContext; // +0x10
    NSArray * _promoteInfoList; // +0x18
    MMFinderLiveAudiencePromoteInfo * _promoteInfo; // +0x20
}
+ (id)getLiveSyncPromoteModelWithPromoteInfoListResp:(id)arg1;
+ (id)getPromoteInfoListWithPromoteInfoListResp:(id)arg1;
- (BOOL)needReplace;
- (void)setNeedReplace:(BOOL)arg1;
- (id)syncContext;
- (void)setSyncContext:(id)arg1;
- (id)promoteInfoList;
- (void)setPromoteInfoList:(id)arg1;
- (id)promoteInfo;
- (void)setPromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end

