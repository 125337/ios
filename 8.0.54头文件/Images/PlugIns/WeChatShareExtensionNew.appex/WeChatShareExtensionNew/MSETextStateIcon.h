@interface MSETextStateIcon : NSObject <PBCoding>
{
    unsigned int showType; // +0x8
    NSString * iconId; // +0x10
    NSMutableArray * candidateAppearances; // +0x18
}
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_candidateAppearances;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appearance;
- (id)winnerAppearance;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (id)candidateAppearances;
- (void)setCandidateAppearances:(id)arg1;
- (void).cxx_destruct;
@end

