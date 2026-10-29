@interface MBExtJsApiInfo : NSObject
{
    BOOL _isSync; // +0x8
    BOOL _isRunOnMainThread; // +0x9
    NSString * _apiName; // +0x10
}
- (id)init:(id)arg1 sync:(BOOL)arg2 mainThread:(BOOL)arg3;
- (BOOL)isSync;
- (void)setIsSync:(BOOL)arg1;
- (BOOL)isRunOnMainThread;
- (void)setIsRunOnMainThread:(BOOL)arg1;
- (id)apiName;
- (void)setApiName:(id)arg1;
- (void).cxx_destruct;
@end

