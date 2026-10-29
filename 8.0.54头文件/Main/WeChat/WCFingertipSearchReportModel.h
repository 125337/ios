@interface WCFingertipSearchReportModel : WCSearchReportModel
{
    BOOL _hasReddot; // +0x38
    long long _action; // +0x40
    NSString * _hitWordList; // +0x48
    NSString * _hitWordVersion; // +0x50
    unsigned long long _subScene; // +0x58
    NSString * _exposedWord; // +0x60
    NSString * _matchTypeList; // +0x68
    unsigned long long _msgContentLength; // +0x70
    unsigned long long _matchResult; // +0x78
}
- (id)initWithSNSItem:(id)arg1 subScene:(unsigned long long)arg2;
- (void)doReport;
- (void)doReport:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (BOOL)hasReddot;
- (void)setHasReddot:(BOOL)arg1;
- (id)hitWordList;
- (void)setHitWordList:(id)arg1;
- (id)hitWordVersion;
- (void)setHitWordVersion:(id)arg1;
- (unsigned long long)subScene;
- (void)setSubScene:(unsigned long long)arg1;
- (id)exposedWord;
- (void)setExposedWord:(id)arg1;
- (id)matchTypeList;
- (void)setMatchTypeList:(id)arg1;
- (unsigned long long)msgContentLength;
- (void)setMsgContentLength:(unsigned long long)arg1;
- (unsigned long long)matchResult;
- (void)setMatchResult:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

