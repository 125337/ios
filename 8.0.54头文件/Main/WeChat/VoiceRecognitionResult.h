@interface VoiceRecognitionResult : NSObject
{
    NSArray * _texts; // +0x8
    NSArray * _voiceIdSet; // +0x10
}
+ (id)makeWithTexts:(id)arg1 voiceIdSet:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)texts;
- (void)setTexts:(id)arg1;
- (id)voiceIdSet;
- (void)setVoiceIdSet:(id)arg1;
- (void).cxx_destruct;
@end

