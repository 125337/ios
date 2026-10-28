@interface AffExtDeviceNativeUtilImpl : NSObject <ExtDeviceNativeUtilBase>
- (BOOL)isAllowPushWhenExtDeviceOnline;
- (void)setAllowPushWhenExtDeviceOnline:(BOOL)arg1;
- (void)handleCommonErrorMsg:(int)arg1 errorMsg:(id)arg2;
- (void)updateDeviceInfos;
- (id)getSessionList:(int)arg1;
- (void)onConfirmLoginDevice:(int)arg1 syncChat:(BOOL)arg2 clientVersion:(int)arg3 msgContextPubKey:(id)arg4 syncRecordCtx:(id)arg5;
@end
