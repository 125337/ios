@interface WXApi : NSObject
+ (BOOL)isWechatApp;
+ (void)sendPayReq:(id)arg1 extraData:(id)arg2 completion:(id /* block */)arg3;
@end
