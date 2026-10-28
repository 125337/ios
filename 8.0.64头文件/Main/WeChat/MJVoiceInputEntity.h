@interface MJVoiceInputEntity : NSObject
{
    BOOL _isCancelled; // +0x8
    unsigned int _captionsIndex; // +0xc
    NSString * _identifier; // +0x10
    MJVoiceInputRecognizer * _recognizer; // +0x18
    NSArray * _captions; // +0x20
}
- (id)initWithIdentifier:(id)arg1 recognizer:(id)arg2;
- (unsigned long long)state;
- (void)setCaptions:(id)arg1 withIndex:(unsigned int)arg2;
- (id)identifier;
- (id)recognizer;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (id)captions;
- (void)setCaptions:(id)arg1;
- (unsigned int)captionsIndex;
- (void)setCaptionsIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
