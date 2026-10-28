@interface BrandMyTabEntranceSection : WCFinderMyTabSectionController <BrandMyTabEntranceCardDelegate>
{
    BrandMyTabEntranceCardInfo * _cardInfo; // +0x8
    BrandMyTabEntranceCardView * _cardView; // +0x10
}
- (id)init;
- (void)getShowButtonsStrategy;
- (void)getRedDotInfo;
- (void)jumpPostPicture;
- (void)jumpPostText;
- (void)jumpProfile;
- (void)jumpNotify;
- (id)displayTitle;
- (id)createDisplayCard;
- (id)cardView;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end
