@interface WCFinderCommentEmoticonView : MMUIView <IStoreEmotionSingleDownloadMgrExt>
{
    MMEmoticonView * _emoticonView; // +0x8
    UIImageView * _emptyTipsView; // +0x10
    WCFinderAnimationLoadingView * _loadingTipsView; // +0x18
    WCFinderComment * _comment; // +0x20
}
+ (CGSize)sizeWithFinderEmoticonComment:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (CGSize)updateWithFinderEmoticonComment:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)emptyTipsView;
- (void)setEmptyTipsView:(id)arg1;
- (id)loadingTipsView;
- (void)setLoadingTipsView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (void).cxx_destruct;
@end

