@interface MJObjectAllocationCounter : NSObject
+ (void)increaseObject:(id)arg1;
+ (void)decreaseObject:(id)arg1;
+ (void)prune;
+ (void)dump;
+ (id)dictionaryRepresentation;
@end

