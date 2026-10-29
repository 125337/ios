@interface WCFinderLiveReplayPreviewImgInfo : NSObject <MMImageLoaderObserver>
{
    NSString * _imgUrl; // +0x8
    double _timeValue; // +0x10
    NSString * _imgTargetUrl; // +0x18
    unsigned long long _loadState; // +0x20
    id /* block */ _preLoadCompletion; // +0x28
    unsigned long long _preRequestCnt; // +0x30
}
+ (id)getFixedSectionFromImgUrl:(id)arg1;
- (void)setImgUrl:(id)arg1;
- (unsigned long long)getImgLoadState;
- (void)preLoadImage;
- (void)checkLoadState;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
- (void)ImageDidFail:(id)arg1;
- (id)imgUrl;
- (double)timeValue;
- (void)setTimeValue:(double)arg1;
- (id)imgTargetUrl;
- (void)setImgTargetUrl:(id)arg1;
- (unsigned long long)loadState;
- (void)setLoadState:(unsigned long long)arg1;
- (id /* block */)preLoadCompletion;
- (void)setPreLoadCompletion:(id /* block */)arg1;
- (unsigned long long)preRequestCnt;
- (void)setPreRequestCnt:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

