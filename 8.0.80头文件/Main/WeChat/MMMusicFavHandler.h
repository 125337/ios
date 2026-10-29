@interface MMMusicFavHandler : MMObject
{
    BOOL _isFromShake; // +0x8
    id <MMMusicFavHandlerDataSource> _dataSource; // +0x10
    id <MMMusicFavHandlerDelegate> _delegate; // +0x18
    MMMusicVideoImageDownloader * _imageDownLoader; // +0x20
}
- (void)addToFavouritesWithMusicInfo:(id)arg1 mvModel:(id)arg2 favSourceType:(int)arg3;
- (id)imageDownLoader;
- (id)genLogMusicInfo:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFromShake;
- (void)setIsFromShake:(BOOL)arg1;
- (void)setImageDownLoader:(id)arg1;
- (void).cxx_destruct;
@end
