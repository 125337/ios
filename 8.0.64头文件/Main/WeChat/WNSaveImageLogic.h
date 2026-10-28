@interface WNSaveImageLogic : MMObject
{
    id <WNSaveImageLogicDataSource> m_dataController; // +0x8
    MMTableView * m_tableView; // +0x10
    WNContentStorage * m_storage; // +0x18
    BOOL * m_forceLoadImage; // +0x20
    unsigned long long m_squareImagesCount; // +0x28
    BOOL m_needReload; // +0x30
    NSMutableArray * m_arrMaxFontSize; // +0x38
    NSArray * m_currentSquareViews; // +0x40
    BOOL _bSquareImageEnable; // +0x48
    NSArray * _arrDataSource; // +0x50
    UIView * _currentLongNoteView; // +0x58
    NSMutableAttributedString * _allContent; // +0x60
    WNSaveImageConfiguration * _config; // +0x68
    WNSaveImageConfiguration * _lastConfig; // +0x70
    WNSaveImageReportDataModel * _reportData; // +0x78
    MMTimer * _saveTimer; // +0x80
    long long _curIndex; // +0x88
    double _curOffset; // +0x90
    NSMutableArray * _arrSaveImages; // +0x98
    WNTextView * _curSaveView; // +0xa0
    UITextPosition * _lastSavePos; // +0xa8
}
- (void)setNoteViewController:(id)arg1 withTableView:(id)arg2 andStorage:(id)arg3 andVisibHeight:(double)arg4 andSquareHeight:(double)arg5 andForceLoadImage:(BOOL *)arg6;
- (void)recordCurrentStateNeedUpdate:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateImageType:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateFontName:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateBackgourndImage:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateTextAlignment:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateSelectedType:(long long)arg1 atIndex:(long long)arg2;
- (id)getHeaderView;
- (id)getNewFooterViewForIndex:(long long)arg1 andImagesCount:(long long)arg2;
- (id)getArrSelectedIndex;
- (long long)getCurrentMaxFontSize;
- (void)saveImage;
- (BOOL)currentForceLoadState;
- (void)disableForceLoadImage;
- (void)preCheckSquareImageEnable;
- (void)preCheckSquareImageEnableWithFont;
- (BOOL)getSquareImageEnable;
- (id)getLongNoteView;
- (id)getLongTableViewTextView:(double)arg1;
- (void)beginSaveLongNoteImage;
- (void)saveImageThroughTimer;
- (void)continueSaveLongNoteImage;
- (void)saveLongNoteImage:(id)arg1;
- (id)getSquareNoteViews;
- (id)getTableViewSquarePreview;
- (void)initNoteViewStateWith:(id)arg1;
- (id)getSquareViewAttributedString;
- (id)getSquareViewFromAttributedString:(id)arg1 needCheckMaxFontSize:(BOOL)arg2;
- (void)checkMaxFontSize:(id)arg1;
- (void)beginSaveSquareImage;
- (void)saveSquareImageThroughTimer;
- (void)continueSaveSquareImage;
- (void)saveSquareNoteImages:(id)arg1;
- (id)creatRTETextViewForAttributedText:(id)arg1;
- (id)creatRTETextViewForAttributedText:(id)arg1 withProvider:(id)arg2;
- (void)updateMutableAttributedString:(id)arg1 withFont:(id)arg2;
- (id)getRenderImageFromView:(id)arg1;
- (id)getAttachmentViewProvider;
- (id)getAttachmentViewProviderWithImageType:(long long)arg1 andColorType:(unsigned long long)arg2;
- (BOOL)isInDarkMode;
- (void)startTimerWithInterval:(double)arg1 andSelector:(SEL)arg2;
- (void)stopTimer;
- (void)updateDefaultReportData:(unsigned int)arg1 andSource:(unsigned long long)arg2;
- (void)updateReportDataDownloadStatus:(unsigned long long)arg1;
- (void)reportSaveResult:(unsigned long long)arg1;
- (void)updateReportData:(int)arg1;
- (id)arrDataSource;
- (void)setArrDataSource:(id)arg1;
- (id)currentLongNoteView;
- (void)setCurrentLongNoteView:(id)arg1;
- (id)allContent;
- (void)setAllContent:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)lastConfig;
- (void)setLastConfig:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (BOOL)bSquareImageEnable;
- (void)setBSquareImageEnable:(BOOL)arg1;
- (id)saveTimer;
- (void)setSaveTimer:(id)arg1;
- (long long)curIndex;
- (void)setCurIndex:(long long)arg1;
- (double)curOffset;
- (void)setCurOffset:(double)arg1;
- (id)arrSaveImages;
- (void)setArrSaveImages:(id)arg1;
- (id)curSaveView;
- (void)setCurSaveView:(id)arg1;
- (id)lastSavePos;
- (void)setLastSavePos:(id)arg1;
- (void).cxx_destruct;
@end
