@interface FavTVViewController : ShakeTvViewController
{
    FavoritesItem * m_favItem; // +0xa0
}
- (id)initWithFavoritesItem:(id)arg1;
- (id)initWithFavData:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onDeleteTV;
- (void)onEditTVTag;
- (void).cxx_destruct;
@end
