@interface WCFinderFlutterViewController : MMFlutterViewController
{
    BOOL _forbidenSlideBack; // +0x70
}
- (BOOL)shouldSkipNavInteractiveGesture;
- (BOOL)forbidenSlideBack;
- (void)setForbidenSlideBack:(BOOL)arg1;
@end
