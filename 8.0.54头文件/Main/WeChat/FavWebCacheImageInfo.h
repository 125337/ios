@interface FavWebCacheImageInfo : SimpleMsgInfo
{
    BOOL _isGif; // +0x28
    NSString * _dataPath; // +0x30
}
- (id)initWithDataPath:(id)arg1 isGif:(BOOL)arg2;
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (BOOL)isGif;
- (void)setIsGif:(BOOL)arg1;
- (void).cxx_destruct;
@end

