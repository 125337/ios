@interface FlutterNavigatorRegistry : NSObject
{
    NSMutableDictionary * _navigatorMap; // +0x8
}
+ (id)sharedInstance;
- (id)initPrivate;
- (void)registerNavigator:(id)arg1 navigator:(id)arg2;
- (void)unregisterNavigator:(id)arg1;
- (id)getNavigator:(id)arg1;
- (BOOL)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)navigatorMap;
- (void)setNavigatorMap:(id)arg1;
- (void).cxx_destruct;
@end
