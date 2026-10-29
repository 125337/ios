@interface WCCommentEmotionView : UIView <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _isStatic; // +0x8
    double _maxLength; // +0x10
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x18
    id <WCCommentEmotionViewDelegate> _delegate; // +0x20
    UIImageView * _emoctionView; // +0x28
    MMUIActivityIndicatorView * _loadingView; // +0x30
    MMUIButton * _failRetryBtn; // +0x38
}
+ (CGSize)getEmojiSize:(id)arg1 maxLength:(double)arg2;
+ (CGSize)getEmoctionViewShowSize:(CGSize)arg1 maxLength:(double)arg2;
+ (double)getEmoctionScaleFor:(double)arg1 maxLength:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)addEmoctionView;
- (void)showLoadingView;
- (void)hideLoadingView;
- (void)showDownloadFailView;
- (void)hideDownloadFailView;
- (void)onRetryDownLoad;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (void)showEmotionWithData:(id)arg1 md5:(id)arg2;
- (void)startDownloadEmoticon;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (double)maxLength;
- (void)setMaxLength:(double)arg1;
- (BOOL)isStatic;
- (void)setIsStatic:(BOOL)arg1;
- (id)snsEmojiInfoObj;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emoctionView;
- (void)setEmoctionView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)failRetryBtn;
- (void)setFailRetryBtn:(id)arg1;
- (void).cxx_destruct;
@end

