@interface MMScrollViewZoomReporter : NSObject
{
    BOOL _isDoubleTapZoom; // +0x8
    long long _scene; // +0x10
    long long _mediaType; // +0x18
    NSMutableArray * _actionAndScales; // +0x20
}
- (id)initWithScene:(long long)arg1 mediaType:(long long)arg2;
- (void)recordWithScale:(double)arg1;
- (void)reportIfNeeded;
- (void)doubleTapZoom;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)onScrollViewDisappearFromScreen;
- (void)_clearReportData;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (id)actionAndScales;
- (void)setActionAndScales:(id)arg1;
- (BOOL)isDoubleTapZoom;
- (void)setIsDoubleTapZoom:(BOOL)arg1;
- (void).cxx_destruct;
@end

