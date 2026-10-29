@interface DMatch : NSObject
{
    DMatch native; // +0x8
}
+ (id)fromNative:(DMatch *)arg1;
- (int)queryIdx;
- (void)setQueryIdx:(int)arg1;
- (int)trainIdx;
- (void)setTrainIdx:(int)arg1;
- (int)imgIdx;
- (void)setImgIdx:(int)arg1;
- (float)distance;
- (void)setDistance:(float)arg1;
- (DMatch *)nativeRef;
- (id)init;
- (id)initWithQueryIdx:(int)arg1 trainIdx:(int)arg2 distance:(float)arg3;
- (id)initWithQueryIdx:(int)arg1 trainIdx:(int)arg2 imgIdx:(int)arg3 distance:(float)arg4;
- (BOOL)lessThan:(id)arg1;
- (id)clone;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
