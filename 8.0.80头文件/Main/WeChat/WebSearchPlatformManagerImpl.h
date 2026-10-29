@interface WebSearchPlatformManagerImpl : NSObject <WebSearchPlatformManagerBase>
{
    WebSearchPlatformManagerCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)createPlatformView:(double)arg1 sugVisible:(BOOL)arg2;
- (void)notifyFocusChanged:(BOOL)arg1;
- (void)getWebViewPixelsAsync:(unsigned long long)arg1;
- (void)notifyFilterShowOrHideAsync:(unsigned long long)arg1 show:(BOOL)arg2;
- (void)notifyH5BoxResult:(int)arg1 boxId:(id)arg2 query:(id)arg3 requestId:(id)arg4 parentSearchId:(id)arg5 resultJson:(id)arg6;
- (void)dispose:(int)arg1;
- (id)callback;
- (void).cxx_destruct;
@end
