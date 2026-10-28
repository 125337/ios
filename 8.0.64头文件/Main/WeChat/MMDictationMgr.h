@interface MMDictationMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isEnabled; // +0x8
    BOOL _isForwardEnabled; // +0x9
    BOOL _shouldUseNewIcon; // +0xa
    BOOL _shouldShowIconWhenInactive; // +0xb
    BOOL _useNewLogicV2; // +0xc
    int _educationCount; // +0x10
    MMDictationReporter * _reporter; // +0x18
}
+ (id)shared;
- (void)onServiceInit;
- (id)reporter;
- (id)educationKey;
- (void)increaseEducationCount;
- (void)markEducationDone;
- (BOOL)shouldShowEducation;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)isForwardEnabled;
- (void)setIsForwardEnabled:(BOOL)arg1;
- (void)setReporter:(id)arg1;
- (BOOL)shouldUseNewIcon;
- (void)setShouldUseNewIcon:(BOOL)arg1;
- (BOOL)shouldShowIconWhenInactive;
- (void)setShouldShowIconWhenInactive:(BOOL)arg1;
- (BOOL)useNewLogicV2;
- (void)setUseNewLogicV2:(BOOL)arg1;
- (int)educationCount;
- (void)setEducationCount:(int)arg1;
- (void).cxx_destruct;
@end
