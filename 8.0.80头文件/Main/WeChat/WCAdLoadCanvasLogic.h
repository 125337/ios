@interface WCAdLoadCanvasLogic : NSObject <WCCanvasDynamicDataLoaderDelegate>
{
    WCCanvasDynamicDataLoader * _dynamicDataLoader; // +0x8
    NSMutableDictionary * _loadCompleteHandlerDic; // +0x10
    NSMutableDictionary * _preloadResFlagDic; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)loadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 compatibleMode:(BOOL)arg5 remoteLoadBeginBlock:(id /* block */)arg6 completeHandler:(id /* block */)arg7;
- (void)loadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 canvasDynamicLoadExtInfo:(id)arg5 compatibleMode:(BOOL)arg6 remoteLoadBeginBlock:(id /* block */)arg7 completeHandler:(id /* block */)arg8;
- (void)preloadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 shouldPreloadRes:(BOOL)arg5;
- (void)preloadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 canvasDynamicLoadExtInfo:(id)arg5 shouldPreloadRes:(BOOL)arg6;
- (void)preloadForCanvasXml:(id)arg1 preloadRes:(BOOL)arg2;
- (void)preloadForCanvasDSLJson:(id)arg1 preloadRes:(BOOL)arg2;
- (id)dynamicDataLoader;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)setDynamicDataLoader:(id)arg1;
- (id)loadCompleteHandlerDic;
- (void)setLoadCompleteHandlerDic:(id)arg1;
- (id)preloadResFlagDic;
- (void)setPreloadResFlagDic:(id)arg1;
- (void).cxx_destruct;
@end
