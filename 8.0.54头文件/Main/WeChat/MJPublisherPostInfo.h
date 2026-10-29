@interface MJPublisherPostInfo : NSObject
{
    BOOL _isRealShootContent; // +0x8
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0x10
    NSString * _movieTitle; // +0x18
    FinderMusicReportInfo * _shootMusicReportInfo; // +0x20
    FinderMusicReportInfo * _editMusicReportInfo; // +0x28
    NSString * _photoToVideoGPSAssetId; // +0x30
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
- (void).cxx_destruct;
@end

