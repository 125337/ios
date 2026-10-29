@interface EcsFinderFeedPopupViewModel : NSObject
{
    NSArray * _popupInfos; // +0x8
    NSArray * _popupInfosVM; // +0x10
    long long _currentIndex; // +0x18
    id /* block */ _onScrollToIndex; // +0x20
    NSTimer * _timer; // +0x28
}
+ (id)createWithPopupInfos:(id)arg1;
- (id)initWithPopupInfos:(id)arg1;
- (void)setPopupInfos:(id)arg1;
- (void)startScroll;
- (void)onScrollToIndexDone;
- (void)stopScroll;
- (void)setCurrentIndex:(long long)arg1;
- (long long)edgeTop;
- (long long)cellHeight;
- (long long)cellSpace;
- (long long)viewHeight;
- (long long)cellTopForIndex:(long long)arg1;
- (long long)offsetY_alpha0;
- (long long)offsetY_alpha1;
- (id)popupInfos;
- (id)popupInfosVM;
- (long long)currentIndex;
- (id /* block */)onScrollToIndex;
- (void)setOnScrollToIndex:(id /* block */)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
