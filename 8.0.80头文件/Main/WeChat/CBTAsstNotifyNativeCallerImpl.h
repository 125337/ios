@interface CBTAsstNotifyNativeCallerImpl : NSObject <CBTAsstNotifyCPP2NativeCallerBase>
{
    CBTAsstNotifyCPP2NativeCallerCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)onShowUnreadNotifyAsync:(unsigned long long)arg1 title:(id)arg2 body:(id)arg3 localId:(int)arg4 source:(id)arg5;
- (void)_showInAppBannerWithBody:(id)arg1 localId:(int)arg2 source:(id)arg3;
- (void)_showLocalPushWithBody:(id)arg1;
- (id)callback;
- (void).cxx_destruct;
@end
