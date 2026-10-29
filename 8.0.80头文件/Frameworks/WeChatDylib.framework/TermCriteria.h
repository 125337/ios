@interface TermCriteria : NSObject
{
    TermCriteria native; // +0x8
}
+ (int)COUNT;
+ (int)EPS;
+ (int)MAX_ITER;
+ (id)fromNative:(TermCriteria *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)maxCount;
- (void)setMaxCount:(int)arg1;
- (double)epsilon;
- (void)setEpsilon:(double)arg1;
- (TermCriteria *)nativeRef;
- (id)init;
- (id)initWithType:(int)arg1 maxCount:(int)arg2 epsilon:(double)arg3;
- (id)initWithVals:(id)arg1;
- (void)set:(id)arg1;
- (id)clone;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
