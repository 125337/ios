@interface EmoticonBoradCrossCollectionRecommendAndAICell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt, EmoticonDownloadTaskDelegate>
{
    BOOL _needPlayGif; // +0x8
    BOOL _isPlaying; // +0x9
    NSObject * _downloadMgr; // +0x10
    id <EmoticonBoradCrossCollectionRecommendAndAICellDelegate> _delegate; // +0x18
    MMEmoticonView * _emoticonView; // +0x20
    UIView * _loadingView; // +0x28
    CEmoticonWrap * _emoticonWrap; // +0x30
    MMUIActivityIndicatorView * _indicatorView; // +0x38
    UIView * _retryView; // +0x40
    UIImageView * _retrySmileImageView; // +0x48
    UILabel * _retryTipLabel; // +0x50
    YYAsyncImageView * _emoticonThumbView; // +0x58
    unsigned long long _startDownloadTime; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)emoticonView;
- (id)loadingView;
- (id)indicatorView;
- (id)retryView;
- (id)retrySmileImageView;
- (id)retryTipLabel;
- (void)layoutSubviews;
- (void)updateEmojiDataView:(id)arg1;
- (void)playGif:(BOOL)arg1;
- (void)updateEmoticonView:(BOOL)arg1;
- (void)showEmoticonView;
- (void)showLoadingView;
- (void)showRetryView;
- (void)handleRetryTap;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onDownloadTaskFinished:(id)arg1 successful:(BOOL)arg2 fromLocal:(BOOL)arg3;
- (void)onDownloadthumbFinished:(id)arg1 filePath:(id)arg2;
- (BOOL)needPlayGif;
- (void)setNeedPlayGif:(BOOL)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setRetryView:(id)arg1;
- (void)setRetrySmileImageView:(id)arg1;
- (void)setRetryTipLabel:(id)arg1;
- (id)emoticonThumbView;
- (void)setEmoticonThumbView:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (unsigned long long)startDownloadTime;
- (void)setStartDownloadTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
