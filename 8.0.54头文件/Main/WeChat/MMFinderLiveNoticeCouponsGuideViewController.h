@interface MMFinderLiveNoticeCouponsGuideViewController : MMPageSheetBaseViewController
{
    id /* block */ _completion; // +0x68
}
+ (void)showIfNeededForNotices:(id)arg1 anchor:(id)arg2 style:(unsigned long long)arg3 whenKnowWillShow:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)initWithNotices:(id)arg1 anchor:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)dealloc;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

