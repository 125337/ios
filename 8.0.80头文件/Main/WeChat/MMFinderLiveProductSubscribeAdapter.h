@interface MMFinderLiveProductSubscribeAdapter : NSObject
+ (BOOL)handleProductButtonInfo:(id)arg1 productID:(unsigned long long)arg2 taskID:(id)arg3 scene:(int)arg4 previewID:(id)arg5 wantBuySource:(int)arg6 sheetHandler:(id)arg7 refresher:(id /* block */)arg8;
+ (void)requestWantBuyWithOpType:(int)arg1 productID:(unsigned long long)arg2 taskID:(id)arg3 previewID:(id)arg4 source:(int)arg5 sheetHandler:(id)arg6 refresher:(id /* block */)arg7;
@end
