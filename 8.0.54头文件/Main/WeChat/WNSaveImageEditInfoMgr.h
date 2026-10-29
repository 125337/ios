@interface WNSaveImageEditInfoMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _arrDataSource; // +0x8
}
- (void)onServiceInit;
- (id)getActionSheetDataSource;
- (void)getCurrentDataSource;
- (void)initDataSourceForImageTypes;
- (void)initDataSourceForFontNames;
- (id)checkFontName:(id)arg1;
- (void)initDataSourceForBackgroundImages;
- (void)initDataSourceForTextAlignments;
- (void)getConfigInCurrentMode:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)getBase64String:(id)arg1;
- (id)arrDataSource;
- (void)setArrDataSource:(id)arg1;
- (void).cxx_destruct;
@end

