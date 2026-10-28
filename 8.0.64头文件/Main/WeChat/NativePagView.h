@interface NativePagView : NSObject <NSURLSessionDelegate, PAGViewListener, FlutterPlatformView>
{
    PAGFile * _pagFile; // +0x8
    PAGView * _pagView; // +0x10
    FlutterMethodChannel * _channel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (id)view;
- (id)resourcePath:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (void)onAnimationUpdate:(id)arg1;
- (id)pagFile;
- (void)setPagFile:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
