@interface FlutterPageStateDispacher : NSObject
{
    MMFlutterHybridNavPageState * _pageState; // +0x8
}
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (id)pageState;
- (void)setPageState:(id)arg1;
- (void).cxx_destruct;
@end

