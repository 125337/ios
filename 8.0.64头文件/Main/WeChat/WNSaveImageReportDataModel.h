@interface WNSaveImageReportDataModel : MMObject
{
    int _action; // +0x8
    unsigned long long _outputStyle; // +0x10
    NSString * _fontStyle; // +0x18
    NSString * _bgStyle; // +0x20
    unsigned long long _alignStyle; // +0x28
    unsigned long long _fontWeight; // +0x30
    unsigned long long _saveResult; // +0x38
    unsigned long long _downloadStatus; // +0x40
    NSString * _favId; // +0x48
    unsigned long long _source; // +0x50
}
- (id)initDefaultDataModel;
- (id)emptyBase64String;
- (int)action;
- (void)setAction:(int)arg1;
- (unsigned long long)outputStyle;
- (void)setOutputStyle:(unsigned long long)arg1;
- (id)fontStyle;
- (void)setFontStyle:(id)arg1;
- (id)bgStyle;
- (void)setBgStyle:(id)arg1;
- (unsigned long long)alignStyle;
- (void)setAlignStyle:(unsigned long long)arg1;
- (unsigned long long)fontWeight;
- (void)setFontWeight:(unsigned long long)arg1;
- (unsigned long long)saveResult;
- (void)setSaveResult:(unsigned long long)arg1;
- (unsigned long long)downloadStatus;
- (void)setDownloadStatus:(unsigned long long)arg1;
- (id)favId;
- (void)setFavId:(id)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
