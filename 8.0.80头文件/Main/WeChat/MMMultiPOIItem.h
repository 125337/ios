@interface MMMultiPOIItem : NSObject
{
    BOOL _detailLoaded; // +0x8
    NSString * _itemId; // +0x10
    UIImage * _icon; // +0x18
    NSString * _title; // +0x20
    NSString * _subtitle; // +0x28
    NSString * _city; // +0x30
    NSString * _country; // +0x38
    id _userData; // +0x40
    id /* block */ _tapHandler; // +0x48
    NSData * _poiMsgData; // +0x50
    NSString * _contentUrl; // +0x58
    NSString * _coverImageUrl; // +0x60
    CLLocationCoordinate2D _coordinate; // +0x68
}
- (id)init;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (id)poiMsgData;
- (void)setPoiMsgData:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)coverImageUrl;
- (void)setCoverImageUrl:(id)arg1;
- (BOOL)detailLoaded;
- (void)setDetailLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
