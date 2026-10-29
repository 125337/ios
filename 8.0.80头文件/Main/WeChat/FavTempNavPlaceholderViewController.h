@interface FavTempNavPlaceholderViewController : MMUIViewController
{
    unsigned long long _appearCount; // +0x70
    BOOL _dismissed; // +0x78
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)fav_dismissTempNavIfNeeded;
@end
