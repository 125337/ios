@interface MMFinderLiveSubsidyPriceCrossFadeAnim : NSObject
{
    BOOL _disposed; // +0x8
    UIView * _priceView; // +0x10
    UIView * _snapshotLayer; // +0x18
    id /* block */ _onCleanup; // +0x20
}
+ (id)runWithPriceView:(id)arg1 onCleanup:(id /* block */)arg2;
- (void)start;
- (void)startDegradedAnimation;
- (void)cancel;
- (void)detachSnapshotAndDispose;
- (void)dispose;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)snapshotLayer;
- (void)setSnapshotLayer:(id)arg1;
- (BOOL)disposed;
- (void)setDisposed:(BOOL)arg1;
- (id /* block */)onCleanup;
- (void)setOnCleanup:(id /* block */)arg1;
- (void).cxx_destruct;
@end
