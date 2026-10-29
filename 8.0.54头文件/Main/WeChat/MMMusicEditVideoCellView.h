@interface MMMusicEditVideoCellView : MMUIView <MMMusicEditVideoCropViewDelegate, IMMMusicLyricServiceExt, MMMusicFinderVideoDownloadHelperDelegate>
{
    BOOL _isDownloadSuccess; // +0x8
    id <MMMusicEditVideoCellViewDelegate> _delegate; // +0x10
    UIView * _videoCropAreaContainerView; // +0x18
    MMMusicEditVideoPlayerContainerView * _videoPlayerContainerView; // +0x20
    MMMusicLiveLyricDisplayView * _lyricView; // +0x28
    MMMusicEditVideoCropView * _videoCropView; // +0x30
    MMMusicEditVideoCellModel * _editModel; // +0x38
    NSString * _songId; // +0x40
    MMTimer * _musicTimer; // +0x48
    AVAsset * _curCropAsset; // +0x50
    double _cropStartTimeInSecond; // +0x58
    double _cropEndTimeInSecond; // +0x60
    double _timeLimit; // +0x68
    MMMusicFinderVideoDownloadHelper * _downloadHelper; // +0x70
    NSString * _curDownloadTid; // +0x78
    NSString * _formatVideoPath; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 andSongId:(id)arg2;
- (void)dealloc;
- (void)resetTimer;
- (void)setupSubviews;
- (void)layoutSubviews;
- (BOOL)isCropped;
- (void)setEditVideoCellModel:(id)arg1 isPlayVideoImmediately:(BOOL)arg2;
- (void)initAndStartPlayVideoWithVideoCropView:(id)arg1;
- (void)updateEditVideoCellModel:(id)arg1;
- (CGRect)borrowVideoPlayerContainerViewFrame;
- (id)borrowVideoCropView;
- (void)pause;
- (void)resume:(unsigned int)arg1;
- (void)playVideoAndLoadLocalImageInSlider:(BOOL)arg1;
- (void)playVideo;
- (void)loadLocalImageSlider:(BOOL)arg1;
- (void)seekMusicAndVideo;
- (void)initAndSeekMusic;
- (void)onNeedToSeekMusicToStartTime;
- (void)musicEditVideoCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)musicEditVideoCropView:(id)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)musicEditVideoCropView:(id)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
- (void)musicEditVideoCropView:(id)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (id)genLocalThumbPathInPos:(double)arg1;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (void)onDownloadFinishWithTid:(id)arg1;
- (void)onDownloadFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoCropAreaContainerView;
- (void)setVideoCropAreaContainerView:(id)arg1;
- (id)videoPlayerContainerView;
- (void)setVideoPlayerContainerView:(id)arg1;
- (id)lyricView;
- (void)setLyricView:(id)arg1;
- (id)videoCropView;
- (void)setVideoCropView:(id)arg1;
- (id)editModel;
- (void)setEditModel:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)musicTimer;
- (void)setMusicTimer:(id)arg1;
- (id)curCropAsset;
- (void)setCurCropAsset:(id)arg1;
- (double)cropStartTimeInSecond;
- (void)setCropStartTimeInSecond:(double)arg1;
- (double)cropEndTimeInSecond;
- (void)setCropEndTimeInSecond:(double)arg1;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (id)downloadHelper;
- (void)setDownloadHelper:(id)arg1;
- (id)curDownloadTid;
- (void)setCurDownloadTid:(id)arg1;
- (id)formatVideoPath;
- (void)setFormatVideoPath:(id)arg1;
- (BOOL)isDownloadSuccess;
- (void)setIsDownloadSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

