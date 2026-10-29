@interface MSEMatchTypeConfig : NSObject
{
    int _matchType; // +0x8
    int _matchSubType; // +0xc
}
- (id)initWithSearchMatchType:(int)arg1 SubType:(int)arg2;
- (int)matchType;
- (void)setMatchType:(int)arg1;
- (int)matchSubType;
- (void)setMatchSubType:(int)arg1;
@end

