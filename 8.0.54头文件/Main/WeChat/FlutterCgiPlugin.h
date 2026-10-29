@interface FlutterCgiPlugin : NSObject <MMFlutterPlugin, FlutterCgiHost>
+ (id)safeExtractBaseResponseWithFieldNumber:(int)arg1 fromData:(id)arg2;
+ (id)extractBaseResponseWithFieldNumber:(int)arg1 fromData:(id)arg2;
+ (id)cgiWrapRequest:(id)arg1 finderExtInfo:(id)arg2;
+ (void)privateSendCgiWrap:(id)arg1 completion:(id /* block */)arg2;
+ (void)privateSendCgiWrap:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)onAttachedToEngine:(id)arg1;
- (void)sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendFinderRequest:(id)arg1 extInfo:(id)arg2 completion:(id /* block */)arg3;
@end

