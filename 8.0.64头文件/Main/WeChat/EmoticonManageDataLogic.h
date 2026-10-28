@interface EmoticonManageDataLogic : NSObject
{
    BOOL _hasUnDownload; // +0x8
    OrderedDictionary * _pageDict; // +0x10
    NSMutableArray * _existLocalPackageArray; // +0x18
    OrderedDictionary * _tmpDict; // +0x20
}
- (id)init;
- (void)loadDataFromDB;
- (id)getManageDataList;
- (id)dataObjAtIndex:(unsigned long long)arg1;
- (void)reloadAllData;
- (id)reloadDataFor:(id)arg1;
- (BOOL)hasUnDownloadPacks;
- (unsigned long long)getPackageCount;
- (unsigned long long)getManageObjCount;
- (BOOL)isUnDownloadAt:(unsigned long long)arg1;
- (unsigned long long)downloadedCount;
- (id)unDownloadIndexPathsForSection:(unsigned long long)arg1;
- (id)commitEdit;
- (void)moveObjFrom:(unsigned long long)arg1 To:(unsigned long long)arg2;
- (void)moveObjInsideSet:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)moveAllAbsIndexFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 offset:(unsigned long long)arg3 isUp:(BOOL)arg4;
- (id)pageDict;
- (void)setPageDict:(id)arg1;
- (id)existLocalPackageArray;
- (void)setExistLocalPackageArray:(id)arg1;
- (BOOL)hasUnDownload;
- (void)setHasUnDownload:(BOOL)arg1;
- (id)tmpDict;
- (void)setTmpDict:(id)arg1;
- (void).cxx_destruct;
@end
