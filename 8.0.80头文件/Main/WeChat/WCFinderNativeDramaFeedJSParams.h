@interface WCFinderNativeDramaFeedJSParams : NSObject
{
    NSString * _exportFromObjectId; // +0x8
    NSString * _exportNativeDramaId; // +0x10
    JsApiSourceInfo * _sourceInfo; // +0x18
    id /* block */ _onViewDisappear; // +0x20
}
- (id)exportFromObjectId;
- (void)setExportFromObjectId:(id)arg1;
- (id)exportNativeDramaId;
- (void)setExportNativeDramaId:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id /* block */)onViewDisappear;
- (void)setOnViewDisappear:(id /* block */)arg1;
- (void).cxx_destruct;
@end
