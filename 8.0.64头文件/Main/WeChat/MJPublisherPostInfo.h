@interface MJPublisherPostInfo : NSObject
{
    BOOL _isRealShootContent; // +0x8
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0x10
    NSString * _movieTitle; // +0x18
    FinderMusicReportInfo * _shootMusicReportInfo; // +0x20
    FinderMusicReportInfo * _editMusicReportInfo; // +0x28
    NSString * _photoToVideoGPSAssetId; // +0x30
    NSData * _captionReportData; // +0x38
    NSString * _mjComposingTimelineJsonString; // +0x40
    NSData * _mjComposingTimelineData; // +0x48
    FinderVideoTemplateInfo * _aigcAsyncTemplateInfo; // +0x50
}
- (id)appliedMusicInfo;
- (void)setAppliedMusicInfo:(id)arg1;
- (id)movieTitle;
- (void)setMovieTitle:(id)arg1;
- (id)shootMusicReportInfo;
- (void)setShootMusicReportInfo:(id)arg1;
- (id)editMusicReportInfo;
- (void)setEditMusicReportInfo:(id)arg1;
- (id)photoToVideoGPSAssetId;
- (void)setPhotoToVideoGPSAssetId:(id)arg1;
- (BOOL)isRealShootContent;
- (void)setIsRealShootContent:(BOOL)arg1;
- (id)captionReportData;
- (void)setCaptionReportData:(id)arg1;
- (id)mjComposingTimelineJsonString;
- (void)setMjComposingTimelineJsonString:(id)arg1;
- (id)mjComposingTimelineData;
- (void)setMjComposingTimelineData:(id)arg1;
- (id)aigcAsyncTemplateInfo;
- (void)setAigcAsyncTemplateInfo:(id)arg1;
- (void).cxx_destruct;
@end
