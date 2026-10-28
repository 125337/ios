@interface MMLimitedModeForceDisplayLogic : NSObject
{
    BOOL _forceDisplay; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)setForceDisplay:(BOOL)arg1;
- (BOOL)getForceDisplay;
- (void)clearForceDisplay;
- (BOOL)forceDisplay;
@end
