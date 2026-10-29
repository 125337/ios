@interface FavProductDetailViewController : ProductDetailViewController
{
    FavoritesItem * m_favItem; // +0x70
    FavDataItemWrap * m_favDataWrap; // +0x78
}
- (id)initWithFavoritesItem:(id)arg1;
- (id)initWithFavDataWrap:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onDeleteProduct;
- (void)onEditProductTag;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void).cxx_destruct;
@end

