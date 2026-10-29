@interface AffFinderCppToNativeManagerImpl : NSObject <AffFinderCppToNativeManagerBase>
- (id)getFinderUserName;
- (id)getMultiFinderUserNames;
- (id)getLocation:(int)arg1;
- (id)getFinderCtrlInfoByKeyPath:(id)arg1;
- (id)findShowInfoByPath:(id)arg1;
- (id)getFinderBaseReq:(int)arg1 syncScene:(int)arg2 cmdId:(int)arg3;
- (id)getFinderSyncClientInfo:(id)arg1;
- (int)getSafeCacheTimeWithTimestamp:(double)arg1;
@end
