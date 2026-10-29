@interface FTSMCSItem : NSObject <PBCoding>
{
    float _score; // +0x8
    unsigned int _baseTime; // +0xc
    NSString * _key; // +0x10
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_score;
+ (void)PBArrayAdd_baseTime;
+ (void)initialize;
+ (void)setDeclineFactor:(float)arg1;
- (id)getPBPropertyTable;
- (void)addScore;
- (void)updateScoreWithTime:(unsigned int)arg1;
- (long long)compareByScoreDesc:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (unsigned int)baseTime;
- (void)setBaseTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

