@interface VerticalWebSearch : WebSearchUseCase
{
    UIViewController * _fromViewController; // +0x8
}
+ (BOOL)finderLiveEnabled;
+ (void)jumpLiveSearchFrom:(id)arg1;
- (id)initWithContextMode:(id /* block */)arg1;
- (id)associateSearchBarWith:(id)arg1;
- (id)associateSearchBarWith:(id)arg1 withSearchBarAnimation:(BOOL)arg2;
- (void)_didStartWith:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (void).cxx_destruct;
@end

