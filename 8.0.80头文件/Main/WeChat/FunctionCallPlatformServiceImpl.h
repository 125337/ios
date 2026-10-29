@interface FunctionCallPlatformServiceImpl : NSObject <FunctionCallPlatformServiceBase>
{
    FunctionCallPlatformServiceCallback * _callback; // +0x8
}
- (void)notifyFlutterLikeOpAsync:(unsigned long long)arg1 listenId:(id)arg2 isLiked:(BOOL)arg3;
- (void)notifyFlutterThumbUpOpAsync:(unsigned long long)arg1 listenId:(id)arg2 isThumbLiked:(BOOL)arg3;
- (void)shareToFavWithTingItemAsync:(unsigned long long)arg1 listenItemBase64:(id)arg2;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
