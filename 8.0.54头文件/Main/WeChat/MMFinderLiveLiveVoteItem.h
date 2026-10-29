@interface MMFinderLiveLiveVoteItem : NSObject
{
    BOOL _allowMultipleSelection; // +0x8
    NSString * _question; // +0x10
    NSMutableArray * _choices; // +0x18
    unsigned long long _timeLimit; // +0x20
}
- (id)question;
- (void)setQuestion:(id)arg1;
- (id)choices;
- (void)setChoices:(id)arg1;
- (unsigned long long)timeLimit;
- (void)setTimeLimit:(unsigned long long)arg1;
- (BOOL)allowMultipleSelection;
- (void)setAllowMultipleSelection:(BOOL)arg1;
- (void).cxx_destruct;
@end

