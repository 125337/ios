@interface LiveFastListHandler : BaseFastListHandler
{
    BOOL _ignoreClean; // +0x10
    MMLiveStorageCleanupContext * _context; // +0x18
}
- (int)requiredBizType;
- (id)requiredFilePathList;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)ignoreClean;
- (void)setIgnoreClean:(BOOL)arg1;
- (void).cxx_destruct;
@end
