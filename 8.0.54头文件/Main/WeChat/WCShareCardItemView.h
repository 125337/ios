@interface WCShareCardItemView : MMUIView
{
    BOOL _bForCard; // +0x8
    NSArray * _shareCardList; // +0x10
    WCShareCardData * _curDisplayShareCard; // +0x18
    UIView * _cardBgView; // +0x20
    UIView * _coverView; // +0x28
    UIView * _cardBgContainerView; // +0x30
    NSString * _shareUsernameText; // +0x38
}
+ (double)ShareCardGatherViewHeight;
+ (double)LocalCityShareCardEmptyTipsHeight;
- (void)layoutSubviews;
- (void)initViewForShareCard;
- (BOOL)genShareUserNameAndDetectIfMoreThan2ShareUsr;
- (id)genCardBgView;
- (id)genLogoView;
- (id)genTagListView;
- (id)genNewItemView;
- (id)genTagItemViewWithTagItem:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void).cxx_destruct;
@end

