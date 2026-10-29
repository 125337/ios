@interface MMFinderLiveBulkBuyMembersView : UIView
{
    BOOL _forceHideArrow; // +0x8
    BOOL _withLiveDynamicFont; // +0x9
    BOOL _hasMore; // +0xa
    id <MMFinderLiveBulkBuyMembersViewDelegate> _delegate; // +0x10
    NSArray * _memberViews; // +0x18
    UIView * _tailView; // +0x20
    UILabel * _tailLabel; // +0x28
    UIImageView * _tailIcon; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 withLiveDynamicFont:(BOOL)arg2;
- (void)updateWithBulkBuy:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)forceHideArrow;
- (void)setForceHideArrow:(BOOL)arg1;
- (BOOL)withLiveDynamicFont;
- (void)setWithLiveDynamicFont:(BOOL)arg1;
- (id)memberViews;
- (void)setMemberViews:(id)arg1;
- (id)tailView;
- (void)setTailView:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (id)tailIcon;
- (void)setTailIcon:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
