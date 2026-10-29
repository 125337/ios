@interface FlutterNewLifeMainTabViewController : FlutterNewLifeViewController
+ (id)getInstace;
+ (BOOL)hasPageCache;
+ (void)preHeart;
- (BOOL)reusable;
- (void)tryRecycleSelf;
- (void)viewDidLoad;
- (void)dealloc;
@end

