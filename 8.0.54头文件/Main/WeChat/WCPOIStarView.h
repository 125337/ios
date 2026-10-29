@interface WCPOIStarView : MMUIView
{
    NSMutableArray * m_arrPOIStars; // +0x8
    unsigned int _poiScore; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onClickStar:(id)arg1;
- (void)deSelectStar:(id)arg1;
- (unsigned int)poiScore;
- (void)setPoiScore:(unsigned int)arg1;
- (void).cxx_destruct;
@end

