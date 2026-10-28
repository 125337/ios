@interface WCFinderRedPacketThumbCollectionViewCell : UICollectionViewCell
{
    UIImageView * _cardImgView; // +0x8
    UILabel * _cardDesc; // +0x10
    NSString * _currentLoadUrl; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)cardImgView;
- (id)cardDesc;
- (void)prepareForReuse;
- (void)updateWithRedPacket:(id)arg1;
- (void)layoutAllSubviews;
- (void)setCardImgView:(id)arg1;
- (void)setCardDesc:(id)arg1;
- (id)currentLoadUrl;
- (void)setCurrentLoadUrl:(id)arg1;
- (void).cxx_destruct;
@end
