@interface WCFinderHistoryPageBase : UIView
{
    WCFinderHistoryPageModel * _pageModel; // +0x8
}
+ (id)makePageForVM:(id)arg1 frame:(CGRect)arg2;
+ (void)openCollection:(id)arg1 fromVC:(id)arg2;
- (id)initWithModel:(id)arg1 frame:(CGRect)arg2;
- (id)findMMVC;
- (id)pageModel;
- (void)setPageModel:(id)arg1;
- (void).cxx_destruct;
@end
