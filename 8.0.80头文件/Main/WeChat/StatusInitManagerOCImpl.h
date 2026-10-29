@interface StatusInitManagerOCImpl : NSObject <StatusInitManagerBase>
+ (id)sharedManager;
+ (id)allocWithZone:(_NSZone *)arg1;
+ (id)new;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getInitRootPath;
- (id)getInitMediaPath;
@end
