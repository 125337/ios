@interface VoIPMPVoiceEnhancementGuideStateParams : NSObject
{
    BOOL _visible; // +0x8
    BOOL _enabled; // +0x9
}
+ (id)makeWithVisible:(BOOL)arg1 enabled:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
@end
