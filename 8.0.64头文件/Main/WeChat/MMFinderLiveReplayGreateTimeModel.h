@interface MMFinderLiveReplayGreateTimeModel : NSObject
{
    NSString * _greateDesc; // +0x8
    double _greateTime; // +0x10
    NSString * _thumbUrl; // +0x18
    unsigned long long _srcType; // +0x20
}
+ (id)createGreateTimeModel:(id)arg1;
+ (id)transferToSortedGreateTimeListFromAnchorSpecified:(id)arg1 autoDetection:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)greateDesc;
- (void)setGreateDesc:(id)arg1;
- (double)greateTime;
- (void)setGreateTime:(double)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (unsigned long long)srcType;
- (void)setSrcType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
