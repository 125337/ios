@interface MMFinderLiveFeedStreamCommentLogic : NSObject
{
    BOOL _banComment; // +0x8
    id <MMFinderLiveFeedStreamCommentLogicDelegate> _delegate; // +0x10
    MMFinderLiveFeedStreamCarouselSingleCtrl * _carouselCtrl; // +0x18
    FeedsPreviewLiveMultiStyleInfo_IndependentStyleInfo_StyleTwenty * _commentConfig; // +0x20
    NSMutableArray * _datas; // +0x28
}
- (id)init;
- (void)setBanComment:(BOOL)arg1;
- (void)prepareForReuse;
- (void)receiveDataArray:(id)arg1;
- (id)popFirstCarouselItem;
- (unsigned long long)dataCount;
- (BOOL)filterLastShown;
- (unsigned long long)commentWordsLimit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)banComment;
- (id)carouselCtrl;
- (void)setCarouselCtrl:(id)arg1;
- (id)commentConfig;
- (void)setCommentConfig:(id)arg1;
- (id)datas;
- (void)setDatas:(id)arg1;
- (void).cxx_destruct;
@end
