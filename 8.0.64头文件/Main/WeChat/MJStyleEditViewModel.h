@interface MJStyleEditViewModel : NSObject <MJMaterialLoadingStatusViewModel>
{
    BOOL _segmentHasMultiSubtitles; // +0x8
    BOOL _hasChanges; // +0x9
    BOOL _shouldShowTextAnimTab; // +0xa
    id <MJStyleEditViewModelDataSource> _dataSource; // +0x10
    MJStyleEditData * _stickerData; // +0x18
    MJStyleEditData * _fontData; // +0x20
    MJStyleEditData * _colorData; // +0x28
    MJStyleEditData * _animData; // +0x30
    NSArray * _tabItems; // +0x38
    unsigned long long _selectedTabIndex; // +0x40
    long long _entrance; // +0x48
    unsigned long long _segmentType; // +0x50
    OMJMaterialInfo * _defaultTitleMaterialInfo; // +0x58
    OMJMaterialManager * _manager; // +0x60
    NSString * _selectedMaterialID; // +0x68
    NSDictionary * _stickerDicts; // +0x70
    NSDictionary * _fontDicts; // +0x78
    NSDictionary * _animDicts; // +0x80
    NSMutableDictionary * _downloadStatus; // +0x88
    NSDictionary * _backupStylesDict; // +0x90
}
+ (long long)searchFontNameWith:(id)arg1 data:(id)arg2;
+ (long long)searchColorStyleIDWith:(id)arg1 data:(id)arg2;
+ (long long)searchAnimPresetIDWith:(id)arg1 data:(id)arg2;
- (id)initWithMaterialManager:(id)arg1 entrance:(long long)arg2 segmentType:(unsigned long long)arg3 segmentHasMultiSubtitles:(BOOL)arg4;
- (id)segmentVM;
- (unsigned long long)type;
- (void)fetchLocalDatas:(id /* block */)arg1;
- (void)fetchDatas:(id /* block */)arg1;
- (void)backupStyles;
- (void)fetchBackupStyles:(id /* block */)arg1;
- (void)fetchNearestSelectedDatas:(id /* block */)arg1;
- (void)loadData:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadMaterialWithType:(unsigned long long)arg1 at:(long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)updateColorDataIfNeededWith:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)materialScene;
- (id)stickerData;
- (id)fontData;
- (id)colorData;
- (id)animData;
- (id)tabItems;
- (id)downloadStatus;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (float)mj_loadingProgressWithID:(id)arg1;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(id /* block */)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setStickerData:(id)arg1;
- (void)setFontData:(id)arg1;
- (void)setColorData:(id)arg1;
- (void)setAnimData:(id)arg1;
- (void)setTabItems:(id)arg1;
- (unsigned long long)selectedTabIndex;
- (void)setSelectedTabIndex:(unsigned long long)arg1;
- (long long)entrance;
- (void)setEntrance:(long long)arg1;
- (unsigned long long)segmentType;
- (void)setSegmentType:(unsigned long long)arg1;
- (BOOL)segmentHasMultiSubtitles;
- (void)setSegmentHasMultiSubtitles:(BOOL)arg1;
- (BOOL)hasChanges;
- (void)setHasChanges:(BOOL)arg1;
- (id)defaultTitleMaterialInfo;
- (void)setDefaultTitleMaterialInfo:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (BOOL)shouldShowTextAnimTab;
- (void)setShouldShowTextAnimTab:(BOOL)arg1;
- (id)selectedMaterialID;
- (void)setSelectedMaterialID:(id)arg1;
- (id)stickerDicts;
- (void)setStickerDicts:(id)arg1;
- (id)fontDicts;
- (void)setFontDicts:(id)arg1;
- (id)animDicts;
- (void)setAnimDicts:(id)arg1;
- (void)setDownloadStatus:(id)arg1;
- (id)backupStylesDict;
- (void)setBackupStylesDict:(id)arg1;
- (void).cxx_destruct;
@end
