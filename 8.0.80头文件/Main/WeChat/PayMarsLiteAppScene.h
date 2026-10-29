@interface PayMarsLiteAppScene : NSObject
+ (int)startRequestWithNativePtr:(long long)arg1 pbBytes:(id)arg2 cgiUrl:(id)arg3 cgiId:(int)arg4 reqCmdId:(int)arg5 timeoutMs:(int)arg6 retryCount:(int)arg7 channelType:(int)arg8;
+ (id)getBaseRequestWithScene:(int)arg1;
+ (id)crtSign:(id)arg1;
@end
