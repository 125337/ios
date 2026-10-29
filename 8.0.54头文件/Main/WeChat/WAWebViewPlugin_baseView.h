@interface WAWebViewPlugin_baseView : WAWebViewPlugin_embedView <WABaseViewDelegate, UIScrollViewDelegate, WATouchBaseViewDelegate>
{
    BOOL _isReady; // +0x8
    NSMutableArray * _animates; // +0x10
}
+ (void)recoverImageScrollView:(id)arg1;
+ (void)refreshImageScrollView:(id)arg1 minimumZoomScale:(double)arg2 zoomScale:(double)arg3;
+ (id)imageWithData:(id)arg1;
- (unsigned int)insertBaseView:(id)arg1;
- (void)updateBaseView:(id)arg1;
- (void)removeBaseView:(unsigned int)arg1;
- (void)onButtonClick:(id)arg1;
- (unsigned int)insertScrollView:(id)arg1;
- (void)updateScrollView:(id)arg1;
- (void)removeScrollView:(unsigned int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)animateCoverView:(id)arg1 param:(id)arg2 block:(id /* block */)arg3;
- (unsigned int)insertScrollImageViewWithParams:(id)arg1;
- (void)updateScrollImageViewWithParams:(id)arg1;
- (void)removeScrollImageViewWithViewId:(unsigned int)arg1;
- (void)loadImageScrollView:(id)arg1 imageURL:(id)arg2 viewId:(unsigned int)arg3 zoomScale:(double)arg4 minimumZoomScale:(double)arg5;
- (void).cxx_destruct;
@end

