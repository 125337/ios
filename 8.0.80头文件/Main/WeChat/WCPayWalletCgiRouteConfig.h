@interface WCPayWalletCgiRouteConfig : NSObject
+ (id)descriptionForKey:(long long)arg1;
+ (BOOL)isNewRouteEnabled;
+ (unsigned int)getCgiId:(long long)arg1 fallbackCgiId:(unsigned int)arg2;
+ (struct)routeEntryForKey:(long long)arg1;
@end
