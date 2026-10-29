@interface _TtC6WeChat33MagicSclStartupPlaceHolderService : MMUserService <MMServiceProtocol>
{
     snapshotEnvironments; // +0x8
     snapshotEnvironmentsLock; // +0x10
     $__lazy_storage_$_cacheRootDirMap; // +0x18
     coverOutdatedTimeList; // +0x20
}
- (BOOL)supportCoverWithBizName:(id)arg1;
- (BOOL)hasCoverWithBizName:(id)arg1 frameSetId:(id)arg2;
- (id)coverLocalPathWithBizName:(id)arg1 frameSetId:(id)arg2;
- (id)placeHolderWithBizName:(id)arg1 frameSetName:(id)arg2 frameSetRootPath:(id)arg3;
- (void)updateHeightWithBizName:(id)arg1 frameSetId:(id)arg2 height:(long long)arg3;
- (id)init;
- (void).cxx_destruct;
@end
