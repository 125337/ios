@interface PersonalHotwordExptConfig : NSObject
{
    BOOL _localExtractionEnabled; // +0x8
    BOOL _cloudCorrectionEnabled; // +0x9
    BOOL _uploadEnabled; // +0xa
    double _correctionCheckInterval; // +0x10
    unsigned long long _correctionBufferCapacity; // +0x18
    unsigned long long _maxWordCount; // +0x20
    double _expirationInterval; // +0x28
}
- (id)initWithExptService:(id)arg1;
- (BOOL)localExtractionEnabled;
- (BOOL)cloudCorrectionEnabled;
- (BOOL)uploadEnabled;
- (double)correctionCheckInterval;
- (unsigned long long)correctionBufferCapacity;
- (unsigned long long)maxWordCount;
- (double)expirationInterval;
@end
