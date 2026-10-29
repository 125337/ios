@interface GalleryPickActionData : NSObject
{
    NSString * _actionTrace; // +0x8
    long long _shotCompletedTimes; // +0x10
}
+ (id)makeWithActionTrace:(id)arg1 shotCompletedTimes:(long long)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)actionTrace;
- (void)setActionTrace:(id)arg1;
- (long long)shotCompletedTimes;
- (void)setShotCompletedTimes:(long long)arg1;
- (void).cxx_destruct;
@end
