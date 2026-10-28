@interface MJTemplateMoviePlayerConfiguration : NSObject
{
    BOOL _shouldStopPlayOnAppWillResignActive; // +0x8
    BOOL _shouldStartPlayOnAppWillBecomeActive; // +0x9
}
- (id)initWithShouldStopPlayOnAppWillResignActive:(BOOL)arg1 shouldStartPlayOnAppWillBecomeActive:(BOOL)arg2;
- (BOOL)shouldStopPlayOnAppWillResignActive;
- (BOOL)shouldStartPlayOnAppWillBecomeActive;
@end
