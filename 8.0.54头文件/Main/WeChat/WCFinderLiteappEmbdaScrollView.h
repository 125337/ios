@interface WCFinderLiteappEmbdaScrollView : UIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    BOOL _alreadyStart; // +0x8
    OpenLiteAppInfo * _liteAppInfo; // +0x10
    MMLiteAppView * _liteAppView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setLiteAppInfo:(id)arg1;
- (void)didMoveToWindow;
- (void)tryStartLiteApp;
- (void)onLiteAppContentSizeChagned:(unsigned int)arg1 size:(CGSize)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)liteAppInfo;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (BOOL)alreadyStart;
- (void)setAlreadyStart:(BOOL)arg1;
- (void).cxx_destruct;
@end

