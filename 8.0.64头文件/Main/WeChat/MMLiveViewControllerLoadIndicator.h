@interface MMLiveViewControllerLoadIndicator : NSObject <MMLiveLoadIndicating>
{
    BOOL _loading; // +0x8
    MMUIViewController * _viewController; // +0x10
    MMLiveViewControllerLoadIndicatorOptions * _options; // +0x18
}
- (id)initWithViewController:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)startLoading;
- (void)endLoadingSuccessfully:(BOOL)arg1 message:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
