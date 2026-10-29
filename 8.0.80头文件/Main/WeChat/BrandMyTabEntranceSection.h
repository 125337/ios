@interface BrandMyTabEntranceSection : WCFinderMyTabSectionController <BrandMyTabEntranceCardDelegate>
{
    BrandMyTabEntranceCardInfo * _cardInfo; // +0x8
    BrandMyTabEntranceCardView * _cardView; // +0x10
}
- (id)init;
- (void)initFailedRedDot;
- (void)getShowButtonsStrategy;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)dealloc;
- (id)genReportInfo;
- (void)getRedDotInfo;
- (void)fetchAcct;
- (void)jumpPostPicture;
- (void)jumpPostText;
- (void)jumpProfile;
- (void)jumpNotify;
- (void)openWebUrl:(id)arg1;
- (id)displayTitle;
- (id)createDisplayCard;
- (id)cardView;
- (id)genOpenPublishParamsWithType:(unsigned long long)arg1;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end
