@interface WxpayPreparedPackagePaths : NSObject
{
    mutex _mutex; // +0x8
    NSMutableDictionary * _paths; // +0x48
}
+ (id)sharedPaths;
- (id)init;
- (void)recordPath:(id)arg1 forAppId:(id)arg2 whileCurrent:(id /* block */)arg3;
- (id)pathForAppId:(id)arg1;
- (void)removeAll;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
