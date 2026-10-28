@interface FavFileDetailViewController : FileDetailViewController
{
    unsigned int m_favId; // +0x70
    BOOL _needReload; // +0x74
}
- (id)initWithFavItem:(id)arg1;
- (id)initWithFavItem:(id)arg1 LogicController:(id)arg2;
- (id)initWithFavDataWrap:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setDisableAutoDownload;
- (BOOL)needReload;
- (void)setNeedReload:(BOOL)arg1;
@end
