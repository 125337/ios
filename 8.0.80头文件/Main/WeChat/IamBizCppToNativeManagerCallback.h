@interface IamBizCppToNativeManagerCallback : NSObject
{
    IamBizCppToNativeManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(IamBizCppToNativeManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onSendMessageComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onNotifyMessageEvent:(id)arg1;
- (void)onGetMeTabOpenStateComplete:(unsigned long long)arg1 canOpen:(BOOL)arg2 finderOpen:(BOOL)arg3;
- (void)onnotifyBizPublishResultComplete:(unsigned long long)arg1;
- (void)onGetWebDraftComplete:(unsigned long long)arg1 draft:(id)arg2;
- (void)onDeleteWebDraftComplete:(unsigned long long)arg1;
- (void)onGetDraftStateComplete:(unsigned long long)arg1 hasArticleDraft:(BOOL)arg2 hasPictextDraft:(BOOL)arg3;
- (void)onFetchPhotoConsumerNotifyIncrementCountComplete:(unsigned long long)arg1 count:(int)arg2;
- (void)onFetchBrandFansMsgIncrementCountComplete:(unsigned long long)arg1 count:(int)arg2;
@end
