@interface QBrandPromotionViewItem : NSObject <QBrandPromotionImageOwner>
{
    QBrandPromotionItem * _item; // +0x8
    InnerQMarker * _marker; // +0x10
    QBrandPromotionContext * _brandPromotionContext; // +0x18
}
- (id)initWithBrandPromotionItem:(id)arg1 context:(id)arg2;
- (void)removeMarker;
- (id)mapView;
- (id)imageURLString;
- (id)imageURLKey;
- (CGSize)imageSize;
- (double)connerRadius;
- (BOOL)isNight;
- (void)brandPromotionImageDownloader:(id)arg1 success:(id)arg2;
- (void)createMarkerWithImage:(id)arg1;
- (void)brandPromotionImageDownloader:(id)arg1 failure:(id)arg2;
- (id)item;
- (id)marker;
- (void)setMarker:(id)arg1;
- (id)brandPromotionContext;
- (void)setBrandPromotionContext:(id)arg1;
- (void).cxx_destruct;
@end

