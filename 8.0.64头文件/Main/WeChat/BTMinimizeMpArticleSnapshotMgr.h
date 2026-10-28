@interface BTMinimizeMpArticleSnapshotMgr : MMObject
+ (void)genMinimizeSnapshotWithReaderItemCellViewModel:(id)arg1 contact:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)__addSnapshotView:(id)arg1 completionBlock:(id /* block */)arg2;
+ (BOOL)checkDataValidWithItemShowType:(unsigned int)arg1 title:(id)arg2 bizNickname:(id)arg3 coverImgUrl:(id)arg4;
+ (void)genMinimizeSnapshotWithRecAppMsgViewModel:(id)arg1 contact:(id)arg2 completionBlock:(id /* block */)arg3;
@end
