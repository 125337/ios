@interface TextState3rdPartyDataItemFactory : NSObject
+ (void)requestFinderDataItemFromFeedId:(id)arg1 nonceId:(id)arg2 handler:(id /* block */)arg3;
+ (void)requestWeAppDataItemFromUsername:(id)arg1 path:(id)arg2 type:(unsigned int)arg3 handler:(id /* block */)arg4;
+ (id)upgradeH5DataItem;
@end

