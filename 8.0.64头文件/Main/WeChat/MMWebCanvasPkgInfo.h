@interface MMWebCanvasPkgInfo : NSObject
{
    MMWebCanvasBasePkgInfo * _basePkgInfo; // +0x8
    MMWebCanvasBizPkgInfo * _bizPkgInfo; // +0x10
}
- (id)description;
- (id)basePkgInfo;
- (void)setBasePkgInfo:(id)arg1;
- (id)bizPkgInfo;
- (void)setBizPkgInfo:(id)arg1;
- (void).cxx_destruct;
@end
