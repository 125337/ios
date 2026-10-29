@interface WCSnsZidlUtilsImpl : NSObject <SnsZidlUtilsBase, WCFacadeExt>
{
    SnsZidlUtilsCallback * _callback; // +0x8
}
- (id)init;
- (void)setCallback:(id)arg1;
- (void)transferVideoUtilAsync:(unsigned long long)arg1 source:(id)arg2;
- (void)transferVideoUtilWithParamAsync:(unsigned long long)arg1 source:(id)arg2 param:(id)arg3;
- (void)getMainDirAsync:(unsigned long long)arg1 path:(id)arg2;
- (void)requestNativeLocalPublishInfoListAsync:(unsigned long long)arg1 userName:(id)arg2;
- (void)requestNativeLocalPublishInfoAsync:(unsigned long long)arg1 publishId:(long long)arg2;
- (void)requestNativeLocalPublishDetailTipAsync:(unsigned long long)arg1 publishId:(long long)arg2;
- (void)performNativeLocalPublishDetailTipActionAsync:(unsigned long long)arg1 publishId:(long long)arg2;
- (void)deleteNativeLocalPublishInfoAsync:(unsigned long long)arg1 publishId:(long long)arg2;
- (void)getVideoInfoAsync:(unsigned long long)arg1 path:(id)arg2;
- (void)notifyNativeLocalPublishTask:(id)arg1;
- (void)notifyNativeLocalPublishTasksForItemIds:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onUploadTaskDidFail:(id)arg1;
- (void)onPrivateFeedUploadedWithTask:(id)arg1;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (id)callback;
- (void).cxx_destruct;
@end
