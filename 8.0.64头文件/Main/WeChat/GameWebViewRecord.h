@interface GameWebViewRecord : NSObject
{
    NSMutableArray * _webviewControllerArray; // +0x8
    NSMutableDictionary * _webviewControllerDic; // +0x10
}
- (id)init;
- (id)pageId:(id)arg1;
- (BOOL)isWebVCRecorded:(id)arg1;
- (void)recordWebVc:(id)arg1;
- (void)removeWebVc:(id)arg1;
- (id)webVcAtIndex:(unsigned long long)arg1;
- (id)webVcForPageId:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)objectArrayCnt;
- (id)webviewControllerArray;
- (void)setWebviewControllerArray:(id)arg1;
- (id)webviewControllerDic;
- (void)setWebviewControllerDic:(id)arg1;
- (void).cxx_destruct;
@end
