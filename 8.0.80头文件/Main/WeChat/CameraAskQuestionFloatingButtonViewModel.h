@interface CameraAskQuestionFloatingButtonViewModel : NSObject
{
    BOOL _showNew; // +0x8
    BOOL _getAnimationAlwaysEnabled; // +0x9
    long long _intentType; // +0x10
    double _getAnimationInitialPlayDelay; // +0x18
}
- (long long)intentType;
- (void)setIntentType:(long long)arg1;
- (BOOL)showNew;
- (void)setShowNew:(BOOL)arg1;
- (BOOL)getAnimationAlwaysEnabled;
- (void)setGetAnimationAlwaysEnabled:(BOOL)arg1;
- (double)getAnimationInitialPlayDelay;
- (void)setGetAnimationInitialPlayDelay:(double)arg1;
@end
