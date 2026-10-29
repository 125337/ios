@interface MMFinderLiveCreateLiveBottomPOIListBar : UIView
{
    id /* block */ _onPOIListBarItemClicked; // +0x8
    NSMutableArray * _poiItemArray; // +0x10
    LbsLifeData * _lbsLifeData; // +0x18
}
- (id)init;
- (void)updateLbsLifeData:(id)arg1;
- (void)clearPOIItemArray;
- (void)layoutSubviews;
- (void)onPOIItemClicked:(id)arg1;
- (id /* block */)onPOIListBarItemClicked;
- (void)setOnPOIListBarItemClicked:(id /* block */)arg1;
- (id)poiItemArray;
- (void)setPoiItemArray:(id)arg1;
- (id)lbsLifeData;
- (void)setLbsLifeData:(id)arg1;
- (void).cxx_destruct;
@end
