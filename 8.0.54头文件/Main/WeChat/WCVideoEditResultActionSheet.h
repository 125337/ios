@interface WCVideoEditResultActionSheet : MMScrollActionSheet <RecentForwardScrollViewDelegate>
{
    NSArray * _actions; // +0x8
    id <WCVideoEditResultActionSheetRecentForwardDelegate> _recentForwardDelegate; // +0x10
}
+ (id)allActions;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)initRecentForwardScrollView;
- (id)initWithActions:(id)arg1;
- (id)init;
- (void)loadData;
- (id)buildItemArray;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)disableScrollSheetItem:(long long)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (id)recentForwardDelegate;
- (void)setRecentForwardDelegate:(id)arg1;
- (void).cxx_destruct;
@end

