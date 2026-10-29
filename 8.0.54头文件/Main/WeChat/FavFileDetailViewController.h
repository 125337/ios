@interface FavFileDetailViewController : FileDetailViewController
{
    unsigned int m_favId; // +0x68
    BOOL _needReload; // +0x6c
}
- (id)initWithFavItem:(id)arg1;
- (id)initWithFavItem:(id)arg1 LogicController:(id)arg2;
- (id)initWithFavDataWrap:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setDisableAutoDownload;
- (BOOL)needReload;
- (void)setNeedReload:(BOOL)arg1;
@end

