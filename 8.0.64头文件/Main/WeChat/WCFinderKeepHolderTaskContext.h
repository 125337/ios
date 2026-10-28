@interface WCFinderKeepHolderTaskContext : MMObject <PBCoding>
{
    double _playedPosition; // +0x8
    NSString * _nonceId; // +0x10
}
+ (void)PBArrayAdd_playedPosition;
+ (void)PBArrayAdd_nonceId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (double)playedPosition;
- (void)setPlayedPosition:(double)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void).cxx_destruct;
@end
