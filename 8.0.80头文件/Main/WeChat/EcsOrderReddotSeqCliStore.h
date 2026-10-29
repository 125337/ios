@interface EcsOrderReddotSeqCliStore : NSObject
+ (void)recordExpose:(id)arg1;
+ (void)recordClick:(id)arg1;
+ (id)buildFinderSyncClientCustomInfoBytes;
+ (void)clear;
+ (void)recordWithCtrlInfo:(id)arg1 action:(unsigned int)arg2;
+ (void)parseExposeItemId:(id *)arg1 reddotId:(id *)arg2 fromCtrlInfo:(id)arg3;
+ (id)stringForKey:(id)arg1 inDict:(id)arg2;
+ (id)storeKey;
+ (id)loadSeqLocked;
+ (void)persistLocked:(id)arg1;
@end
