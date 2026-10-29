@interface MJMovieTextSuggestionSeqBuffer : NSObject <PBCoding>
{
    unsigned long long _seqNumber; // +0x8
}
+ (void)PBArrayAdd_seqNumber;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)seqNumber;
- (void)setSeqNumber:(unsigned long long)arg1;
@end

