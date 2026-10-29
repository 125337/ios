@interface EmoticonPreviewBaseWindowViewController : MMWindowViewController <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _isLoadLocally; // +0x7c
    EmoticonPreviewModel * _model; // +0x80
    UIImageView * _popoverView; // +0x88
    MMEmoticonView * _playerView; // +0x90
    UIView * _playerViewContainer; // +0x98
    UILabel * _descriptionLabel; // +0xa0
    MMUIActivityIndicatorView * _activityIndicatorView; // +0xa8
    unsigned long long _startLoadingTime; // +0xb0
}
- (void)viewDidLoad;
- (id)popoverView;
- (id)playerView;
- (id)playerViewContainer;
- (id)descriptionLabel;
- (id)activityIndicatorView;
- (BOOL)checkIfEmojiDownloaded;
- (void)setPreviewModel:(id)arg1;
- (void)playEmotionGifIfNeed;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setPopoverView:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewContainer:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (unsigned long long)startLoadingTime;
- (void)setStartLoadingTime:(unsigned long long)arg1;
- (BOOL)isLoadLocally;
- (void)setIsLoadLocally:(BOOL)arg1;
- (void).cxx_destruct;
@end
