@interface OtherFastListHandler : BaseFastListHandler
- (int)requiredBizType;
- (id)requiredFilePathList;
- (void)onBeforeCleanCache:(id)arg1;
- (void)onAfterCleanCache:(id)arg1;
- (id)requiredFilePathListForDump;
@end
