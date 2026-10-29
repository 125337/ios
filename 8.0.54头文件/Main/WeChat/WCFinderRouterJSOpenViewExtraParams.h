@interface WCFinderRouterJSOpenViewExtraParams : NSObject
{
    BOOL _forceIgnoreFinderAuthBlock; // +0x8
    MMFinderLiveFrontEndPreviewView * _previewView; // +0x10
    id /* block */ _popFeedViewCallBack; // +0x18
    id /* block */ _feedStopPlayCallBack; // +0x20
}
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (BOOL)forceIgnoreFinderAuthBlock;
- (void)setForceIgnoreFinderAuthBlock:(BOOL)arg1;
- (id /* block */)popFeedViewCallBack;
- (void)setPopFeedViewCallBack:(id /* block */)arg1;
- (id /* block */)feedStopPlayCallBack;
- (void)setFeedStopPlayCallBack:(id /* block */)arg1;
- (void).cxx_destruct;
@end

