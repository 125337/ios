@interface TPRichMediaSynchronizer : NSObject <ITPPlayerRichMediaProcessorWrapperCallback, ITPInnerRichMediaProcessWrapperCallback, ITPInnerRichMediaSynchronizer>
{
    id <ITPRichMediaSynchronizerDelegate> delegate; // +0x8
    id <ITPInnerRichMediaSynchronizerDelegate> innerDelegate; // +0x10
    id <ITPPlayerRichMediaProcessorWrapper> _processor; // +0x18
    TPPlayerLogContext * _log; // +0x20
    TPPluginManager * _pluginManager; // +0x28
}
- (id)init;
- (void)dealloc;
- (long long)setRichMediaSource:(id)arg1;
- (long long)prepareAsync;
- (id)features;
- (long long)selectFeatureAsync:(int)arg1 extraRequestInfo:(id)arg2;
- (long long)deselectFeatureAsync:(int)arg1;
- (long long)reset;
- (void)releaseRichMedia;
- (long long)seekTo:(long long)arg1;
- (id)getFeatureDataWithCurrentPositionMs:(long long)arg1 richMediaIndexes:(id)arg2;
- (long long)setPlaybackRate:(float)arg1;
- (void)onRichMediaProcessorPrepared:(id)arg1;
- (void)onRichMediaProcessor:(id)arg1 errorCode:(int)arg2;
- (void)onRichMediaProcessor:(id)arg1 richMediaIndex:(int)arg2 featureData:(const void *)arg3;
- (void)onDeselectFeatureSuccess:(id)arg1 richMediaIndex:(int)arg2;
- (void)onSelectFeatureSuccess:(id)arg1 richMediaIndex:(int)arg2;
- (void)onRichMediaFeatureFailure:(id)arg1 richMediaIndex:(int)arg2 errorCode:(int)arg3;
- (void)onRichMediaProcessor:(id)arg1 infoType:(int)arg2 param1:(long long)arg3 param2:(long long)arg4 param3:(long long)arg5 object:(void *)arg6;
- (long long)OnGetCurrentPositionMs:(id)arg1;
- (void)pushEventToPluginWithEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)innerDelegate;
- (void)setInnerDelegate:(id)arg1;
- (id)processor;
- (void)setProcessor:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (id)pluginManager;
- (void)setPluginManager:(id)arg1;
- (void).cxx_destruct;
@end
