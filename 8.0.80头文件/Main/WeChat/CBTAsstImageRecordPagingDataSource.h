@interface CBTAsstImageRecordPagingDataSource : NSObject <CBTAsstImagePagingDataSource>
+ (id)sharedInstance;
- (id)cbt_infosFromImageRecordListBytes:(id)arg1;
- (id)cbt_infosFromImageRecordListBytes:(id)arg1 listOrder:(unsigned long long)arg2;
- (void)cbt_fetchImagesWithAnchor:(id)arg1 scrollType:(unsigned long long)arg2 upContextBytes:(id)arg3 downContextBytes:(id)arg4 context:(id)arg5 completion:(id /* block */)arg6;
- (void)cbt_fetchImagesWithAnchor:(id)arg1 scrollType:(unsigned long long)arg2 upContextBytes:(id)arg3 downContextBytes:(id)arg4 context:(id)arg5 emptyPageBudget:(unsigned long long)arg6 seenCursors:(id)arg7 completion:(id /* block */)arg8;
@end
