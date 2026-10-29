@interface MMImagePickerControllerPreviewReportObject : MMObject
{
    unsigned int m_previewCount; // +0x8
    MMImagePickerReportInfo * _reportInfo; // +0x10
}
- (id)reportInfo;
- (void)reportPreviewWithScene:(int)arg1;
- (void)increasePreviewCount;
- (void)reportPicerReportInfo;
- (void)reportPickerActionInfo;
- (unsigned int)m_previewCount;
- (void)setM_previewCount:(unsigned int)arg1;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

